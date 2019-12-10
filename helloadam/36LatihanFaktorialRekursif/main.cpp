#include <iostream>
using namespace std;

int faktorial(int n);

int main(int argc, char const *argv[]) {
  int n,hasil;
  cout << "Masukkan nilai n = ";
  cin >> n;

  hasil = faktorial(n);
  cout << printf("Hasil dari %d! = %d \n",n,hasil) << endl;
  cin.get();
  return 0;
}

int faktorial(int n){
  int hasil;

  if (n <= 1) {
    hasil = n;
  } else {
    hasil = n * faktorial(n - 1);
  }
  return hasil;
}
