#include <iostream>
#include <cstdlib> 
#include <string.h>

using namespace std;  

int main(){
    int valor,i=1,j=1,h;
 	int **notas; //1,5,10,50

	cin >> valor;
	do{
		notas = new int*[valor];
		for(i=0;i<valor;i++){
			notas[i] = new int[4];
			memset (notas[i], 0, sizeof(int)*4);
		}
		
		h=0;

		for(i=1;i<=valor;i++){
			if(i == 1 ) {
				memset (notas[i], 0, sizeof(int)*4);
				notas[i][0] += 1;
			}else if(i == 5 ) {
				memset (notas[i], 0, sizeof(int)*4);
				notas[i][1] += 1;
			}else if(i == 10 ) {
				memset (notas[i], 0, sizeof(int)*4);
				notas[i][2] += 1;
			}
			else if(i == 50 ){
				memset (notas[i], 0, sizeof(int)*4);
				notas[i][3] = 1;
			}else{
				notas[i] = notas[i-1];
			}


		}
		

		cout << "Teste " << j << endl;
		cout << endl;
		j++;  

		cin >> valor;
	}while(valor > 0);

    return 0;    
 
} 