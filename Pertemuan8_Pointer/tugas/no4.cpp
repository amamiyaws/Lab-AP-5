#include <iostream>
using namespace std;

void tambah(int *a, int *b, int *hasil) {
    *hasil = *a + *b;
}

void kurang(int *a, int *b, int *hasil) {
    *hasil = *a - *b;
}

void kali(int *a, int *b, int *hasil) {
    *hasil = *a * *b;
}

void bagi(int *a, int *b, float *hasil) {
    if (*b != 0) {
        *hasil = (float)(*a) / *b;
    } else {
        *hasil = 0;
    }
}

int main() {
    system("cls");
    int ang1, ang2, hasilInt;
    float hasilFloat;
    char op;

    cout << "Operasi (+, -, *, /) : ";
    cin >> op;
    cout << "Angka pertama: ";
    cin >> ang1;
    cout << "Angka kedua: ";
    cin >> ang2;

    switch (op) {
        case '+':
            tambah(&ang1, &ang2, &hasilInt);
            cout << "Hasil penjumlahan: " << hasilInt << endl;
            break;
        case '-':
            kurang(&ang1, &ang2, &hasilInt);
            cout << "Hasil pengurangan: " << hasilInt << endl;
            break;
        case '*':
            kali(&ang1, &ang2, &hasilInt);
            cout << "Hasil perkalian: " << hasilInt << endl;
            break;
        case '/':
            bagi(&ang1, &ang2, &hasilFloat);
            cout << "Hasil pembagian: " << hasilFloat << endl;
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            return 1;
    }

    return 0;
}
