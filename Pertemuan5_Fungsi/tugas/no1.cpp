#include <iostream>
#include <typeinfo>
using namespace std;

int inglobal;
string fb(int angka){
    string hasil;
    if (angka % 3 == 0 && angka % 5 == 0)
    {
        hasil = "FizzBuzz";
    } else if (angka % 3 == 0) 
    {
        hasil = "Fizz";
    } else if (angka % 5 == 0)
    {
        hasil = "Buzz";
    } else 
    {
        hasil = to_string(angka);
    }
    return hasil;

} 

string ds(int angka) {
        string hasil = "";
        for (int i = 1; i <= angka; i++)
        {
            int deret = (i * (i + 1));
            hasil += fb(deret);
            if (i != angka)
            {
                hasil += ", ";
            }
            if (deret % 3 != 0 && deret % 5 !=0)
            {
                inglobal = deret;
            }
            
        }
        return hasil;
    }
    

int main() {
    system("cls");
    
    int angka;

    cout << "Input angka: ";
    cin >> angka;

    if (angka >= 3 && angka <= 100)
    {
        cout << ds(angka) << endl;
        cout << "Tipe data " << inglobal << " adalah " << typeid(inglobal).name();
    } else {
        cout << "Input anda tidak valid. Inputan rentang 3 - 100" << endl;
    }
    
    
    return 0;
}