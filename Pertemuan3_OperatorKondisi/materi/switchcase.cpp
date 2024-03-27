#include <iostream>
using namespace std;

int main() {
    system("cls");
    int umur;
    
        cout << "masukkan umur: ";
        cin >> umur;
        switch (umur)
        {
            case 1 ... 10:
            cout << "anak";
                break;

            case 11 ... 20:
            cout << "remaja";
                break;

            case 21 ... 45:
            cout << "dewasa";
                break;


            default: cout << "lansia";
                break;
        }
    
    
    return 0;
}