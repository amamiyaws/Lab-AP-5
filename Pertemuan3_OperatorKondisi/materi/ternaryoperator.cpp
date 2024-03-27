#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int umur; 
    string hasil;

    cout << "brp c umur km: ";
    cin >> umur;

    hasil = (umur > 1000)?  "gk mnusya km nie" : "km mungkin mnusya";
    cout << hasil << endl;
    return 0;
}