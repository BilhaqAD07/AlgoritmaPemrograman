#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    system("cls");
    float n,k,f,r;
    char konversi;
    main:
cout << "--------------------------------KASUS 1------------------------------------"<< endl;
    cout << "Masukkan Nilai(Celcius) = "; cin >> n;
    cout << "Dikonversi ke-(F/K/R) = "; cin >> konversi;
    cout << endl;

    switch (konversi)
    {
    case 'K':
    k=(n+273);
        cout << k;
        break;
    case 'F':
    f=((n*9/5)+32);
        cout << f;
        break;
    case 'R':
    r=((n*9/5)+32);
        cout << r;
        break;
    default:
        cout << "Input Konversi Salah, Silakan coba lagi";
        main:
    }
}
