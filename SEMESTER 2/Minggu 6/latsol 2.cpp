#include<iostream>
  using namespace std;
  struct kendaraan{
  	int thn;
	string nama,asal,merk,noken;
  };
  int main(){
  	int n,b;
  	cout<<"Berapa Kendaraan : ";
	cin>>n;
	kendaraan x[n];
	
	//input data
  	for(int i=0; i<n; i++){
        cin.ignore(256,'\n');
  		cout<<"Kendaraan Ke-"<<i+1<<endl;
  		cout<<"No. Kendaraan\t\t: "; getline(cin,x[i].noken);
  		cin.ignore(256,'\n');
  		cout<<"Nama Pemilik\t\t: "; getline(cin,x[i].nama);
		cout<<"Asal daerah Pemilik\t: "; getline(cin,x[i].asal);
	  	cout<<"Merk\t\t\t: "; getline(cin,x[i].merk);
	  	cout<<"Tahun Kendaraan\t\t: ";cin>>x[i].thn;
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