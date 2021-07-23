#include<iostream>
using namespace std;
long BCA(long a){
	return a+(a*0.1);
}
long BNI(long a){
	return a+(a*0.5);
}
long BRI(long a){
	return a+(a*0.2);
}
long mandiri(long a){
	return a+(a*0.15);
}

int main(){
	cout<<"\t\t***************************"<<endl;
	cout<<"\t\t*      SELAMAT DATANG     *"<<endl;
	cout<<"\t\t***************************"<<endl;
	long a;
	cout<<"\nMasukkan Tabungan : "<<"Rp.";cin>>a;
	cout<<"total BCA per bulan adalah "<<"\t  Rp."<< BCA(a)<<endl;
	cout<<"total BNI per bulan adalah "<<"\t  Rp."<< BNI(a)<<endl;
	cout<<"total BRI per bulan adalah "<<"\t  Rp."<< BRI(a)<<endl;
	cout<<"total Mandiri per bulan adalah "<<"Rp."<< mandiri(a)<<endl<<endl;
	cout<<"\t---------------------------------------------------"<<endl;
	cout<<"\t Rp."<<"Rata-rata semua bank adalah "<<"\tRp."<<(BCA(a)+BNI(a)+BRI(a)+mandiri(a))/4<<endl;
	cout<<"\t---------------------------------------------------"<<endl<<endl;
	
	cout<<"\t\t***************************"<<endl;
	cout<<"\t\t*       TERIMA KASIH      *"<<endl;
	cout<<"\t\t***************************"<<endl;
}

