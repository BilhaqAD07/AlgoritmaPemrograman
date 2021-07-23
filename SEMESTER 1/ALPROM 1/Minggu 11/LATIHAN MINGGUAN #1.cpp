#include <iostream>
using namespace std;

float KONVERSIKEL(float A){
    float I;
    I= A+273;
    return I;
}
float KONVERSIFAR(float B){
    float J;
    J= B*1.8+32;
    return J;
}

int main(){
    float n,f,k,F,K;
    char konversi;

    cout << "Masukkan Nilai(Celcius) = "; cin >> n;
    cout << "Dikonversi ke-(F/K) = "; cin >> konversi;
    switch (konversi)
    {
    case 'k':
    k=KONVERSIKEL(n);
        cout << "HASIL = " << k;
        break;
    case 'f':
    f=KONVERSIFAR(n);
        cout << "HASIL = " << f;
        break;
    case 'K':
    K=KONVERSIKEL(n);
        cout << "HASIL = " << K;
        break;
    case 'F':
    F=KONVERSIFAR(n);
        cout << "HASIL = " << F;
        break;
    default:
        cout << "Input Konversi Salah, Silakan coba lagi";
    }
    return 0;
}
