#include <iostream>
using namespace std;
int main (){
	int bil[10];
	for(int i=0;i<10;i++){
		cout<<"masukan angka :";
		cin>>bil[i];
	}
	for(int i=0;i<10;i++){
		if (bil[i]==0||bil[i]==1){
			cout<<"$";
		}
		else if(bil[i]==5){
			cout<<"#";
		}
		else{
			cout<<bil[i];
		
		}
		
		}
		return 0;
	}
	
