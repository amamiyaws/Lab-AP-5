#include <iostream>
using namespace std;

int main() {
    system("cls");
    char kata[] = "K O M P U T E R"; // menyimpan array karakter
    char *ptr ; // menunjuk array karakter

    ptr = kata; // menunjuk huruf kelima 

    cout << "Huruf ke-5 dari kata K O M P U T E R adalah: " << *(ptr + 8) << endl; 
    // *(ptr + 8) untuk akses indeks kedelapan karena ada spasi

    return 0;
}
