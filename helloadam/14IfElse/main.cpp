#include <iostream>
using namespace std;

int main(){
  int a;

  cout << "Masukkan angka a = ";
  cin >> a;

  if (a == 5) {
    cout << "Ashiyap 5 " << endl;
  } else if (a > 5) {
    cout << "Mantab lebih dari 5" << endl;
  } else if (a < 5) {
    cout << "Wah kurang dari 5" << endl;
  } else {
    cout << "Ashiyap santuy" << endl;
  }

  cin.get();
  return 0;
}
