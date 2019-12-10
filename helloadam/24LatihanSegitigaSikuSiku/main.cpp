#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Masukkan panjang pola = ";
  cin >> n;

  cout << "\nPola 1\n" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*  ";
    }
    cout << "\n" << endl;
  }

  cout << "\nPola 2\n" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      cout << "*  ";
    }
    cout << "\n" << endl;
  }

  cout << "\nPola 3\n" << endl;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j < i; j++){
      cout << "   ";
    }
    for(int k = n; k >= i; k--){
      cout << "*  ";
    }
    cout << "\n" << endl;
  }

  cout << "\nPola 4\n" << endl;
  for(int i = 1; i <= n; i++){
    for(int j = n; j > i; j--){
      cout << "   ";
    }
    for(int k = 1; k <= i; k++){
      cout << "*  ";
    }
    cout << "\n" << endl;
  }

  cin.get();
  return 0;
}
