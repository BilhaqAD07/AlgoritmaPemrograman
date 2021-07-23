#include<iostream>
using namespace std;
int main()
{
    system("cls");
	int y,a,i=0,j=0,hasil=1;
	cout<<"Masukkan Dimensi="<<endl;
	cin>>y;
	cin>>a;
	cout<<endl;
	
	int d[y][a];
	for(i=0;i<y;i++){
		for(j=0;j<a;j++){
			d[i][j]=hasil;
			hasil++;
		}
	}
	for(i=0;i<y;i++){
		for(j=0;j<a;j++){
			cout<<d[i][j] <<" ";
		}
        cout<<endl;
	}
}