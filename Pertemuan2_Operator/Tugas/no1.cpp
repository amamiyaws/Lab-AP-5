#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int I = 2;
    int K = 7;
    int L = 1;
    int C = 9;
    int U = 5;
    int S = 6;

    // a. (3 - 1 < I) OR ((K - 5 < 8 + 2) AND (L +7 >= 9 + 3))
    bool a = (3 - 1 < I) || ((K - 5 < 8 + 2) && (L + 7 >= 9 + 3));
    cout<< "a. (3 - 1 < I) OR (K - 5 < 8 + 2) AND (L + 7 >= 9 + 3) = "<< a << endl;

    // b. (L % 3 > U) AND (C / U < S) OR (3 * 1 - K > 0)
    bool b = (L % 3 > U) && (C / U < S) || (3 * 1 - K > 0);
    cout << "b. (L % 3 > U) AND (C / U < S) OR (3 * 1 - K > 0) = " << b << endl;

    // c. (I - 9 > K) OR (L + 3 < 4 * C)
    bool c = (I - 9 > K) || (L + 3 < 4 * c);
    cout << "c. (I - 9 > K) OR (L + 3 < 4 * c) = " << c << endl;

    // d. I OR K AND L XOR 3 SHL 2 
    int d = I | (K & L ^ 3 << 2);
    cout << "d. I OR K AND L XOR 3 SHL 2 = " << d << endl;


    /*
        PERHITUNGAN MANUAL: 
        a. (3 - 1 < I) OR ((K - 5 < 8 + 2) AND (L +7 >= 9 + 3))
            (3 - 1 < 2) OR ((7 - 5 < 10) AND (1 + 7 >= 12))
            (2 < 2) OR  ((2 < 10) AND (8 >= 12))
            false OR (true AND false)
            false OR false
            false
            
        b. (L % 3 > U) AND (C / U < S) OR (3 * 1 - K > 0)
            (1 % 3 > 5) AND ((9 / 5 < 6) OR (3 * 1 - 7 > 0))
            (1 > 5) AND ((1 < 6) OR (3 - 7 > 0))
            false AND (true OR false)
            false AND true
            false

        c. (I - 9 > K) OR (L + 3 < 4 * C)
            (2 - 9 > 7) OR (1 + 3 < 4 * 9)
            (-7 > 7) OR (4 < 36)
            false OR true
            true

        d. I OR K AND L XOR 3 SHL 2
            2 OR 7 AND 1 XOR 3 SHL 2

            0011 SHL 2 = 1100
            0111 AND 0001 = 0001
            0001 XOR 1100 = 1101
            1101 OR 0010 = 1111
    */
}