/* 
----------------
/ Bilhaq Avi D /
/ 120140141	   /
----------------
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	int i=0;
	int k=0;
	int j=0;
	
	cout << "Masukkan Angka -> "; cin >> n;
	
	for(i=0;i<n;i++){
		for(j=n;j>i;j--){
			cout << " ";
		}
		for(k=0;k<=2*i;k++){
			cout << "*";
		}
		cout<<endl;
	}
	for(i=n;i>=1;i--){
		for(j=i;j<=n;j++){
			cout << " ";
		}
		for(k=2*i-1;k>=1;k--){
			cout << "*";
		}
		cout<<endl;
	}
	return 0;
}

