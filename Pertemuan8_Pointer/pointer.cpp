#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    //variabel biasa
    int angka= 10; // deklarasi
    cout << angka << endl; // isi var angka
    cout << &angka << endl; // alamar angka

    int *ptrAngka; //deklarasi var pointer
    cout << *ptrAngka << endl; // isi var pointer
    cout << ptrAngka << endl; //alamat var pointer

    int *ptrAngka = &angka; //& = alamat
    // kalau begini sdah tersambung
    cout << *ptrAngka << endl;

    //apapun yang di angka kalao sudah tersambung ke pointer, maka pointernya bakalan ngikut

    //// di pointer kalao tanpa bintang langsung menunjuk ke alamat variable
    //diakhir string literal ada null terminatir
    // null pointer untuk memberhentikan string literal ketika dicari
    
    // 

    return 0;
}