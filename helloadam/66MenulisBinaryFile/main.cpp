#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    ofstream myFile;
    int nomer = 12345678;
    myFile.open("data.bin",ios::out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&nomer),sizeof(nomer));
    myFile.close();

    cin.get();
    return 0;
}
 