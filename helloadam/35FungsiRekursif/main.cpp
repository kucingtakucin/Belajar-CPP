#include <iostream>
using namespace std;

int pangkatIterasi(int a, int b){
	int hasil = a;
	for(int i = 1; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;
}

int pangkatRekursif(int a,int b){
  int hasil;

  if (b == 1){
		  hasil = a;
	}else{
			hasil =  a * pangkatRekursif(a,( b - 1));
	}

  return hasil;
}

int main(int argc, char const *argv[]) {
    int a;
  	int b;
  	cout << "angka: ";
  	cin >> a;
  	cout << "pangkat: ";
  	cin >> b;
  	cout << "hasil iterasi = " << pangkatIterasi(a,b) << endl;
  	cout << "hasil rekursif = " << pangkatRekursif(a,b) << endl;

  cin.get();
  return 0;
}
