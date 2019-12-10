#include <iostream>
using namespace std;

double Luas(double p,double l){
  double Luas = p * l;
  return Luas;
}

double Keliling(double p,double l){
  double Keliling = 2 * (p + l);
  return Keliling;
}

void tampilkanLuas(double p,double l){
  cout << "Luasnya adalah ";
  cout << Luas(p,l) << endl;
}

void tampilkanKeliling(double p,double l){
  cout << "Kelilingnya adalah ";
  cout << Keliling(p,l) << endl;
}

int main(int argc, char const *argv[]) {
  int panjang,lebar;

  cout << "Masukkan panjang = ";
  cin >> panjang;
  cout << "Masukkan lebar = ";
  cin >> lebar;

  tampilkanLuas(panjang,lebar);
  tampilkanKeliling(panjang,lebar);

  cin.get();
  return 0;
}
