#include <iostream>
#include <array>
using namespace std;

const size_t arraySize = 11;
int main(int argc, char const *argv[]) {
  array <int,arraySize> nilai;

	cout << "Program menampilkan grafik nilai \n" << endl;

	for(int i = 0; i < nilai.size() ; i++){
		cout << "Jumlah mahasiswa dengan nilai ";
		if (i == 0) {
			cout << "0-9  : ";
		} else if (i == 10) {
			cout << "100  : ";
		} else {
			cout << i*10 << "-" << (i*10) + 9 << ": ";
		}
		cin >> nilai[i];
	}

	cout << "\n" << endl;
	cout << "Grafik nilai\n" << endl;

	for(int i = 0; i < nilai.size(); i++){
		if (i == 0) {
			cout << "0-9  : ";
		} else if (i == 10) {
			cout << "100  : ";
		}	else {
			cout << i*10 << "-" << (i*10) + 9 << ": ";
		}

		for(int bintang = 0; bintang < nilai[i]; bintang++){
			cout << "*";
		}
    cout << endl;
	}

  cin.get();
  return 0;
}
