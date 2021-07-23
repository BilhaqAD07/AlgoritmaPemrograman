#include<iostream>
using namespace std;
struct data{
	string nama;
	float tinggi,bb;
};
int main(){
	data BM;
	int N;
	cout<<"Masukkan banyak data : ";cin>>N;
	for(int i=0;i<N;i++){
	cout<<"Masukkan nama anda : ";cin>>BM.nama;
	cout<<"Masukkan tinggi badan anda : ";cin>>BM.tinggi;
	cout<<"Masukkan berat badan anda : ";cin>>BM.bb;
	float BMI= BM.bb/(BM.tinggi*BM.tinggi)*10000;
	cout<<BMI<<endl;
	if(BMI<18.5){
		cout<<"Status	: Kekurangan Berat Badan "<<endl;
	}else if(BMI>=18.5 && BMI<= 24.9){
		cout<<"Status	: Normal (Ideal)"<<endl;
	}else if(BMI>=25.0&& BMI<=29.9){
		cout<<"Status	: Kelebihan Berat Badan "<<endl;
	}else if (BMI>30.0){
		cout<<"Status	: Kegemukan (Obesitas)"<<endl;
	}
	}
	
}