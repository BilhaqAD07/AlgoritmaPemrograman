#include<iostream>
using namespace std;


struct data{
	int nim,sks,KSM;
	string nama,matkul,index;
};
int main(){
	data mhs[10];
	for(int i=0;i<10;i++){
		cout<<"NIM          : ";cin>>mhs[i].nim;
        cin.ignore(256,'\n');
		cout<<"Nama         : ";getline(cin,mhs[i].nama);
		cout<<"Mata Kuliah  : ";getline(cin,mhs[i].matkul);
		cout<<"SKS          : ";cin>>mhs[i].sks;
		cout<<"Huruf Mutu   : ";cin>>mhs[i].index;
		if(mhs[i].index=="A"){
			cout<<"KSM : "<<mhs[i].sks*4<<endl;
		}else if(mhs[i].index=="AB"){
			cout<<"KSM : "<<mhs[i].sks*3.5<<endl;
		}else if(mhs[i].index=="B"){
			cout<<"KSM : "<<mhs[i].sks*3<<endl;
		}else if(mhs[i].index=="BC"){
			cout<<"KSM : "<<mhs[i].sks*2.5<<endl;
		}else if(mhs[i].index=="C"){
			cout<<"KSM : "<<mhs[i].sks*2<<endl;
		}else if(mhs[i].index=="D"){
			cout<<"KSM : "<<mhs[i].sks*1<<endl;
		}else{
			cout<<"0"<<endl;
		}
		cout<<endl;
	}
}