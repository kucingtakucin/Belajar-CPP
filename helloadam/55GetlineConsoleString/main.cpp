#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string kalimat_input;

  // getline(cin, variabel)
  cout << "Masukkan kalimat : ";
  getline(cin,kalimat_input);

  cout << "Input kamu adalah : " << kalimat_input << endl;

  // Jumlah kata dari input
  int posisi,jumlah;
  posisi = 0;
  jumlah = 0;

  while (true) {
    posisi = kalimat_input.find(" ",posisi + 1);
    jumlah++;
    if (posisi < 0) {
      break;
    }
  }
  cout << "Jumlah kata : " << jumlah << endl;

  cin.get();
  return 0;
}
