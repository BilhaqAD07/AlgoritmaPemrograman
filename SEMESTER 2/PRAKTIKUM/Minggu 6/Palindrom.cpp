#include<iostream>
using namespace std;

void print(bool n){
	if(n==true){
		cout<<"Palindrom"<<endl;
	}else{
		cout<<"Tidak Palindrom"<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	
	if(n<=0){
		cout<<"Error";
		exit(0);
	}
	
	string arr[n];
	string *parr=arr;

	for(int i=0;i<n;i++){
		cin>>*(parr+i);
	}
	bool cek=1;
	for(int i=0;i<n;i++){
		string a=arr[i];
		for(int j=0;j<a.length()/2;j++){
			if(a[j]!=a[a.length()-j-1]){
				cek=0;
			}
		}
		print(cek);
	}
	
	return 0;
}