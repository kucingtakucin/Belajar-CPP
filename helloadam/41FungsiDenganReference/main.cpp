#include <iostream>
using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(int argc, char const *argv[]) {
  int a;

  cout << "Masukkan nilai a = ";
  cin >> a;
  cout << "Address dari a adalah " << &a << endl;

  fungsi(a);
  kuadrat(a);
  cout << "Nilai a adalah " << a << endl;

  cin.get();
  return 0;
}

void fungsi(int &nilaiRef){
  cout << "Masukkan nilai b = ";
  cin >> nilaiRef;
  cout << "Address dari b adalah " << &nilaiRef << endl;
}

void kuadrat(int &nilaiRef){
  nilaiRef = nilaiRef * nilaiRef;

}
