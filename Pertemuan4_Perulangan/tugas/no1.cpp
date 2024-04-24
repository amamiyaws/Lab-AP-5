#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int n, hasil;
    cout << "Berapa deret yang ingin anda tampilkan: ";
    cin >> n;

    hasil =  1;
    
    for (int i = 1; i <= n; i++)
    {
        cout << hasil << " ";
        if (hasil % 2 == 0)
        {
            hasil += 3;
        } else if (hasil % 2 == 1)
        {
            hasil += 5;
        }
    }
    return 0;
}