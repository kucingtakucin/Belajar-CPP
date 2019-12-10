#include <iostream>
using namespace std;

int main(){
  int a,b;
  cout << "Masukkan nilai a = ";
  cin >> a;
  cout << "Masukkan nilai b = ";
  cin >> b;

  bool hasil1,hasil2;

  // Persamaan
    hasil1 = (a == b);
    cout << hasil1 << endl;
    cout << hasil2 << endl;

  // Pertidaksamaan
    hasil2 = (a != b);
    cout << hasil1 << endl;
    cout << hasil2 << endl;

  // Kurang dari
    hasil1 = (a < b);
    cout << hasil1 << endl;
    cout << hasil2 << endl;

  // Lebih dari
    hasil2 = (a > b);
    cout << hasil1 << endl;
    cout << hasil2 << endl;

  // Kurang dari sama dengan
    hasil2 = (a <= b);
    cout << hasil1 << endl;
    cout << hasil2 << endl;

  // Lebih dari sama dengan
    hasil2 = (a >= b);
    std::cout << hasil1 << endl;
    std::cout << hasil2 << endl;

  cin.get();
  return 0;
}
