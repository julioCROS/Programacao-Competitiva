#include <iostream>
#include <string>
using namespace std;

int main(){
    string linha[4];
    for(int i = 0; i < 4; i++){
        cin >> linha[i];
    }
    
    int N;
    N = linha[0].length();
    
    string F = "";
    string L = "";
    for(int i = 0; i < 4; i++){
        F = F + linha[i][0];
        L = L + linha[i][N-1]; 
    }
    
    string resultado = "";
    for(int j = 1; j < N - 1; j++){
        string M = "";
        for(int i = 0; i < 4; i++){
            M = M + linha[i][j];
        }
        resultado.push_back((stoi(F) * stoi(M) + stoi(L)) % 257);
    }

    cout << resultado << endl;
}