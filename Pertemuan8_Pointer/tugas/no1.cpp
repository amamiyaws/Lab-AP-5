#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int ganjil [20];
    int index = 0;

    for (int i = 1; i <= 20; i++)
    {
        ganjil[index] = i;
        index++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Bilangan ganjil: " << ganjil[i] << endl;
        cout << "Alamat memori: " << &ganjil[i] << endl;
    }
    
    return 0;
}