
#include <iostream>
using namespace std;

main(){
	system("cls");
	string nama[100];
	int no, i, a;

	cout << "Masukkan jumlah anggota keluarga = ";
	cin>> no;

	//Input
	for (int i=1;i<=no;i++){
		cout << "Masukkan Nama : ";
		cin >> nama[i];
	}

	//Output
	cout << "\nANGGOTA KELUARGA" << endl;
	for (int a=1;a <= no;a++){
		cout <<a<<". "<< nama[a] << endl;
	}
	return 0;
}
