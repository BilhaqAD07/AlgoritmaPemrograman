/*Nama	:Raja Josua SImanungkalit
  NIM 	:120140134
  Kelas	:IF C */
  
  //===================Soal 1===================
  
  #include<iostream>
  using namespace std;
  int main(){
  	int n;
	cout<<"Input Angka : "; 
  	for(int i=0;  i<=10; i++){
  		cin>>n;
  		if(n==10){
  			cout<<n<<" Adalah 10\n";
		  }else{
		  cout<<n<<" Bukan  10\n";
	  }
  }
  return 0;
}


//===================Soal 2===================
/*Nama	:Raja Josua SImanungkalit
  NIM 	:120140134
  Kelas	:IF C */
  
  #include<iostream>
  using namespace std;
  struct kendaraan{
  	int noken,thn;
	string nama,asal,merk;
  };
  int main(){
  	int jml;
  	int n,b;
  	cout<<"Berapa Kendaraan : ";
	cin>>n;
	kendaraan x[n];
	
	//input data
  	for(int i=0; i<n; i++){
  		cout<<"Kendaraan Ke-"<<i+1<<endl;
  		cout<<"No. Kendaraan\t\t: ";
  		cin>>x[i].noken;
  		cin.ignore();
  		cout<<"Nama Pemilik\t\t: ";
  		getline(cin,x[i].nama);
		cout<<"Asal daerah Pemilik\t: ";
	  	getline(cin,x[i].asal);
	  	cout<<"Merk\t\t\t: ";
	  	getline(cin,x[i].merk);
	  	cout<<"Tahun Kendaraan\t\t: ";
  		cin>>x[i].thn;
		cout<<endl;
	  	if(x[i].thn>2010 && x[i].asal=="Kab. Tulang Bawang"){
	  		b = b+1;
		  }
	  }
	  
	//Output data
	cout<<"Jumlah Kendaraan yang dibuat tahun 2010 keatas dari kab. Tulang Bawang : "<<b<<endl;
	cout<<"-------------------------------------------------------------------------------------------------\n\n";
	
	cout<<"\n\n--------------------------------------Data Kendaraan--------------------------------------------\n";
	for(int j=0; j<n; j++){
		cout<<"Data Kendaraan "<<j+1<<endl;
		cout<<"No. Kendaraan\t\t: "<<x[j].noken<<endl;
		cout<<"Nama Pemilik\t\t: "<<x[j].nama<<endl;
		cout<<"Asal daerah Pemilik\t: "<<x[j].asal<<endl;
		cout<<"Merk\t\t\t: "<<x[j].merk<<endl;
		cout<<"Tahun Kendaraan\t\t: "<<x[j].thn<<endl;
	cout<<"--------------------------------------------------------------------------------------------\n\n";
	}
	return 0;
  }



//===================Soal 3===================
/*Nama	:Raja Josua SImanungkalit
  NIM 	:120140134
  Kelas	:IF C */
  
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
