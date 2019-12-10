#include <iostream>
using namespace std;

int main(){
  int a,b;
  bool hasil;
  cout << "Masukkan nilai a = ";
  cin >> a;
  cout << "Masukkan nilai b = ";
  cin >> b;

  cout << "Nilai yang kamu masukkan adalah = " << a << " dan " << b << endl;

  /* OPERATOR LOGIKA */

    // Not
    hasil = !(a == 0);

    // And
    cout << "Untuk and \n";
    hasil = (a == 1 and b == 1); // true and true
  	cout << hasil << endl;
  	hasil = (a == 0 and b == 1); // false and true
  	cout << hasil << endl;
  	hasil = (a == 1 && b == 0); // true and false
  	cout << hasil << endl;
  	hasil = (a == 0 && b == 0); // false and false
  	cout << hasil << endl;

    // Or
    cout << "Untuk or \n";
    hasil = (a == 1 or b == 1); // true and true
    cout << hasil << endl;
    hasil = (a == 0 or b == 1); // false and true
    cout << hasil << endl;
    hasil = (a == 1 || b == 0); // true and false
    cout << hasil << endl;
    hasil = (a == 0 || b == 0); // false and false
    cout << hasil << endl;

  cin.get();
  return 0;
}
