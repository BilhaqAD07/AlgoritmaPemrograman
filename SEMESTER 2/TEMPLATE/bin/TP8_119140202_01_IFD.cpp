#include <iostream>
using namespace std;
	int main(){
	int n;
	cin>>n;
	int bil[n];
	int jumlah=0;
	for(int i=n-1;i>=0;i--){
		cout<<"masukan angka:";
		cin>>bil[i];
		if(i%2==0){
			bil[i]=bil[i]*-1;
		}
		jumlah=jumlah+bil[i];
	}	
	for(int i=0;i<n;i++){
		if(i%2!=0){
			cout<<"+"<<bil[i];
		} else{
			cout<<bil[i];
		}

	}	
		cout<<endl;
	cout<<"="<<jumlah;
return 0;
}
