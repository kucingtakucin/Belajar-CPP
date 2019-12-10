#include <iostream>
#include <cstring>
using namespace std;

int main() {
  String nama;
  nama = "Adam";
  std::cout << "Hello "<< nama << std::endl;

  int a,b,c;
  std::cout << "Masukkan nilai a = ";
  cin >> a;
  cout << "Masukkan nilai b = ";
  cin >> b;
  cout << "Masukkan nilai c = ";
  std::cin >> c;

  std::cout << "Nilai yang kamu masukkan adalah " << "\n";
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  cin.get();
  return 0;
}
