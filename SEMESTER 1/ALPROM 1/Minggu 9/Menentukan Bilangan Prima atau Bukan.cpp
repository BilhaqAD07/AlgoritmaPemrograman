#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Masukkan Bilangan Bulat => "; cin >> n;
	
	int i = 2;
	bool Prima = true;
	
	
	while (i < n && Prima){
		if (n % i == 0 && n !=2 && n !=3)
		{
			Prima = false;
		}
		i++;
	} cout << endl;
	if (Prima && n !=1 && n>1){
		cout << n << " Bilangan Prima" << endl;		
	}else {
		cout << n << " bukan Bilangan Prima" << endl;
	}
	return 0;
}
