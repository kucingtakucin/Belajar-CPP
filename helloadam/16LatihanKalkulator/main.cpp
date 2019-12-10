#include <iostream>
using namespace std;

int main(){
  float a,b,hasil;
  char aritmetika;

    cout << "====== SELAMAT DATANG DI PROGRAM KALKULATOR ====== \n" << endl;

    cout << "Masukkan nilai a = ";
    cin >> a;
    cout << "Masukkan operator (+,-,*,/) = ";
    cin >> aritmetika;
    cout << "Masukkan nilai b = ";
    cin >> b;

    if (aritmetika  == '+') {
      hasil = a + b;
      cout << a << " + " << b << " = " << hasil << endl;
    } else if (aritmetika == '-') {
      hasil = a - b;
      cout << a << " - " << b << " = " << hasil << endl;
    } else if (aritmetika == '*'){
      hasil = a * b;
      cout << a << " * " << b << " = " << hasil << endl;
    } else if (aritmetika == '/') {
      hasil = a / b;
      cout << a << " / " << b << " = " << hasil << endl;
    } else {
      cout << "Operator kamu salah " << endl;
    }

  cin.get();
  return 0;
}
