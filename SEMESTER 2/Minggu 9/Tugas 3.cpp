#include <iostream>
using namespace std;


//menghitung jumlah deret genap S(n) = 2 + 4 + 6 + 8 + .... + (2 * n)
long int deret2(int n){
    if (n == 1)
       return 2;
    else return deret2(n - 1) + (2*n);
}

int main(){
    int hasil, x,p;
    cout << "Masukkan N : "; cin >> x;
    cout << "Deret : ";
    for(int i=1; i<=x*2; i++){
        if(i%2==0){
            if(i != x*2){
                cout << i << " + ";
            } else if(i == x*2){
                cout << i;
            }
        }
    }
    cout << endl;
    hasil=deret2(x);
    cout << "Hasil S("<<x<<") : " << hasil << endl;

    return 0;
}
