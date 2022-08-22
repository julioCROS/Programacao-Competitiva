#include <iostream>
#include <math.h>   
using namespace std;

#define PI 3.141592654
 
int main() {
    float A, float B, float C;
    cin >> A >> B >> C;

    float cat_op;
    cat_op = B * tan(A * PI / 180);

    float altura_arv;
    altura_arv = C + cat_op;

    cout << altura_arv << endl;
    return 0;
}