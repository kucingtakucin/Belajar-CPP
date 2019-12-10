#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;
void printArray(array <int,arraySize> &angka){
  std::cout << "Array angka" <<;
  for (int &a : angka) {
    std::cout << a << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char const *argv[]) {
  std::array <int, arraySize> angka = {9,4,2,5,8,0,1,7,6,3};
	printArray(angka);

	int angkaCari;
	bool ketemu;
	// Sort dulu
	// Search -> binary_search
	std::cout << "Cari angka dalam array diatas: \n";
	std::cin >> angkaCari;
	std::sort(angka.begin(), angka.end());
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

	if (ketemu){
		std::cout << "ketemu" << std::endl;
	} else {
		std::cout << "tidak ketemu" << std::endl;
	}

  std::cin.get();
  return 0;
}
