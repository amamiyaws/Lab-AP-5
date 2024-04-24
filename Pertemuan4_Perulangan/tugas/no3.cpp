#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int tahun, interval, kabisat, i;
    
    n:
        cout << "Tahun (1000 <= tahun <= 9000): ";
        cin >> tahun;
        cout << "Interval (-Tahun <= Interval <= 9999 - tahun): ";
        cin >> interval;

        if (tahun <= 1000 || tahun >= 9000 || interval <= -tahun || interval >= 9999 - tahun)
        {
            cout << "Input anda tidak valid." << endl;
            goto n;
        }
        
        i = 0;
        while (i <= abs(interval))
        {
            if (interval > 0)
            {
                kabisat = tahun + i;
            }
            else
            {
                kabisat = tahun - i;
            }
            
            if ((kabisat % 4 == 0 && kabisat % 100 != 0) ||(kabisat % 400 == 0))
            {
                cout << kabisat << " kabisat" << endl;
            } else {
                cout << kabisat << " bukan kabisat" << endl;
            }
            i++;
        }
        
    return 0;
}