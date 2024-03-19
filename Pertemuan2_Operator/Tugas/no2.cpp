#include <iostream>
#include <cmath> // untuk penggunaan sqrt
using namespace std;

int main() 
{
    system("cls");

    double a, b, c;
    double hasil, x1, x2;

    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;

    if (hasil > 0) // periksa diskriminan positif
    {
        x1 = (-b + sqrt(hasil)) / (2 * a);
        x2 = (-b - sqrt(hasil)) / (2 * a);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    else if (hasil == 0) //periksa diskriminan nol
    {
        x1 = -b / (2 * a);
        cout << "X1 = " << x1 << endl;
        cout<< "X2 = " << x2 << endl;
    }

    else // periksa diskriminan negatif
    {
        double realPart = -b /(2 * a);
        double imaginaryPart = sqrt(-hasil) / (2 * a);
        cout << "X1 = " << realPart << endl;
        cout << "X2 = " << realPart << endl;

    }

}
