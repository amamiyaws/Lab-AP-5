#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama, nim, kom;
    float ipk;

    cout<<"Nama: ";
    cin>>(nama);
    cout<<"NIM: ";
    cin>>nim;
    cout<<"KOM: ";
    cin>>kom;
    cout<<"IPK: ";
    cin>>ipk;

    system("cls");
    
    cout<<"halo, nama anda adalah "<<nama<<". NIM anda adalah "<<nim<<". Anda dari KOM "<<kom<<". IPK anda adalah "<<ipk<<".";
    return 0;
}