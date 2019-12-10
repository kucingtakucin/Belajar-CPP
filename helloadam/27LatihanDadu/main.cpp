#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  char lanjut;

  	while(true){
  		cout << "Mau lempar dadu? (Y/N) ";
  		cin >> lanjut;

  		if(lanjut == 'y' || lanjut == 'Y'){
  			cout << 1 + (rand() % 6) << endl;
  		}else if(lanjut == 'n' || lanjut == 'N'){
  			break;
  		}else{
  			cout << "Warning: ketik y atau n dong kakak!!\n";
        cout << "Awokwokwokwk :v" << endl;
  		}
  	}

  cin.get();
  return 0;
}
