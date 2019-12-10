#include <iostream>
using namespace std;

int main() {
  int n;
  int fn;
  int fn_1;
  int fn_2;

  cout << "Program deret fibonacci \n" << endl;
  cout << "Masukkan nilai n = ";
  cin >> n;

  fn_1 = 1;
  fn_2 = 0;
  cout << fn_2 << " ";
  cout << fn_1 << " ";
  for (int i = 0; i < n; i++) {
    fn = fn_1 + fn_2;
    fn_2 = fn_1;
    fn_1 = fn;
    cout << fn << " ";
  }
  cout << "\n" << endl;

  cin.get();
  return 0;
}
