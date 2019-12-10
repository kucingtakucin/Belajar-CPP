#include <iostream>
#include <limits>
using namespace std;

int main(){
  cout << "====================================" << endl;
  cout << "====== MACAM TIPE DATA DI C++ ======" << endl;
  cout << "====================================" << endl;
  cout << "\n";

int i = 10;
  cout << "----- INTEGER -----" << endl;
  cout << "1. Nilai integer i = " << i << endl;
  cout << "2, Nilai Max = " << numeric_limits<int>::max() << endl;
  cout << "3. Nilai Min = " << numeric_limits<int>::min() << endl;
  cout << "4. Besar integer (dalam bytes) = " << sizeof(i) << " Bytes" << endl;
//  cout << "5. Besar integer (dalah bit) = " <<

// bytesb = 20;
// cout << "----- BYTE -----" << endl;
// cout << "1. Nilai byte b = " << b << endl;
// cout << "2, Nilai Max = " << numeric_limits<byte>::max() << endl;
// cout << "3. Nilai Min = " << numeric_limits<byte>::min() << endl;
// cout << "4. Besar byte (dalam bytes) = " << sizeof(b) << " Bytes" << endl;

short s = 30;
  cout << "----- SHORT -----" << endl;
  cout << "1. Nilai short s = " << s << endl;
  cout << "2, Nilai Max = " << numeric_limits<short>::max() << endl;
  cout << "3. Nilai Min = " << numeric_limits<short>::min() << endl;
  cout << "4. Besar short (dalam bytes) = " << sizeof(s) << " Bytes" << endl;

long l = 40;
  cout << "----- LONG -----" << endl;
  cout << "1. Nilai long i = " << i << endl;
  cout << "2, Nilai Max = " << numeric_limits<long>::max() << endl;
  cout << "3. Nilai Min = " << numeric_limits<long>::min() << endl;
  cout << "4. Besar llong (dalam bytes) = " << sizeof(l) << " Bytes" << endl;

double d = 50;
  cout << "----- DOUBLE -----" << endl;
  cout << "1. Nilai double d = " << d << endl;
  cout << "2, Nilai Max = " << numeric_limits<double>::max() << endl;
  cout << "3. Nilai Min = " << numeric_limits<double>::min() << endl;
  cout << "4. Besar double (dalam bytes) = " << sizeof(d) << " Bytes" << endl;

float f = 60;
  cout << "----- FLOAT -----" << endl;
  cout << "1. Nilai float i = " << i << endl;
  cout << "2, Nilai Max = " << numeric_limits<float>::max() << endl;
  cout << "3. Nilai Min = " << numeric_limits<float>::min() << endl;
  cout << "4. Besar float (dalam bytes) = " << sizeof(f) << " Bytes" << endl;

  cin.get();
  return 0;
}
