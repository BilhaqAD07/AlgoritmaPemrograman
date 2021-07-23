#include <iostream>
using namespace std;

int main(){
    int bil, cek;
    
    a:
    cout << "Masukkan angka =";
    cin >> bil;
    
    if(bil%2 == 0) {
		cout << bil << " Merupakan angka bilangan genap.";
	} else {
		cout << bil << " Merupakan angka bilangan ganjil.";
	}
	
	cout << endl;
	cout << "Ingin melakukan pengecekan lagi? (Y/N): ";
	cin >> cek;
	if(cek =='Y' || cek == 'y'){
		goto a;
	} else {
		cout << "\nMakasih";
	}
	return 0;

}
