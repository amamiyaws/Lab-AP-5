#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vektor;
    int bil;

    cout << "Masukkan sebuah deretran angka: ";

    while (cin >> bil && bil != -1) {
        vektor.push_back(bil);
    }

    cout << "Deretan vektor: ";
    for (int bil : vektor) {
        cout << bil << " ";
    }
    cout << endl;

    cout << "Panjang Vektor: " << vektor.size() << endl;

    while (!vektor.empty()) {
        cout << vektor.front() << endl;
        vektor.erase(vektor.begin());
    }

    cout << "Panjang Vektor setelah dihapus: " << vektor.size();

    return 0;
}
