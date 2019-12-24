#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    ifstream myFile;
    int hasil;
    
    myFile.open("data.bin",ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));
    cout << "Besar integer = " << sizeof(hasil) << endl;
    std::cout << hasil << std::endl;

    cin.get();
    return 0;
}
/* message */