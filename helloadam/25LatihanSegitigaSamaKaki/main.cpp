#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Masukkan panjang pola = ";
  cin >> n;

  cout << "\nPola 5\n" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j > i; j--) {
      cout << "   ";
    }
    for (int k = 1; k <= (2 * i - 1); k++) {
      cout << "*  ";
    }
    cout << "\n" << endl;
  }

  cout << "\nPola 6\n" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < i; j++) {
      cout << "   ";
    }
    for (int k = n; k >= (2 * i - n); k--) {
      cout << "*  ";
    }
    cout << "\n" << endl;
  }

  cout << "\nPola 7\n" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j > i; j--) {
      cout << "   ";
    }
    for (int k = 1; k <= (2 * i - 1); k++) {
      cout << "*  ";
    }
    cout << "\n" << endl;
  }
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j < i; j++) {
      cout << "   ";
    }
    for (int k = n; k >= (2 * i - n); k--) {
      cout << "*  ";
    }
    cout << "\n" << endl;
  }

  cin.get();
  return 0;
}
