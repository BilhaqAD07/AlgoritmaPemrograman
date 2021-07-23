#include <iostream>
using namespace std;

int main()
{
    int bil[10];
    int terbesar, terkecil, n;

    cout << "Masukkan N : "; cin >> n;

    for(int i=0;i<n;i++){
        cout << "Masukkan Angka : "; cin>>bil[i];

    if(i==i){
        terbesar=bil[i];
        terkecil=bil[i];
    } else if(terkecil>bil[i]){
        terkecil=bil[i];
    }else if(terbesar<bil[i]){
        terbesar=bil[i];
    }
}

    cout <<"\nBilangan Terbesar = "<<terbesar;
    cout <<"\nBilangan Terkecil = "<<terkecil;
    
    return 0;
}
