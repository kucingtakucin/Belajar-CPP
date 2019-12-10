#include <iostream>
using namespace std;

int main(){
  int a,n,temp;
  cout << "Masukkan angka a = ";
  cin >> a;
  cout << "Masukkan angka n = ";
  cin >> n;
  cout << "Nilai awal dari a --> "<< a << endl;

    temp = a;
    a += n;
    cout << temp << " ditambah " << n << " menjadi " << a << endl;
    temp = a;
    a -= n;
    cout << temp << " dikurangi " << n << " menjadi " << a << endl;
    temp = a;
    a *= n;
    cout << temp << " dikali " << n << " menjadi " << a << endl;
    temp = a;
    a /= n;
    cout << temp << " dibagi " << n << " menjadi " << a << endl;
    temp = a;
    a %= n;
    cout << temp << " dimodulus " << n << " menjadi " << a << endl;

  cin.get();
  return 0;
}
