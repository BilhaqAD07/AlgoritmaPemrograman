#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct novel{
	string judul;
	int hal;
	int harga;
};
bool murahmana(novel a,novel b){
	if(a.harga<b.harga){
		return true;
	}else{
		return false;
	}
}

int main(){
	int c;
	cout << "Masukkan berapa banyak data : "; cin >> c;
	novel a[c]; 

	for(int i=0;i<c;i++){
		cout<<"Data ke-"<<i+1<<endl;
		cout<<" Judul : ";cin>>a[i].judul;
		cout<<" Tebal Halaman : ";cin>>a[i].hal;
		cout<<" Harga : ";cin>>a[i].harga;
		cout<<endl;
	} 
	sort(a,a+c,murahmana);
	cout<<"Urutan dari yang paling murah : "<<endl;
	for(int i=0;i<c;i++){
		cout<<a[i].judul<<"\t\t"<<a[i].hal<<"\t"<<a[i].harga<<endl;
	}
} 