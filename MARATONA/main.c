#include <iostream>
#include <cstdlib> 

using namespace std;  

int main(){
    int postos,distancia_media,i,posto,consegue = 1,posicao=0;

    cin >> postos; 
    cin >> distancia_media;  

    cin >> posto;      
    posicao = posto;
	for(i=1;i<postos;i++){
		cin >> posto; 

		if(posicao+distancia_media >= posto){
			posicao = posto;
		}else{
			consegue = 0;
		}
	}
	if(posicao+distancia_media < 42195){
		consegue = 0;
	}
    

    if(consegue) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;    
 
} 