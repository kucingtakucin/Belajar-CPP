#include <iostream>
using namespace std;

void printArray(int *ptrArray, int baris, int kolom){
	int index = 0;
	for(int i = 0; i < baris; i++){
		cout << "[ ";
		for (int j = 0; j < kolom; j++){
			cout << *(ptrArray + index) << " "; // *(pointer + index)
			index++;
		}
		cout << "]"<< endl;
	}
}

int main(int argc, char const *argv[]) {
  // Array multidimensi
	// Array[baris][kolom]
	const int baris = 3;
	const int kolom = 3;
	int arrayMD[baris][kolom] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

	printArray(*arrayMD, baris, kolom);

  cin.get();
  return 0;
}
