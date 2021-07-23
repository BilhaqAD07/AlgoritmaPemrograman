#include <iostream>
using namespace std;
int main(){	
	int Konversi;
	float tc[1];
	char ulangi;

do {
	cout<< ">>> PROGRAM MENGKONVERSI SUHU DARI CELCIUS <<<" << endl;
	cout<< "1. Farenheit" << endl;
	cout<< "2. Reamur" << endl;
	cout<< "3. Kelvin" << endl;
	cout<< "Masukan Angka Pilihan Konversi (1 / 2 / 3) : ";
	cin>>Konversi;
	cout<<endl;
	
if(Konversi == 1){
	cout<<"Masukan Suhu Dalam Celcius : ";
	cin>>tc[0];
		cout<<" Dalam Farenheit : " << tc[0] * 9/5 + 32 << endl;
}
else if ( Konversi == 2){
	cout<<"Masukan Suhu Dalam Celcius : ";
	cin>>tc[0];
		cout<<" Dalam Reamur : " << tc[0] * 4/5 << endl;
}
else if ( Konversi == 3 ){
	cout<<"Masukan Suhu Dalam Celcius : ";
	cin>>tc[0];
		cout<<" Dalam Kelvin : " << tc[0] + 273 << endl;
}
else {
	cout<<"Pilihan Eror!!";
}
cout<<endl; 

cout<<"Tekan Y atau y untuk ulangi : ";
cin>>ulangi;
cout<<endl;
}
while (ulangi == 'Y' || ulangi == 'y');
	return 0;
}