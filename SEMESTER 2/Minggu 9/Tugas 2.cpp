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
	cout<<"Input Bilangan N : "; cin>>input;
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