#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        string word;
        getline(cin, word);
        
        int word_size = word.size();
        
        for(int j = 0; j < word_size; j++){
            if((word[j] >= 65 && word[j] <= 90) || (word[j] >= 97 && word[j] <= 122)) {
                word[j] = word[j] + 3;
            }
        }
        
        for(int k = 0; k < word_size/2; k++){
            char aux;
            aux = word[k];
            word[k] = word[word_size - (k + 1)];
            word[word_size - (k + 1)] = aux;
        }
        
        for(int l = word_size/2; l < word_size; l++){
           word[l] = word[l] - 1; 
        }
        
        cout<< word << endl;
    }
    return 0;
}