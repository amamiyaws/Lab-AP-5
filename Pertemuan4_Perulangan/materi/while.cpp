#include <iostream>
using namespace std;

int main() {
    system("cls");
    

    int x = 5;
    while (x > 0)
    {
        cout << "hello world" << endl;
        x--;
    }
    
    int angka;

    cout<< "angka: ";
    cin >> angka;

    while (angka < 0 || angka > 10 ) {
        cout << "masukkan angka: ";
        cin >> angka;
    }
    
    return 0;
}