#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

// volume kerucut
double volkerucut(double r, double t)
{
    return (1.0 / 3.0) * PI * pow(r, 2) * t;
}

// luas kerucut
double luaspermukaankerucut(double r, double s)
{
    return PI * r * (r + s);
}

// volume limas segitiga
double vollimseg(double a, double t)
{
    return (1.0 / 3.0) * (a * a) * t;
}

// luas limas
double luasperlimseg(double a, double t)
{
    double s = sqrt((a / 2) * (a / 2) + t * t);
    return a * a + 4 * ((a * s) / 2);
}

// volume bola
double volbol(double r)
{
    return (4.0 / 3.0) * PI * pow(r, 3);
}

// luas bola
double lubol(double r)
{
    return 4 * PI * pow(r, 2);
}

// volume prisma
double volpri(double a, double t)
{
    return a * t;
}

// luas permukaan prisma
double lupri(double a, double b, double c, double t)
{
    return (a * t) + (b * t) + (c * t) + (a * b) / 2 + (a * c) / 2 + (b * c) / 2;
}

int main()
{
    system("cls");
    int pilihan;
    double r, t, a, b, c;

    cout << "Program menghitung luas dan volume bangun datar" << endl;
    cout << "1. Kerucut" << endl;
    cout << "2. Limas Segitiga" << endl;
    cout << "3. Bola" << endl;
    cout << "4. Prisma" << endl;
    cout << "Pilih bangun ruang yang ingin dihitung (1-4): ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Jari- jari kerucut: ";
        cin >> r;
        cout << "Tinggi kerucut: ";
        cin >> t;
        cout << "Volume kerucut = " << volkerucut(r, t) << endl;
        cout << "Luas kerucut = " << luaspermukaankerucut(r, sqrt(pow(r, 2) + pow(t, 2))) << endl;
        break;

    case 2:
        cout << "Alas limas: ";
        cin >> a;
        cout << "Tinggi limas: ";
        cin >> t;
        cout << "Volume limas = " << vollimseg(a, t) << endl;
        cout << "Luas limas = " << luasperlimseg(a, t) << endl;
        break;

    case 3:
        cout << "Jari-jari bola: ";
        cin >> r;
        cout << "Volume bola = " << volbol(r) << endl;
        cout << "Luas permukaan bola = " << lubol(r) << endl;
        break;

    case 4:
        cout << "Sisi A: ";
        cin >> a;
        cout << "Sisi B: ";
        cin >> b;
        cout << "Sisi C: ";
        cin >> c;
        cout << "Tinggi: ";
        cin >> t;
        cout << "Volume prisma = " << volpri(a, t) << endl;
        cout << "Luas prisma = " << lupri(a, b, c, t) << endl;
        break;

    default:
        cout << "Pilihan anda tidak valid." << endl;
    }

    return 0;
}
