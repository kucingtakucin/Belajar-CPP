#include <iostream>
using namespace std;

double hitungLuas(double p,double l);
void println(double x);

int main(int argc, char const *argv[]) {
  double panjang,lebar,luas;

  cout << "Masukkan panjang = ";
  cin >> panjang;
  cout << "Masukkan lebar = ";
  cin >> lebar;

  luas = hitungLuas(panjang,lebar);
  println(luas);

  cin.get();
  return 0;
}

double hitungLuas(double p,double l){
  return p * l;
}

void println(double x){
  cout << "Hasilnya adalah = " << x << endl;
}
