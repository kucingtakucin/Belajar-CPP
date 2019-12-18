#include <iostream>
#include <string>
using namespace std;

void printNilaiPtr(int *valPtr){
  cout << "Nilai : " << *valPtr << endl;
}

int main(int argc, char const *argv[]) {
  int a = 5;
  printNilaiPtr(&a);
  float b = 3.14f;
  char c = 'd';

  cout << a + (int)b << endl;
  cout << (float)(a + b) << endl;
  cout << (char)(a + c) << endl;

  cin.get();
  return 0;
}
