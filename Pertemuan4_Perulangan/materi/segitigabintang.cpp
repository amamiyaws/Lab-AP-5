#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int tinggi;

    cout << "tinggi: ";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++)
    {
       for (int j = i; j < tinggi; j++)
       {
        cout << "* ";
       }
       cout<< endl;
    }
    
    
    return 0;
}