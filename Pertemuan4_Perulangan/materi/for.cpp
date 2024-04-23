#include <iostream>
using namespace std;

int main() {
    system("cls");
    

    string nama = "noel";

    for (int i  = 0; i < nama.length(); i ++)  {
      cout<< nama [i] << endl;
    }
    
      // for each
  for (char items : nama){
    cout << items << endl;
  }
  
    return 0;
}