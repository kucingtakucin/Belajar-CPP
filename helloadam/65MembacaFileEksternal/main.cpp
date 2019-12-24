#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, const char** argv) {
    std::cout << "Hello World" << std::endl;
    ifstream myFile;
    string output,buffer;
    bool isData = false;
    int nomor;
    string nama;

    // ios::in
    // ios::ate = mulai dari akhir file
    // ios::binary

    myFile.open("data.txt",ios::in);
    while (!isData){
        getline(myFile,buffer);
        output.append("\n" + buffer);
        if (buffer == "data"){
            isData = true;
        }
    }
    std::cout << output << std::endl;
        
    getline(myFile,buffer);
    std::cout << buffer << std::endl;
    int jumlah_data = 0;
    while (!myFile.eof()){
        myFile >> nomor;
        myFile >> nama;
        std::cout << nomor << "\t" << nama << std::endl; 
        jumlah_data++;
    }
    std::cout << "jumlah data = " << jumlah_data << endl;

    cin.get();
    return 0;
}