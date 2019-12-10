#include <iostream>

using namespace std;

int kuadrat(int x){
  int y;
  y = x * x;

  return y;
}

int tambah(int x,int y){
  int z;
  z = x + y;

  return z;
}

int main(int argc, char const *argv[]) {
  int n, hasil, a, b, hasil2;
	cout << "Masukkan nilai n =  ";
	cin >> n;

	hasil = kuadrat(n);
	cout << "Hasil kuadrat nya adalah " << hasil << endl;

	cout << "masukan nilai a = ";
	cin >> a;
	cout << "masukan nilai b = ";
	cin >> b;

	hasil2 = tambah(a,b);
	cout << "Hasil penjumlahannya adalah " << hasil2 << endl;

  cin.get();
  return 0;
}
