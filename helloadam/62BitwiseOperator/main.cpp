#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void printNilaiPtr(int *nilai){
  cout << "Nilai : " << *nilai << endl;
}

void printNilaiRef(int &nilai){
  cout << "Nilai : " << nilai << endl;
}

void printBinary(unsigned short val, string nama){
  cout << nama << " = " << bitset<8>(val) << endl;
}

int main(int argc, char const *argv[]) {
  short x = 2;
  cout << bitset<8>(x) << endl;
  int y = 2;
  cout << bitset<8>(y) << endl;
  long z = 2;
  cout << bitset<8>(z) << endl;

  printNilaiPtr(&y);
  printNilaiRef(y);

  unsigned short a = 6;
  	unsigned short b = 10;
  	unsigned short c;

  	cout << "\n>> - Bitwise SHR" << endl;
  	c = a >> 1;
  	printBinary(a,"a");
  	printBinary(c,"c");
  	cout << "c= " << c << endl;

  	cout << "\n<< - Bitwise SHL" << endl;
  	c = a << 1;
  	printBinary(a,"a");
  	printBinary(c,"c");
  	cout << "c= " << c << endl;

  	cout << "\n~ - Bitwise NOT" << endl;
  	c = ~a;
  	printBinary(a,"a");
  	printBinary(c,"c");
  	cout << "c= " << c << endl;

  	cout << "\n^ - Bitwise XOR" << endl;
  	c = a ^ b;
  	printBinary(a,"a");
  	printBinary(b,"b");
  	printBinary(c,"c");
  	cout << "c= " << c << endl;

  	cout << "\n| - Bitwise OR" << endl;
  	c = a | b;
  	printBinary(a,"a");
  	printBinary(b,"b");
  	printBinary(c,"c");
  	cout << "c= " << c << endl;

  	cout << "\n& - Bitwise AND" << endl;
  	c = a & b;
  	printBinary(a,"a");
  	printBinary(b,"b");
  	printBinary(c,"c");
  	cout << "c= " << c << endl;


  cin.get();
  return 0;
}
