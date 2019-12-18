#include <iostream>
#include <string>
using namespace std;

void printDataPtr(int *val){
  cout << *val << endl;
}
void printDataRef(int &val){
  cout << val << endl;
}

int main(int argc, char const *argv[]) {
  int a,b,c;
  a = (b = 5,c = 6, b + c);

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  cout << "Print data dengan pointer : ";
  printDataPtr(&b);
  cout << "Print data dengan pointer : ";
  printDataPtr(&c);

  cout << "Print data dengan reference : ";
  printDataRef(b);
  cout << "Print data dengan reference : ";
  printDataRef(c);

  cin.get();
  return 0;
}
