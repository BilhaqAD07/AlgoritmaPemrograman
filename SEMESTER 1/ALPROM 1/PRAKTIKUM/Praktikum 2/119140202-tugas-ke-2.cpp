#include <iostream>
using namespace std;

int fibo(int a){
	if (a==0||a==1){
		return a;
	}
	else{
		return (fibo(a-1)+fibo(a-2));
	}
}

int main(){
	
	int n,jml=0;

	cout<<"Batas Deret : ";cin>>n;
	for(int i=0; i<=n; i++){
		if(fibo(i)<=n){
			cout<<fibo(i)<<", ";
			jml = jml + fibo(i);
		}
	}
	cout<<"\nJumlah Nilai Deret : "<<jml;
}
