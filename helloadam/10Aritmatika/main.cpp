#include <iostream>
#include <limits>
using namespace std;

int main(){
  int a,b,hasil;

  cout << "Masukkan nilai a = ";
  cin >> a;
  cout << "Masukkan nilai b = ";
  cin >> b;

  /* OPERATOR ARITMETIKA */
  // Penjumlahan
  hasil = a + b;
  cout << a << " + " << b << " = " << hasil << endl;

  // Pengurangan
	hasil = a - b;
	cout << a << " - " << b << " = " << hasil << endl;

	// Perkalian
	hasil = a * b;
	cout << a << " * " << b << " = " << hasil << endl;

	// Pembagian
	hasil = (float) (a / b);
	cout << a << " / " << b << " = " << hasil << endl;

	// Modulus
	hasil = a % b;
	cout << a << " % " << b << " = " << hasil << endl;

	// Urutan eksekusi;

	hasil = a + b * a;
	cout << a << " + " << b << " * " << a << " = " << hasil << endl;

  cout << numeric_limits<int>::min() << endl;
  cout << numeric_limits<int>::max() << endl;
  cout << numeric_limits<double>::min <<endl ;
  cout << numeric_limits<double>::max << endl;


  cin.get();
  return 0;
}
