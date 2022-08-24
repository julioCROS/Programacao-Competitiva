#include <iostream>
#include <math.h>   
#include <iomanip>
using namespace std;

#define PI 3.141592654
 
int main() {
    float A, B, C;
    while (cin >> A >> B >> C) {
        float cat_op;
        cat_op = B * tan(A * PI / 180);

        float altura_arv;
        altura_arv = (C + cat_op) * 5;

        cout << fixed << setprecision(2) << altura_arv << endl;
    }
    return 0;
}
