#include <iostream>
#include <string>
using namespace std;

string fixinvect(string invect) {
  string asli = "";
  for (int i = invect.length() - 1; i >= 0; i--) {
    asli += invect[i];
  }
  return asli;
}

int main() {
  string invect;
  cout << "Masukkan string terinfeksi: ";
  getline(cin, invect);

  string asli = fixinvect(invect);

  cout << "String asli yang telah diperbaiki: " << asli << endl;

  return 0;
}
