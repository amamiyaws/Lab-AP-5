#include <iostream>
using namespace std;
bool prima(int angka) {
    if (angka <= 1) {
        return false;
    }
    
    for (int i = 2; i <= angka / 2; ++i) {
        if (angka % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int bilangan;
    
    cout << "Masukkan suatu bilangan bulat: ";
    cin >> bilangan;
    
    if (prima(bilangan)) {
        cout << bilangan << " adalah bilangan prima." << endl;
    } else {
        cout << bilangan << " bukan bilangan prima." << endl;
    }
    
    return 0;
}
