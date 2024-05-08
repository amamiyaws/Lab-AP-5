#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float hitung(int A, int B, int C) {
  return sqrt(A * A + B * B + C * C);
} 

int main() {
  cout << "Masukkan 3 baris yang merupakan representasi tabel 3x3:" << endl;

  float max = 0;

  for(int i = 0; i < 3; i++) {
    int A, B, C;
    cin >> A >> B >> C;
    
    float efisiensi = hitung(A, B, C);
    
    if(efisiensi > max) {
      max = efisiensi;
    }
  }

  cout << "Nilai efisiensi tertinggi: " << fixed << setprecision(3) << max << endl;

  return 0;
}
