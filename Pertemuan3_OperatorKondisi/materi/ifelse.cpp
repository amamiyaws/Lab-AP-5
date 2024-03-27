#include <iostream>
using namespace std;

int main() {
    system("cls");
    
//mengubah nilai abcd

    char nilai;
    
    cout << "Berapa nilai kamu: ";
    cin >> nilai;

    if (nilai =='A'){
        cout << "Bagus, pertahankan";
    } else if (nilai == 'B') {
        cout << "bagus";
    } else if (nilai == 'c') {
        cout << "keren";
    } else if (nilai == 'd') {
        cout<< " slebew";
    } else if (nilai == 'e') {
        cout << "hebat";
    } else {
        cout << "nilai tidak valdi";
    }
    
    return 0;
}