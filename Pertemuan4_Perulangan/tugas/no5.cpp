#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int n, i;
    bool p = true;

    cout << "Masukkan angka: ";
    cin >> n;

    if ( n <= 1) {
        p = false;
    } else 
    {    for (i = 2; i <= n; i++)
        {
            if (n % i == 0) {
                p = false;
                break;
            } 
        }
    }
    
    if (p) {
        cout << n << " adalah bilangan prima";
    } else {
        cout << n << " bukan bilangan prima";
    }
    
    return 0;
}