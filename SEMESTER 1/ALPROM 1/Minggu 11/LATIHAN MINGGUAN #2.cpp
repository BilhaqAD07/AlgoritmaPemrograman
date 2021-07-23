#include <iostream>
using namespace std;

int main(){
	int n;
	
   cout << "MASUKKAN "; cin >> n;
   cout << endl;
   
    for(int a=1;a<=n;a++){
        for(int b=1;b<=a;b++)
        cout << b <<' ';

	cout << endl;
    }
    for(int c=n;c>=0;c--){
    	for(int l=c;l>=0;l--)
    	cout << c << ' ';
    	
    	cout << endl;
	}
    
}

