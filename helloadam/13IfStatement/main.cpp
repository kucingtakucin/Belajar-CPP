#include <iostream>
using namespace std;

int main(){
  int angka;
  cout << "Masukkan angka = ";
  cin >> angka;

  if (angka > 5) {
    cout << "Ashiyaap" << endl;
  } else if (angka < 5){
    cout << "Santuy" << endl;
  } else {
    cout << "Ashiyap santuy" << endl;
  }

  cin.get();
  return 0;
}
