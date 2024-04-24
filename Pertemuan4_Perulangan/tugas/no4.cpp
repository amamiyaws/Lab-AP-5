#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int n;
    string kalimat;

    cout << "Masukkan angka (1 <= n <= 10000): ";
    cin >> n;
    
    kalimat = "Hore!";

    if (n >= 1 && n <= 10000)
    {
        kalimat = 'H' + string(n, 'o') + 'r' + string(n, 'e') + string(n, '!');
        cout << kalimat;
    } else {
        cout << "Inputan anda tidak valid.";
    }
    
    return 0;
}