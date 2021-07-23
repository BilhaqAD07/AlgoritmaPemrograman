#include <iostream>
using namespace std;

int main(){
	int X;
	cin>>X;
	cin.ignore();
	string peserta[X];
	int total;
	int count=0;
	if(X<=0){
		cout<<"Error";
		exit(0);
	}
	
	for(int i=0;i<X;i++){
		cin>>peserta[i];
	}
	for(int i=0;i<X;i++){
		for(int j=i;j<X;j++){
			if(j>X-2){
				goto quit;
			}
			for(int k=j+1;k<X;k++){
				
				cout<<peserta[j]<<"-"<<peserta[k]<<endl;
				count++;
			}
		}
	}
	quit:
	total=count*3;
	
	cout<<"USD "<<total;
	
	return 0;
}