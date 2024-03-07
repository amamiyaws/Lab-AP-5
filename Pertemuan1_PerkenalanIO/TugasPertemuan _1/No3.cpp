#include <iostream>
using namespace std;

#define covertkm 0.001

int main()
{
     double meter;

     cout<<"Masukan jarak (m): ";
     cin>>meter;
     cout<< "Satuan jarak dalam Kilometer (KM) adalah: " << meter * convertkm << " KM"<< endl;

    return 0;
}