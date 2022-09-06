#include <iostream>
#include <string>
using namespace std;

int main(){
    int qntde_testes;
    cin >> qntde_testes;
    
    for(int k = 0; k < qntde_testes; k++){
        string entrada;
        cin >> entrada;
        
        int cont_prim_seq, cont_seg_seq;
        cont_prim_seq = cont_seg_seq = 0;
        
        bool prim_seq = false;
        bool seg_seq = false;
        
        for(int i = 0; i < entrada.length(); i++){
            if(entrada[i] == 'h'){
                prim_seq = true;
                seg_seq = false;
            }
            if(entrada[i] == 'k'){
                prim_seq = false;
                seg_seq = true;
            }
            if(entrada[i] == 'a'){
                if(prim_seq){
                    cont_prim_seq++;
                } else if(seg_seq){
                    cont_seg_seq++;
                }
            }
        }
        
        string saida = "k";
        int a_total = cont_prim_seq * cont_seg_seq;
        
        for(int j = 0; j < a_total; j++){
            saida.push_back('a');
        }
  
        cout << saida << endl;
    }
    return 0;
}