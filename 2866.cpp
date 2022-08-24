#include <iostream>
#include <string.h>
using namespace std;

int main() {
    float C;
    string text;
    cin >> C;

    for(int i = 0; i < C; i++){
        string result = "";
        cin >> text;

        for(int j = 0; j < text.length(); j++){
            if(!(text[j] >= 65 && text[j] <= 90)){
                string to_insert(1, text[j]);
                result.insert(0, to_insert);
            }
        }

      cout << result << endl;
    }
    return 0;
}
