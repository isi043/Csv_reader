#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Birinci ədədi daxil edin: ";
    cin >> a;
    cout << "Operatoru daxil edin (+,-,*,/): ";
    cin >> op;
    cout << "İkinci ədədi daxil edin: ";
    cin >> b;

    switch(op) {
        case '+': cout << "Nəticə: " <<a+b << endl; break;
        case '-': cout << "Nəticə: " << a - b << endl; break;
        case '*': cout << "Nəticə: " << a * b << endl; break;
        case '/': 
        if (b !=0) cout << "Nəticə: "<< a / b << endl;
        else cout << "Sıfıra bölmək olmaz!" << endl;
        break;
        default: cout << "Yanlış operator!" << endl;

    }

    return 0;

}
