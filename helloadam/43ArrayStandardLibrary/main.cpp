#include <iostream>
#include <array>
using namespace std;

const size_t arraySize = 5;
int main(int argc, char const *argv[]) {
  // membuat array dengan menggunakan standard library
  // array<int, jumlah array> nama array

  array < int, arraySize > nilai;
    for(int i = 0; i <= 4 ; i++){
      nilai[i] = i;
      cout << "nilai [" << i << "] = " << nilai[i];
      cout << " Address nya adalah : " << &nilai[i] << endl;
    }

    cout << endl;
    // ukuran array
    cout << "Ukuran : " << nilai.size() << endl;
    // address awal dari array
    cout << "Address awal : " << nilai.begin() << endl;
    // address akhir dari array
    cout << "Address akhir : " << nilai.end() << endl;
    // nilai dengan index
    cout << "Nilai ke 1 : " << nilai.at(1) << endl;
    cout << "Nilai ke 2 : " << nilai.at(2) << endl;
    cout << "Nilai ke 3 : " << nilai.at(3) << endl;
    cout << "Nilai ke 4 : " << nilai.at(4) << endl;
  /*  cout << "Nilai ke 5 : " << nilai.at(5) << endl; */

  cin.get();
  return 0;
}
