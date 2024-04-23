#include <iostream>

using namespace std;

int main() {
    system("cls");
    
    int bilangan;

    cout << "Masukkan suatu bilangan bulat: ";
    cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout << "Angka " << bilangan << " adalah bilangan genap" << endl;
    } else {
        cout << "Angka " << bilangan << " adalah bilangan ganjil" << endl;
    }

    if (bilangan % 3 == 0) {
        cout << "Angka " << bilangan << " habis dibagi 3" << endl;
    } else {
        cout << "Angka " << bilangan << " tidak habis dibagi 3" << endl;
    }
    if (bilangan % 5 == 0) {
        cout << "Angka " << bilangan << " habis dibagi 5" << endl;
    } else {
        cout << "Angka " << bilangan << " tidak habis dibagi 5" << endl;
    }
    if (bilangan % 7 == 0) {
        cout << "Angka " << bilangan << " habis dibagi 7" << endl;
    } else {
        cout << "Angka " << bilangan << " tidak habis dibagi 7" << endl;
    }

    return 0;
}
