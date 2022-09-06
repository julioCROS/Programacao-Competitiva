#include<iostream>
using namespace std;

int main(){
    long long int lados;
    cin >> lados;
    long long int barbantes = (lados * (lados - 3))/2;
    cout << barbantes << endl;
    return 0;
}