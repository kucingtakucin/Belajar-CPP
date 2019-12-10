#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Masukkan nilai a = ";
  cin >> a;

  int i = 0;
  while (i < 10) {
    i++;
    if (i == 5) {
    // break;
     continue;
    }
    cout << "Nilai i = " << i << endl;
  }

  cout << "Program selesai" << endl;
  cin.get();
  return 0;
}
