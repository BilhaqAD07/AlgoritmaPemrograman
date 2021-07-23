#include <iostream>
using namespace std;

int main ()
{
cout << "--------------------------------KASUS 4------------------------------------"<< endl;
	cout << "Program Menentukan Jumlah Bilangan Ganjil atau Genap"<<endl<<endl;
int ganjil=0,genap=0,cek;
    int angka[5];


    for(int i=1;i<=5;i++){
       cout<<"Masukkan Angka "<<i<<" : "; cin>>angka[i];
    }

    for(int i=1;i<=5;i++){
        if(angka[i]%2==0){
            genap++;
            cek=0;
        }else if(angka[i]%2!=0){
            ganjil++;
            cek=1;
        }
        switch(cek){
            case 0:
                cout << angka[i] << " Merupakan Angka Genap"<< endl;
                break;
            case 1:
                cout << angka[i] << " Merupakan Angka Ganjil"<< endl;
                break;
        }
    }
	
	return 0;
}

