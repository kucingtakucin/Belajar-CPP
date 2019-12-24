#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    ofstream myFile;
    int angka = 1234567;

    myFile.open("adam1.txt",ios::out);
    myFile << "Halo namaku adam biasa dipanggil arthur :)\n"; // << endl;
    myFile << angka;
    myFile.close();

    myFile.open("adam2.txt",ios::trunc);
    myFile << "Halo namaku adam biasa dipanggil arthur :)\n"; // << endl;
    myFile.close();

    myFile.open("adam3.txt",ios::app); //append
    myFile << "Halo namaku adam biasa dipanggil arthur :)" << endl;
    myFile << angka << endl;
    myFile.close();

//  ios::out = default, operasi output;
//  ios::app = menuliskan pada akhir baris;
//  ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;

    cin.get();
    return 0;
}
