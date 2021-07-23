#include<iostream>
using namespace std;
float lingkar(float a){
    float i;
	const float pi=3.14;
	i=pi*a*a;
	return i;
}
float segi(float a,float b){
	float j;
    j=a*b;
	return j;
}
float tiga(float a,float b){
	float k;
    k=(a*b)/2;
	return k;
}
int main(){
	cout<<"-----------------------------------"<<endl;
	cout<<"IF - ELSE MODE"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"MENU PILIHAN "<<endl;
	cout<<"----------------------"<<endl;
	cout<<"1. hitung luas lingkaran "<<endl;
	cout<<"2. hitung luas segitiga "<<endl;
	cout<<"3. hitung luas persegi "<<endl;
	cout<<"4. exit "<<endl;
	cout<<"-----------------------------";
	int p;
	float a,b;
	cout<<"pilihan anda (1/2/3/4) = ";cin>>p;
	if(p==1){
		cout<<"Menghitung luas lingkaran "<<endl;
		cout<<"\n Masukkan jari-jari : "; cin>>a;
		cout<<"\n luas lingkaran adalah "<<lingkar(a)<< " cm";
	}else if(p==2){
		cout<<"menghitung luas segitiga "<<endl;
		cout<<"\n masukkan alas : ";cin>>a;
		cout<<"\n masukkan tinggi : ";cin>>b;
		cout<<"\n luas segitiga adalah " <<tiga(a,b)<< " cm";
	}else if(p==3){
		cout<<"\n menghitung luas persegi "<<endl;
		cout<<"\n Masukkan panjang : ";cin>>a;
		cout<<"\n Masukkan lebar : ";cin>>b;
		cout<<"\n luas persegi adalah "<<segi(a,b)<< " cm";
	}else{
		cout<<"kode yang anda masukkan salah ";
	}
}