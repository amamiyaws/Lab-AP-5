#include <iostream>
using namespace std;

int main() {
    system("cls");

    string nama;
    int gol, anak, gapok, tunjangan, gatot, potpa;

    cout << "PROGRAM HITUNG GAJI" << endl;
    cout << "Nama: ";
    cin >> nama;
    cout << "Golongan (1, 2, 3): ";
    cin >> gol;
    cout << "Jumlah anak: ";
    cin >> anak;

    if (gol == 1) {
        gapok = 5000000;
    }
    else if (gol == 2) {
        gapok = 3000000;
    }
    else if (gol == 3) {
        gapok = 2500000;
    } else {
        cout << "Tidak valid";
    }

    if (anak <= 2){
        tunjangan = anak * 500000;
    }
    else {
        tunjangan = anak * 750000;
    }

    gapok = gapok + tunjangan;
    potpa = gapok * 0.05;
    gatot = gapok - potpa;

    cout << "Gaji anda bulan ini adalah sebesar Rp." << gatot;



    return 0;
}