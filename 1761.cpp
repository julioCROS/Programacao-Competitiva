#include <iostream>
#include <math.h>   
#include <iomanip>
using namespace std;

#define PI 3.141592654
 
int main() {
    long double A, B, C;
    while (cin >> A >> B >> C) {
        long double cat_op;
        cat_op = B * tan(A * PI / 180.00);

        long double altura_arv;
        altura_arv = (C + cat_op) * 5;
        
        printf("%.2Lf\n", altura_arv);
    }
    return 0;
}