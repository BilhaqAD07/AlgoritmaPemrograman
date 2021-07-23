#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"bilangan yang ingin diulang : ";cin>>n;
	int bil, hasil[n];
	
	for(int i=0; i<n; i++){
		cout<<"\nbilangan faktorial yang dihitung : ";cin>>bil;
		cout<<bil<<"! = ";
		
		for(int k=bil; k>=1; k--){
			cout<<k;
			if(k!=1){
				cout<<" x ";
			}
		}
		hasil[i]=1;
		for(int j=bil; j>0; j--){
				hasil[i]*=j;
		}
		cout<<" = "<<hasil[i];
	}	
	
}