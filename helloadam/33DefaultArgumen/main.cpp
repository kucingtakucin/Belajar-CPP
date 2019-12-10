#include <iostream>
using namespace std;

double vKubus(double p = 1,double l = 1,double t = 1);

int main(int argc, char const *argv[]) {
  cout << "Volume kubus = " << vKubus(3,4,5) << endl;
  cout << "Volume kubus = " << vKubus(3,4) << endl;
  cout << "Volume kubus = " << vKubus(3) << endl;
  cout << "Volume kubus = " << vKubus() << endl;

  cin.get();
  return 0;
}

double vKubus(double p,double l,double t){
  return p * l * t;
}
