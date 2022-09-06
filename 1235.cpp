#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; ++i){
        string texto;
        getline(cin, texto);
        reverse(texto.begin(), texto.begin() + texto.size()/2);
        reverse(texto.begin() + texto.size()/2, texto.end());
        cout << texto << endl;
    }
    return 0;
}