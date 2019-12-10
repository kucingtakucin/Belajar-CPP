#include <iostream>
using namespace std;

int deretFibonacci(int n);

int main(int argc, char const *argv[]) {
  int n,temp;
  cout << "Masukkan n deret fibonacci = ";
  cin >> n;

  temp = n;
  for (int i = 0; i <= temp; i++) {
    cout << deretFibonacci(n) << "  ";
    n--;
  }

  cout << "\n" << endl;
  cin.get();
  return 0;
}

int deretFibonacci(int n){
  int hasil;
  if (n == 0 || n == 1) {
    hasil = n;
  } else {
    hasil = deretFibonacci(n - 1) + deretFibonacci(n - 2);
  }
  return hasil;
}
