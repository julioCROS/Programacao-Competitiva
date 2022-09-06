#include <iostream>
using namespace std;

int main() {
    int numero_participantes, orcamento, numero_hoteis, numero_semanas;
    cin >> numero_participantes >> orcamento >> numero_hoteis >> numero_semanas;
    
    int preco_hotel[numero_hoteis];
    for(int i = 0; i < numero_hoteis; i++){
        int preco_pessoa;
        cin >> preco_pessoa;
        
        int numero_camas[numero_semanas];
        for(int j = 0; j < numero_semanas; j++){
            cin >> numero_camas[j];
        }
        
        preco_hotel[i] = preco_pessoa * numero_participantes;
    }
    
    int menor_preco = 500001;
    for(int k = 0; k < numero_hoteis; k++){
        if(menor_preco > preco_hotel[k]){
            menor_preco = preco_hotel[k];
        }
    }

    if(menor_preco > orcamento){
        cout << "stay home" << endl;
    } else {
        cout << menor_preco << endl;
    }

    return 0;
}