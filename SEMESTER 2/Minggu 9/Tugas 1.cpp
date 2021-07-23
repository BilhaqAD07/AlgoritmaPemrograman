#include <iostream>
using namespace std;

long int faktorial(int X){
    if(X==1)
    return(X);
    else return (X*faktorial(X-1));
}

int main(){
    int N;

    cout << "\t\t---MENGHITUNG NILAI FAKTORIAL DENGAN REKURSIF---" << endl << endl;

    cout << "Input angka : "; cin >> N;
    cout << N << "! = ";
    for(int i=N;i>=1;i--){
        if(i != 1){
            cout << i << " x ";
        }else{
            cout << i;
        }
    }
    cout << endl;
    cout << "Hasil faktorial = " << faktorial(N) << endl;
    
    return 0;
}