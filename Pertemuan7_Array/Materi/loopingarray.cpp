#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int arraynilai[10] = {0,1,2,3,4,5,6,7,8,9};

    for (int nilai : arraynilai)
    {
        cout << "address "<< &nilai << " > " << nilai << endl;
        
    }

    for (int &nilairef :  arraynilai) 
    {
        nilairef *= 2;
    }

    cout << endl;

    for (int &nilairef : arraynilai) 
    {
        cout << "address: " << &nilairef << " > " << nilai << endl;
    }
    return 0;
}