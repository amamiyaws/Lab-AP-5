#include <iostream>
using namespace std;

int main() {
    system("cls");

    int bil;

    cout << "PROGRAM PENENTU BILANGAN BULAT" << endl;
    cout << "Bilangan: ";
    cin >> bil;
    
    if (bil % 2 == 0)
    {
        cout << bil << " adalah bilangan genap";
    }
    else 
    {
        cout << bil << " adalah bilangan ganjil";
    }

    return 0;
}