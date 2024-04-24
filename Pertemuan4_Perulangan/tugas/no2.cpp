#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    string kalimat;
    char huruf;
    int hapus;

    cout << "Input kalimat: ";
    getline(cin, kalimat);
    cout << "karater yang ingin dihapus: ";
    cin >> huruf;

    hapus = 0;
    for (char h : kalimat) {
        if (h ==  tolower(huruf) || h == toupper(huruf))
        {
            hapus += 1;
            continue;
        }
        cout << h;
    }
    cout <<  endl;
    cout << "Karakter yang terhapus: " << hapus << endl;
    return 0;
}