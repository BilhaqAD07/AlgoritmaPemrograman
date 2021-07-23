// Nama		  : Raja Josua Simanungkalit
// NIM		  : 120140134
// Nama file  : P1_120140134_01
// Tanggal    : 14 November 2020
// Deskripsi  :

#include <bits/stdc++.h>
using namespace std;
int main()
{
   string nama[10],jkel[10],ttl[10],alamat[10],pendidikanakhir[10],temp[10],temp1[10],temp3[10],temp4[10],umur[10];
   int jamlembur[10],jlhanak[10],jumlah;
   int gajisenior,gajijunior;
   string kawin[10],status1[10],status3[10];
   int status2[10],status4[10],tunjanak1[10],tunjanak2[10],tunjistri1[10],tunjistri2[10],jamlembur1;
   
   cout<<"Masukan Jumlah Karyawan  : ";
   cin>>jumlah;
   cout<<endl;
	
   for (int i=1; i<=jumlah; i++){
        cout<<"KARYAWAN KE-"<<i<<endl;
	
	getline(cin,temp[i]);
	cout<<"\n\n";
	cout<<"Masukan Nama     	        	 : ";
	getline(cin,nama[i]);
	cout<<"Masukan Jenis Kelamin 	    		 : ";
	getline(cin,jkel[i]);
	cout<<"Masukan Umur			   	 : ";
	getline(cin,umur[i]);
	cout<<"Masukan Pendidikan Terakhir 		 : ";
	cin>>pendidikanakhir[i];
	getline(cin,temp3[i]);
	cout<<"Masukan Tempat Tanggal Lahir		 : ";
	getline(cin,ttl[i]);
	cout<<"Masukkan Alamat				 : ";
	getline(cin,alamat[i]);
	cout<<"Masukkan Jumlah Anak			 : ";
	cin>>jlhanak[i];
	getline(cin,temp4[i]);
	cout<<"status Perkawinan			 : ";
	cin>>kawin[i];
	cout<<"Masukkan JUmlah Jam Lembur(jam)	 	 : ";
	cin>>jamlembur[i];
}

	cout<<"\n\n\n";
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
		cout<<endl;
	for (int i=1;i<=jumlah;i++){
		
		cout<<"     KARYAWAN KE-"<<i<<endl;
		cout<<"Nama                		 	: "<<nama[i]<<endl;
		cout<<"Jenis Kelamin        			: "<<jkel[i]<<endl;		
		cout<<"Umur			     		: "<<umur[i]<<endl;
		cout<<"Pendidikan Terakhir  			: "<<pendidikanakhir[i]<<endl;
		cout<<"Tempat Tanggal Lahir 			: "<<ttl[i]<<endl;
		cout<<"Alamat      	        		: "<<alamat[i]<<endl;
		cout<<"Jumlah Anak		    		: "<<jlhanak[i]<<endl;
		cout<<"status Perkawinan			: "<<kawin[i]<<endl;
		cout<<"Jumlah Jam Lembur			: "<<jamlembur[i]<<endl;	
		cout<<endl<<endl;	
	}
	
	cout<<"\n\n\n";
	cout<<"PENGHITUNGAN GAJI "<<endl;
	cout<<endl;
	for (int i=1;i<=jumlah;i++){
		
		cout<<"     KARYAWAN KE-"<<i<<endl;
		
	if(umur[i]<="25"){
		status1[i]="Junior Office";
		status2[i]=1800000;
	}
	else{
		status1[i]="Senior Office";
		status2[i]=2500000;
	}
	
	
	if(jlhanak[i]>=1&&jlhanak[i]<=5){
			tunjanak1[i]=jlhanak[i]*200000;
	}
	else if(jlhanak[i]>5){
			tunjanak1[i]=0;
	}
	
	if(kawin[i]=="kawin"){
		tunjistri1[i]=500000;
	}
	else if(kawin[i]=="belum"){
		tunjistri1[i]=0;
	}
	
	if(jamlembur[i]<=50){
		jamlembur1=jamlembur[i]*50000;
	}
	else if(jamlembur[i]>50){
		jamlembur1=50*50000;
	}
	
	cout <<"Jabatan = "<<status1[i]<<endl;
	cout <<"Lama Lembur(Jam) = "<<jamlembur[i]<<endl;
	cout <<"Total Tunjangan = "<<tunjanak1[i]+tunjistri1[i]<<endl;
	cout <<"Bonus Lembur = "<<jamlembur1<<endl;
	cout <<"Total gaji 1 Bulan = "<<status2[i]+tunjanak1[i]+tunjistri1[i]+jamlembur1<<endl;
	cout <<"Total Gaji 1 Tahun = "<<(status2[i]+tunjanak1[i]+tunjistri1[i]+jamlembur1)*12<<endl;
}	
	return 0;
}
