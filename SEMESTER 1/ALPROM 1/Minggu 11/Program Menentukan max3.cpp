

#include <iostream>
using namespace std;

	int max2 (int i, int j){
		if (i > j){
			return i;
		} else {
			return j;
		}
	}
	int max3 (int i, int j, int k){
	return max(max(i,j),k);
	}
	
	int main (){
		int i,j,k,maksimum;
		cout << "\nMasukkan nilai i => "; cin >> i;
		cout << "Masukkan nilai j => "; cin >> j;
		cout << "Masukkan nilai k => "; cin >> k;
	
	
	
	maksimum = max4(i,j,k);
	cout << "Bilangan Maksimumnya adalah " << maksimum;
	return 0;
}


