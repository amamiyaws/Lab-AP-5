#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("cls");
    
    float bmi;
    float t;
    float b;

    cout << "PROGRAM MENGHITUNG BMI" << endl; 
    cout << "Berat badan (kg) : ";
    cin >> b;
    cout << "Tinggi badan (cm): ";
    cin >> t;
    t = t / 100;
    
    bmi = (b / (t * t));

    cout << "BMI anda adalah: " << fixed << setprecision(2) << bmi << endl;

    if (bmi < 18.5){
        cout << "Kategori berat badan: kurang" << endl;
    } 
     else if (bmi >= 18.5  &&  bmi < 25) {
        cout << " Kategori berat badan: normal" << endl;
    }
    else if (bmi >= 25 && bmi < 30 ){
        cout << "Kategori berat badan: berlebih" << endl;
    }
    else if (bmi >= 30) {
        cout << "kategori berat badan: obesitas" << endl;
    }
    else {
        cout << "Invalid" << endl;
    }
    
    return 0;
}