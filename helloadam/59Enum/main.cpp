#include <iostream>
using namespace std;

enum warna{merah,jingga,kuning,hijau,biru,nila,ungu};

int main(int argc, char const *argv[]) {
  warna kain;
  kain = merah;
  if (kain == merah) {
    cout << "Warna kain merah" << endl;
  }

  cout << "Posisi : " << kain << endl;

  kain = jingga;
  cout << "Posisi : " << kain << endl;

  cin.get();
  return 0;
}
