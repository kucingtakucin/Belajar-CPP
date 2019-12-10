#include <iostream>
#include <array>
using namespace std;

const size_t arraySize = 10;
int main(int argc, char const *argv[]) {
  // Looping untuk array di c++11 keatas
	/*	for(declarasi variabel : array){
			statement
		} */

	array <int,arraySize> arrayNilai = {0,1,2,3,4,5,6,7,8,9};

	for(int nilai : arrayNilai){
		cout << "Address " << &nilai << " nilainya : " << nilai << endl;
		nilai = 1; // tidak merubah array
	}
	cout << endl;

	// Manipulasi array dengan menggunakan reference
	for(int &nilaiRef : arrayNilai){
		nilaiRef *= 2;
	}
	cout << endl;

	for(int &nilaiRef : arrayNilai){
		cout << "Address " << &nilaiRef << " nilainya : " << nilaiRef << endl;
	}

  cin.get();
  return 0;
}
