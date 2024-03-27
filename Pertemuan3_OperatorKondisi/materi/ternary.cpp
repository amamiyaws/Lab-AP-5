#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int tinggi; 
    string hasil;

    cout << "brp tinggi km: ";
    cin >> tinggi;

    hasil = (tinggi > 200)?  "km basket ych" : "km gk mungkin basket";
    cout << hasil << endl;
    return 0;
}