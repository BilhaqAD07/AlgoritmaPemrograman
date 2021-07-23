#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Masukkan batasan a : ";cin>>a;
	cout<<"Masukkan batasan b : ";cin>>b;
	int rara[10][10];
	int riri[10][10],hasil[10][10];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>rara[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>riri[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			hasil[i][j]=rara[i][j]+riri[i][j];
			cout<<hasil[i][j]<<" ";
		}
		cout << endl;
	}
	
}