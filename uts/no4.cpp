#include <iostream>
using namespace std;

int main() {
    system("cls");
    int tinggi;
    cout << "Masukkan tinggi diamond: ";
    cin >> tinggi;

    for (int i = 0; i < tinggi / 2 + 1; i++) {
        for (int j = 0; j < tinggi / 2 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 1 * i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = tinggi / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < tinggi / 2 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 1 * i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
