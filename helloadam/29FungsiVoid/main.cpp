#include <iostream>
using namespace std;

void garis(){
  cout << "=================================" << endl;
}

void tampilkan(int x){
  cout << "Nilai yang ditampilkan adalah " << x << endl;
}

int main(int argc, char const *argv[]) {
  int n;

  garis();
  cout << "Masukkan nilai n = ";
  cin >> n;
  tampilkan(n);

  cin.get();
  return 0;
}
