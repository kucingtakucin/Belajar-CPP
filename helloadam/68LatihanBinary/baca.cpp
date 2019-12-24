#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

Mahasiswa ambilData(int &posisi,fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));
    return bufferData;
}

int main(int argc, char const *argv[]){
    fstream myFile;
    Mahasiswa dataBaca;
    myFile.open("data.bin",ios::in | ios::binary);
    int posisi = 2;
    dataBaca = ambilData(posisi,myFile);

    std::cout << dataBaca.NIM << std::endl;
    std::cout << dataBaca.nama << std::endl;
    std::cout << dataBaca.jurusan << std::endl;

    myFile.close();

    cin.get();
    return 0;
}
