#include <iomanip> 
using namespace std;
 
int main() {
    long double X, Y, retorno;
    int num_projeto = 1;
    
    while (cin >> X >> Y) {
        retorno = ((Y/X) - 1) * 100.00;
        cout << "Projeto " << num_projeto << ":" << endl;
        cout << "Percentual dos juros da aplicacao: " << fixed << setprecision(2) << retorno << " %\n" << endl;
        ++num_projeto;
    }
    return 0;
}