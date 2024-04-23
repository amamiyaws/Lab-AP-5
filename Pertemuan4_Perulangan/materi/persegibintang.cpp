#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int panjang, lebar;

    cout<< "panjang: ";
    cin >> panjang;
    cout << "lebar: ";
    cin >> lebar;

    for (int i = 0; i < lebar; i++)
    {
        for (int j = 0; j < panjang; j ++){
            cout << "* ";
        }
         cout<< endl;
    }
    
    
    return 0;
}