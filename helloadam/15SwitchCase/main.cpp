#include <iostream>
using namespace std;

int main(){
  int a;

  cout << "Masukkan angka a = ";
  cin >> a;

  switch (a) {
    case 1 :
      cout << "Ini adalah angka 1 gais" << endl;
      break;
    case 2 :
      cout << "Ini adalah angka 2 zheyeng" << endl;
      break;
    case 3 :
      cout << "Ini adalah angka 3 gan" << endl;
      break;
    case 4 :
      cout << "Ini adalah angka 4 brother" << endl;
      break;
    case 5 :
      cout << "Ini adalah angka 5 bos" << endl;
      break;
    default :
      cout << "Ini adalah default" << endl;
  }
  cin.get();
  return 0;
}
