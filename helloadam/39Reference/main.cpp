#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a;
  cout << "Nilai dari a adalah ";
  cin >> a;
  cout << "Address dari a adalah " << &a << endl;

  int &b = a;

  cout << "Nilai dari b adalah " << b << endl;
  cout << "Address dari b adalah " << &b << endl;

  cout << "Nilai dari b adalah ";
  cin >> b;
  cout << "Nilai dari a adalah " << a << endl;

  cout << "Nilai dari a adalah ";
  cin >> a;
  cout << "Nilai dari b adalah " << b << endl;

  cin.get();
  return 0;
}
