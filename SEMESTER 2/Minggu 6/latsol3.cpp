#include<iostream>
  using namespace std;
  int tarifc(int jml,int tarifbuk){
  	tarifbuk = 500;
  	return tarifbuk;
  }
  int tarifk(int jml,int tarifbuk){
  	tarifbuk=700;
  	return tarifbuk;
  }
  int tarifn(int jml,int tarifbuk){
  	tarifbuk=1000;
  	return tarifbuk;
  }
  
  int main(){
  	int n,jml,tarifbuk;
  	string nama,kode;
  	cout<<"Jumlah Buku : ";
  	cin>>jml;
  	cin.ignore();
  	
  	//input
  	cout<<"Nama Penyewa Buku : ";
  	getline(cin,nama);
  	cout<<"Kode Buku[C/K/N] : ";
  	cin>>kode;
  	cout<<"Banyak Pinjam : ";
  	cin>>n;
  	cout<<endl;
  	
  	if(kode=="C"){
  	cout<<"Tarif Sewa : "<<"500\n";
  	cout<<"Jenis Buku : "<<"Cerpen\n";
  	cout<<"Penyewa dengan Nama : "<<nama<<endl;
  	cout<<"Jumlah Bayar Penyewaan Sebesar Rp."<<tarifc(jml,tarifbuk)*n<<endl;
	  }
	else if(kode=="K"){
  	cout<<"Tarif Sewa : "<<"700"<<endl;
  	cout<<"Jenis Buku : "<<"Komik"<<endl;
  	cout<<"Penyewa dengan Nama : "<<nama<<endl;
  	cout<<"Jumlah Bayar Penyewaan Sebesar Rp."<<tarifk(jml,tarifbuk)*n<<endl;
	  }
	else if(kode=="N"){
  	cout<<"Tarif Sewa : "<<"1000"<<endl;
  	cout<<"Jenis Buku : "<<"Novel"<<endl;
  	cout<<"Penyewa dengan Nama : "<<nama<<endl;
  	cout<<"Jumlah Bayar Penyewaan Sebesar Rp."<<tarifn(jml,tarifbuk)*n<<endl;
	  }
  }