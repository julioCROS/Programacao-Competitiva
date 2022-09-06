#include <iostream>
#include <string>
using namespace std;

int main(){
   string entrada;
   
   while(cin >> entrada) {
    int qntde;
    cin >> qntde;
    
    int cont = 0;
    int contR = 0;
    
    for(int i = 0; i < entrada.length(); i++){
        if(entrada[i] == 'W'){
            contR = 0;
            cont++;
        } else {
            if(contR == 0){
                cont++;
            }
            contR++;
            if(contR == qntde) {
                contR = 0;
            }
        }
    }
    cout << cont << endl;
   }
   
    return 0;
}