#include<iostream>
using namespace std;

void out(bool x){
	if(x==true){
		cout<<"Palindrom" << endl;
	}else{
		cout<<"Tidak Palindrom"<< endl;
	}
}

int main(){
	int x;
	cin>>x;
	if(x<=0){
		cout<<"Error";
		exit(0);
	}
	string kata[n];
	string *pkata=kata;
	for(int i=0;i<x;i++){
		cin>>*(pkata+i);
	}
	bool cek=1;
	for(int i=0;i<x;i++){
		string z=kata[i];
		for(int j=0;j<z.length()/2;j++){
			if(z[j]!=z[z.length()-j-1]){
				cek=0;
			}
		}
		out(cek);
	}
	return 0;
}