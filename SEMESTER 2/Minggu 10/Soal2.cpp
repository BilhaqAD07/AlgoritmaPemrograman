#include <iostream>
using namespace std;

int ngapaya(int n){
    int angka;
    if(n==1)
    return n;
    else angka =ngapaya(n-1)+(n);
    return angka;
    }

int main()
{
    int X;
    cout << "Masukkan bilangan bulat Positif: ";
    cin >> X;
    cout << "Hasil akhirnya adalah : " << ngapaya(X) << endl;
    cout << endl;
    for(int i=X;i>=0;i--){
        if(i!=0){
            cout << i << " + "; 
        } else {
            cout << i;
        }
    }
    cout << " = " << ngapaya(X);
    cout << endl;

    
    
    
    return 0;
}
