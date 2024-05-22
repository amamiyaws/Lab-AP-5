#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int x = 25;
    int *px;

    *px = &x; // nampilin alamat
    *px = x; // ngarahin x (25) ke alamat px
    
    return 0;
}