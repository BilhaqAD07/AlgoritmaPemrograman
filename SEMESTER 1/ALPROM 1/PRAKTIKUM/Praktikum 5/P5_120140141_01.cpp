/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P5_120140141_01
Tanggal		: 25 November 2020
Deskripsi	: Fungsi Bangun Datar
============================================
*/

#include <iostream>
using namespace std;

float persegi(float a){
	float i;
	i=a*a;
	return i;
}
float segitiga(float a,float b){
	float j;
	j=(a*b)/2;
	return j;
}
float lingkaran(float a){
	float k;
	const float pi=3.14;
	k=pi*a*a;
	return k;
}
	
int main ()
{
	float x,y;
	string bgn;
	
	cin >> bgn;
	if(bgn=="Persegi"){
		cin>>x;
		cout<<"Luas = "<<persegi(x);
	}else if(bgn=="Segitiga"){
		cin>>x;
		cin>>y;
		cout<<"Luas = "<<segitiga(x,y);
	}else if(bgn=="Lingkaran"){
		cin>>x;
		cout<<"Luas = "<<lingkaran(x);
	}
	return 0;
}
	
	


