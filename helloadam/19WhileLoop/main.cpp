#include <iostream>
using namespace std;

int main() {
  /* code */
  int a;
  cout << "Masukkan nilai a = ";
  cin >> a;

  while (a <= 10) {
    cout << "Nilai a =  " << a << endl;
    a++;
  }

  cout << "Program selesai" << endl;
  cin.get();
  return 0;
}
