#include <iostream>
#include <cstdlib> 
#include <string.h>

using namespace std;  

int main(){
    int valor,num_moedas,i=1,j=1,h,m;
 	int moedas[100]; 
 	int min[50000];

	cin >> valor;
	cin >> num_moedas;

	while( valor > 0){  
		 
		min[0] = 0;
		for(h=1;h<=valor;h++)min[h] = 50000; 

		for(i=0;i<num_moedas;i++)
			cin >> moedas[i]; 	

		for(i=1;i<=valor;i++){

			for(j=0;j<num_moedas;j++){ 

				if( moedas[j] <= i && min[i-moedas[j]] + 1 < min[i] ){
					 min[i] = min[ i - moedas[j] ] + 1; 
				}

			}

		}
		if(min[valor] == 50000)
			cout << "Impossivel" << endl;
		else
			cout << min[valor] << endl;

		cin >> valor;
		cin >> num_moedas; 
	}

    return 0;    
 
} 