#include <iostream>
using namespace std;

union nama{
  int int_value;
  char char_value[4];
};

int main(int argc, char const *argv[]) {
  nama adam;
  adam.int_value = 123456789;

  cout << "Data int_value : " << adam.int_value << endl;
  cout << "Data char_value : " << adam.char_value << endl;

  adam.char_value[0] = 'a';
  adam.char_value[1] = 'b';
  adam.char_value[2] = 'c';
  adam.char_value[3] = 'd';

  cout << "Data int_value : " << adam.int_value << endl;
  cout << "Data char_value : " << adam.char_value << endl;

  cin.get();
  return 0;
}
