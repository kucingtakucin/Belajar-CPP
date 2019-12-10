  #include <iostream>
  using namespace std;

  int luasKotak(int p,int l){
    int luas = p * l;
    return luas;
  }

  int luasKotak(int sisi){
    int luas = sisi * sisi;
    return luas;
  }

  double luasKotak(double sisi){
    double luas = sisi * sisi;
    return luas;
  }

  int main(int argc, char const *argv[]) {
    cout << "Luas kotak 2 x 3 adalah " << luasKotak(2,3) << endl;
    cout << "Luas kotak 2 x 2 adalah " << luasKotak(2) << endl;
    cout << "Luas kotak 2.5 x 2.5 adalah " << luasKotak(2.5) << endl;

    cin.get();
    return 0;
  }
