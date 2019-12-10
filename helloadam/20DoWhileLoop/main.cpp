#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Masukkan nilai a = ";
  cin >> a;

  do {
    cout << a << endl;
    a++;
  } while(a <= 10);

  cout << "Program selesai" << endl;
  cin.get();
  return 0;
}
