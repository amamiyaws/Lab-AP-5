#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int umur;

    cout << "Berapa umur kamu: ";
    cin >> umur;
    if (umur < 0 ) {
        cout << "km bkan manusia";
    } else if (umur > 0 && umur < 5) {
            cout << "kamu masih balita";
        }
        else if (umur > 5 && umur < 17) {
                cout << "kamu remaja";
            }
         else if (umur > 17 && umur  < 50) {
                cout << "kamu tuwa";
            }
        else if (umur > 50 && umur < 80 ) {
                cout << "kamu lansiyah";
            }
        
    
    
    return 0;
}