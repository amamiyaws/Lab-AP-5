#include <iostream>
using namespace std;

int fakt(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fakt(n - 1);
    }
}

int binom(int n, int k) {
    return fakt(n) / (fakt(k) * fakt(n - k));
}

int main() {
    system("cls");
    int x, y;

    cout << "Masukkan dua buah bilangan (1 <= x, y <= 30 | y <= x): ";
    cin >> x >> y;

    if (x < 1 || x > 30 || y < 1 || y > 30 || y > x) {
        cout << "Input tidak valid";
        return 1;
    }

    int pascal = binom(x - 1, y - 1);

    cout << "Nilai elemen Pascal: " << pascal << endl;

    return 0;
}
