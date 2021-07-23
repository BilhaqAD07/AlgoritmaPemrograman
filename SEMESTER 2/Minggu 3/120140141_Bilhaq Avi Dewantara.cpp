// BILHAQ AVI DEWANTARA
// 120140141
// RC


#include <iostream>

using namespace std;

char Hmm(int z){
char B[10] =
{'L','O','R','E','M','I','P','S','U','W'};
return B[z];
}

int main() {
cout << "--------------------------------SOAL 1------------------------------------"<< endl;
int A[10] = {0,0,0,0,0,0,0,0,0,0};
int i, x;
	for(i=0; i<20; i++){
	cin >> x;
	A[x]++;
	}
	for(i=0; i<10; i++){
	cout << i << " = " << A[i] << " --> " <<
	Hmm(A[i]);
	cout << endl;
}
}
/* JAWABAN SOAL 1
0 = 1 --> O
1 = 0 --> L
2 = 2 --> R
3 = 2 --> R
4 = 0 --> L
5 = 2 --> R
6 = 5 --> I
7 = 4 --> M
8 = 1 --> O
9 = 3 --> E
*/

cout << "--------------------------------SOAL 2------------------------------------"<< endl;
#include <iostream>
#include <conio.h>

using namespace std;

float tbh(float x,float y){
    float a;
    a=x+y;
    return a;
}
float krg(float x, float y){
    float b;
    b=x-y;
    return b;
}
float kli(float x, float y){
    float c;
    c=x*y;
    return c;
}
float bgi(float x, float y){
    float d;
    d=x/y;
    return d;
}

int main(){
    float m,n;
    char k;
    int tambah,kurang,kali,bagi;

    cout << "--Operasi Perhitungan--" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih Operasi (1/2/3/4)= "; cin >> k;
    cout << "Masukkan Angka Pertama = "; cin >> m;
    cout << "Masukkan Angka Kedua = "; cin >> n;
    
    switch(k){
       case '1':
       tambah=tbh(m,n);
       cout <<"Hasil = " << tambah;
       break;
       case '2':
       kurang=krg(m,n);
       cout <<"Hasil = " << kurang;
       break;
       case '3':
       kali=kli(m,n);
       cout <<"Hasil = " << kali;
       break;
       case '4':
       bagi=bgi(m,n);
       cout <<"Hasil = " << bagi;
       default:
       	return 0;
	}
}

#include <iostream>
using namespace std;

int main(){
	cout << "--------------------------------SOAL 3------------------------------------"<< endl;
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

   
