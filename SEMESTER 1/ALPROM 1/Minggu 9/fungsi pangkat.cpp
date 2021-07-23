/* ===================
   | Nama = BilhaqAD  |
   | NIM = 120140141  |
   ===================*/
   
#include <iostream>
#include <conio.h>

using namespace std;

int pangkat(int a, int b){
	int hasil=a;
	for(int i=2;i<=b;i++){
			hasil*=a;
		}
	return hasil;
	}


int main()
{ 

	int x,y;
	cout<<"bilangan bulat x = ";cin>>x;
	cout<<"bilangan bulat y = ";cin>>y;
	cout<<pangkat(x,2)+pangkat(y,3)<<endl;

getch();
}

