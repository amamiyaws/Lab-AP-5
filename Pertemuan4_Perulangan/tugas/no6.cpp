#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int n, i, hasil = 0;

    cout <<  "Input angka untuk dijumlahkan semua kuadrat bilangan genap terakhir: ";
    cin >> n;

    for (i = 0; i <= n; i++){
        if (i % 2 == 0){
            hasil += i * i;
        }
    }

    cout << "Hasil penjumlahan " << hasil;
    return 0;
}