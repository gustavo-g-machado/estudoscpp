#include <iostream>
using namespace std;

int main() {
  
  int N1, N2, N3, N4, N5, ki;
  
  cout << "Digite os cinco KIs" << endl;
  cin >> N1 >> N2 >> N3 >> N4 >> N5;

  ki = N1 + N2 + N3 + N4 + N5;

  if (ki >= 5000) {
    cout <<"Acesso proibido" << endl;
  } else {
    cout << "Acesso liberado" << endl;
  }
    return 0;
  } 