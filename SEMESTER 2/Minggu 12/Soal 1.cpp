#include <iostream>
using namespace std;

int main()
{
    string str ;
    char haha ;
    int h=0;
    cout<<"Masukkan kata : ";cin>>str;
    cout<<"Huruf yang ingin dicari : ";cin>>haha;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (haha ==  str[i])
        {
        ++h;
    }
}
	if(h>=1){
		cout<<"ditemukan dengan jumlah "<<h<<" karakter dalam kata";
	}else{
		cout<<"tidak ditemukan";
	}
}