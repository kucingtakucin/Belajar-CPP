#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string kalimat_1("Aku suka kamu suka, siapa? dia!!");
  string kalimat_2("Wakanda forevah!!!");;

  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // Swap string
  kalimat_1.swap(kalimat_2);
  cout << "Swap string" << endl;
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // replace, mengganti string
  kalimat_2.replace(27,3,"Otong");
  kalimat_1.replace(kalimat_1.find("ah"),2,"er");

  cout << "Replace string" << endl;
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  // insert string
  kalimat_1.insert(8,"dan hatiku ");
  cout << "Insert string" << endl;
  cout << "1: " << kalimat_1 << endl;
  cout << "2: " << kalimat_2 << endl;

  cin.get();
  return 0;
}
