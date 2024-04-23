#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int k;

    cout<< "kalimat: ";
    cin >> k;

    while (k < 0 || k > 10 ) {
        cout <<  k;
    }
    
    return 0;
}