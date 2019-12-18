#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  int a,b;
  string hasil1,hasil2,output;

  hasil1 = "otong";
  hasil2 = "ucup";

  a = 5;
  cout << "Masukkan angka b = ";
  cin >> b;

  output = (a < b) ? hasil1 : hasil2;
  cout << output << endl;
  // if (a < b) {
  //   output = hasil1;
  // } else {
  //   output = hasil2;
  // }

  cin.get();
  return 0;
}
