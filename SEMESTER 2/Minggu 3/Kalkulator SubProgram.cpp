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
    

