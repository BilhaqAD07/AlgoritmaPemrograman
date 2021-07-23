//Nomor 1
#include <iostream>
using namespace std;
char Hmm(int z){
char B[10] =
{'L','O','R','E','M','I','P','S','U','W'};
return B[z];
}
int main() {
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


//Nomor 2

#include<iostream>
using namespace std;
int tambah(int a,int b){
	return a+b;
}
int kurang(int a,int b){
	return a-b;
}int kali(int a,int b){
	return a*b;
	}
float bagi(float a,float b){
	return a/b;
}
int main(){
	float a,b,c;
	cout<<"Masukkan nilai a : ";cin>>a;
	cout<<"Masukkan nilai b : ";cin>>b;
	cout<<"operasi mana yang anda inginkan :";cin>>c;
	if(c==1){
		cout<<"penjumlahan dua bilangan "<<endl;
		cout<<tambah(a,b);
	}else if(c==2){
		cout<<"pengurangan dua bilangan "<<endl;
		cout<<kurang(a,b);
	}else if(c==3){
		cout<<"perkalian dua bilangan "<<endl;
		cout<<kali(a,b);
	}else if(c==4){
		cout<<"pembagian dua bilangan "<<endl;
		cout<<bagi(a,b);
	}else{
		cout<<"kesalahan menginputkan pilihan "<<endl;
	}
	
}

//Nomor 3
#include<iostream>
using namespace std;
int genap(int a){
	if(a%2==0){
		return a;
	}}
int ganjil(int a){
	if(a%2!=0){
		return a;
	}
}

int main(){
	awal:
	int a;
	char pilih;
	cout<<"masukkan nilai a : ";cin>>a;
	if(a%2==0){
		cout<<genap(a)<<" adalah bilangan genap "<<endl;
	}else  {
		cout<<ganjil(a)<<" adalah bilangan ganjil "<<endl;
	}
	cout<<"Ingin memasukkan bilangan lagi (Y/N) ? ";
	cin>>pilih;
	if(pilih=='Y' || pilih=='y'){
		goto awal;
	}
	else{
		cout<<"Program selesai";
	}
	
}





