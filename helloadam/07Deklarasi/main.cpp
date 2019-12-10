#include <iostream>
using namespace std;

int main(){
  int a,b,c;

  a = 10;

  cout << "Nilai a adalah = " << a << endl;

  cout << "Masukkan nilai b = ";
  cin >> b;

  cout << "Masukkan nilai c = ";
  cin >> c;

  cout << "Nilai yang anda masukkan adalah = " << b << " dan " << c << endl;

  cout << sizeof(a) << " byte" << endl;
//  cout << limit_size<int>::min() << endl;
//  cout << numeric_limits<int>::max() << endl;

  cin.get();
  return 0;
}
