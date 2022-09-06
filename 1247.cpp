#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int distancia_fugitivo_guarda, vel_fugitivo, vel_guarda;
    long double distancia_agua = 12.0;
    
    while(cin >> distancia_fugitivo_guarda >> vel_fugitivo >> vel_guarda){
        long double dist_aux = sqrt((distancia_agua * distancia_agua) + (distancia_fugitivo_guarda * distancia_fugitivo_guarda));
        long double dist_fug = distancia_agua / vel_fugitivo;
        long double dist_guard = dist_aux / vel_guarda;
        
        if(dist_fug < dist_guard){
            cout << "N" << endl;
        } else {
            cout << "S" << endl;
        }
    }
}