#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

Mahasiswa ambilData(int posisi,fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));

    return bufferData;
}

void menulisData(Mahasiswa &data,fstream &myFile){
    myFile.write(reinterpret_cast<char*>(&data),sizeof(Mahasiswa));
}

void menulisDataByPos(int posisi,Mahasiswa &bufferData,fstream &myFile){
    myFile.seekg((posisi - 1) * sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));
}

int main(int argc, char const *argv[]){
    fstream myFile;
    myFile.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa mahasiswa1,mahasiswa2,mahasiswa3,output;

    mahasiswa1.NIM = 123;
    mahasiswa1.nama = "Adam Arthur Faizal";
    mahasiswa1.jurusan = "Teknik Informatika";

    mahasiswa2.NIM = 124;
    mahasiswa2.nama = "Mbah Putih Mulyosugito";
    mahasiswa2.jurusan = "Teknik Informatika";

    mahasiswa3.NIM = 125;
    mahasiswa3.nama = "Panembahan Senopati";
    mahasiswa3.jurusan = "Teknik Informatika";
    
    menulisData(mahasiswa1,myFile);
    menulisData(mahasiswa2,myFile);
    menulisData(mahasiswa3,myFile);

    output = ambilData(2,myFile);

    std::cout << output.NIM << std::endl;
    std::cout << output.nama << std::endl;
    std::cout << output.jurusan << std::endl;

    cin.get();
    return 0;
}

