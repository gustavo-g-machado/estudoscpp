#include <iostream>

using namespace std;

int main () {
    int n;
    cout << "Digite um numero" << endl;
    cin >> n;

    if (n % 7 == 0) {
        cout << "E multiplo de 7" << endl;

    } 
    else{
        cout << "Esse nao e multiplo 7" << endl;
    }

    return 0;
} 