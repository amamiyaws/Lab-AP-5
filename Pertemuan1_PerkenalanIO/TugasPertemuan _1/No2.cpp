#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama;

    cout<<"GETLINE\n";
    cout<<"Nama: ";
    getline(cin, nama);
    cout<<nama<<endl;

    cout<<"\nCIN\n";
    cout<<"Nama: ";
    cin>>nama;
    cout<<nama<<endl;
}