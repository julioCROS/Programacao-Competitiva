#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int altura, largura;
    cin >> altura >> largura;
    
    while(altura != 0 && largura != 0){
      string img[altura];
      string nova_img[altura];
      
      for(int i = 0; i < altura; i = i + 1){
          cin >> img[i];
      }
      
      long long int nova_altura, nova_largura;
      cin >> nova_altura >> nova_largura;
      
      long long int multipl_altura, multipl_largura;
      multipl_altura = nova_altura / altura;
      multipl_largura = nova_largura / largura;
      
      for(int j = 0; j < altura; j++){
          for(int k = 0; k < img[j].size(); k++){
              for(int l = 0; l < multipl_largura; l++){
                  nova_img[j] += img[j][k];
              }
          }
      }
  
      for(long long int m = 0; m < altura; m = m + 1){
          for(long long int n = 0; n < multipl_altura; n++){
              cout << nova_img[m] << endl;
          }
      }
      
      cout << endl;
      cin >> altura >> largura;
    }
}