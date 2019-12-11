#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  // Perbandingan string
  string input;
  string nama_rahasia("adam");

  while(true){
    cout << "Tebak nama : ";
    cin >> input;
    cout << "Kamu menginput " << input << endl;

    if (input == nama_rahasia) {
      cout << "Tebakan kamu benar!!!" << endl;
      break;
    } else {
      cout << "Tebakan kamu salah" << endl;
    }
  }
  cout << "Program selesai" << endl;

  cin.get();
  return 0;
}
