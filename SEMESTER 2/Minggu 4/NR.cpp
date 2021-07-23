#include<iostream>
#include<iomanip>
using namespace std;
struct data{
	int nim,sks,KSM;
	string nama,matkul,index;
};
int main(){
	data mhs[10];
	int cari,ketemu,n;
	float NR=0;
	cout << "Masukkan banyak data	: ";cin>>n;
	system("cls");
	for(int i=0;i<n;i++){
		cout<<"NIM          : ";cin>>mhs[i].nim;
        cin.ignore(256,'\n');
		cout<<"Nama         : ";getline(cin,mhs[i].nama);
		cout<<"Mata Kuliah  : ";getline(cin,mhs[i].matkul);
		cout<<"SKS          : ";cin>>mhs[i].sks;
		cout<<"Huruf Mutu   : ";cin>>mhs[i].index;
		if(mhs[i].index=="A"){
			mhs[i].KSM=mhs[i].sks*4;
			cout<<"KSM : "<<mhs[i].KSM<<endl;
		}else if(mhs[i].index=="AB"){
			mhs[i].KSM=mhs[i].sks*3.5;
			cout<<"KSM : "<<mhs[i].KSM<<endl;
		}else if(mhs[i].index=="B"){
			mhs[i].KSM=mhs[i].sks*3;
			cout<<"KSM : "<<mhs[i].KSM<<endl;
		}else if(mhs[i].index=="BC"){
			mhs[i].KSM=mhs[i].sks*2.5;
			cout<<"KSM : "<<mhs[i].KSM<<endl;
		}else if(mhs[i].index=="C"){
			mhs[i].KSM=mhs[i].sks*2;
			cout<<"KSM : "<<mhs[i].KSM<<endl;
		}else if(mhs[i].index=="D"){
			mhs[i].KSM=mhs[i].sks*1;
			cout<<"KSM : "<<mhs[i].KSM<<endl;
		}else{
			cout<<"0"<<endl;
		}
cout<<"Nilai Rata-rata adalah : "<<mhs[i].KSM/mhs[i].sks<<endl;
		
	}
	cout << setw(55)<<right<<"DATA NILAI MAHASISWA"<<endl;
    cout << "-------------------------------------------------------------------------------------------"<< endl;
    cout << setw(8)<<left<<"|"<<setw(10)<<left<<"NIM"<<"|"<<setw(12)<<right<<"NAMA"<<setw(10)<<right<<"|";
    cout << setw(22)<<right<<"NAMA MATA KULIAH"<<setw(7)<<right<<"|"<<setw(5)<<right<<"SKS"<<setw(3)<<right<<"|";
    cout << setw(11)<<right<<"HURUF MUTU"<<setw(2)<<right<<"|"<< endl;
    cout << "-------------------------------------------------------------------------------------------"<< endl;
    
    for (int i=0;i<n;i++)
    {
        cout << setw(5)<<left<<"|"<<setw(13)<<left<<mhs[i].nim<<"|"<<setw(21)<<left<<mhs[i].nama<<"|";
        cout << setw(28)<<left<<mhs[i].matkul<<"|"<<setw(4)<<right<<mhs[i].sks<<setw(4)<<right<<"|";
        cout << setw(7)<<right<<mhs[i].index<<setw(6)<<right<<"|"<<endl;
        cout << "-------------------------------------------------------------------------------------------"<<endl;
    }

	cout<<"Inputkan bilangan yang ingin dicari : ";cin>>cari;
	ketemu=0;
	int totalksm=0;
	int totalsks=0;
	string mhshsl;
	for(int i=0;i<n;i++){
		if(mhs[i].nim==cari){
			ketemu=1;
			totalksm=totalksm+mhs[i].KSM;
			totalsks=totalsks+mhs[i].sks;
			NR=totalksm/totalsks;
			mhshsl=mhs[i].nama;
			cout<<"Data ditemukan pada index ke "<<i+1<<endl;
			cout<<"NIM tersebut adalah milik "<<mhshsl<< " dengan NR adalah "<<NR<<endl;
		}
	}
	if(ketemu==0){
		cout<<"Data tidak ditemukan "<<endl;
	}
	}