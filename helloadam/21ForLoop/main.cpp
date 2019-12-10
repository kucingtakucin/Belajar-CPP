#include <iostream>
using namespace std;

int main() {
  int a,b;

  cout << "Masukkan angka a = ";
  cin >> a;
  cout << "Masukkan angka b = ";
  cin >> b;

  for (int i = 0; i <= 10;i++) {
    cout << "Loop1 ke-" << i << endl;
    a++;
  }
  for (int j = 10; j >= 0;j--) {
    cout << "Loop2 ke-" << j << endl;
    b--;
  }

  int total = 0;
  for (int i = 0; i <= 10; total+= i, i++) {
    cout << i << " ---- " << total << endl;
  }

  cin.get();
  return 0;
}
