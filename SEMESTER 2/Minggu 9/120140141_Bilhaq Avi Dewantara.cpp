//Bilhaq Avi Dewantara
//120140141
//RC

//==============================TUGAS 1==============================
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
//==============================TUGAS 2==============================
#include <iostream>
using namespace std;

//Menghitung jumlah n-1 S(n) = 1 + 2 + 3 + ... (n+1)
long int deret1(int n){
	if(n==1)
		return n;
	else return (n+deret1(n-1));
}

int main(){
	int input;
	cout<<"Input N : "; cin>>input;
    cout << "Deret = ";
	for(int i=1; i<=input;i++){
        if(i !=input){
            cout << i << " + ";
        } else if(i ==input){
            cout << i;
        }
    }
    cout << endl;
    cout << "Hasil" << endl;
	cout<<"S("<<input<<") = "<<deret1(input) << endl;

    return 0;
}
//==============================TUGAS 3==============================
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

