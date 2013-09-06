#include <iostream>
#include <cstdlib> 
#include <string.h>

using namespace std;  

int main(){
    int valor,i=1,j=1,h,m;
 	int **notas; //1,5,10,50

	cin >> valor;
	do{
		notas = new int*[valor+2];
		for(i=0;i<=valor;i++){
			notas[i] = new int[4];
			for(m=0;m<4;m++)notas[i][m] = 0;
		}
		
		h=0;

		for(i=1;i<=valor;i++){
			
			if(i == 1 ) {
				for(m=0;m<4;m++)notas[i][m] = 0;
				notas[i][0]++;
			}else if(i == 5 ) {
				for(m=0;m<4;m++)notas[i][m] = 0;
				notas[i][1] += 1;
			}else if(i == 10 ) {
				for(m=0;m<4;m++)notas[i][m] = 0;
				notas[i][2] += 1;
			}
			else if(i == 50 ){
				for(m=0;m<4;m++)notas[i][m] = 0;
				notas[i][3] = 1;
			}else{
				notas[i] = notas[i-1];
				notas[i][0]++;
				if(notas[i][0] == 5){
					notas[i][0] = 0;
					notas[i][1]++;
				}
				if(notas[i][1] == 2){
					notas[i][1] = 0;
					notas[i][2]++;
				}
				if(notas[i][2] == 5){
					notas[i][2] = 0;
					notas[i][3]++;
				}
			}
		} 

		cout << "Teste " << j << endl;
		cout << notas[i-1][3] << " " << notas[i-1][2] << " " << notas[i-1][1] << " " << notas[i-1][0] << endl;
		cout << endl;
		j++;  

		cin >> valor;
	}while(valor > 0);

    return 0;    
 
} 