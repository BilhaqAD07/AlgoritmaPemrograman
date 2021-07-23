#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    system("cls");
    float n,k,f,r;
    char konversi;
    main:
cout << "--------------------------------KASUS 1------------------------------------"<< endl;
    cout << "Masukkan Nilai(Celcius) = "; cin >> n;
    cout << "Dikonversi ke-(F/K/R) = "; cin >> konversi;
    cout << endl;

    switch (konversi)
    {
    case 'K':
    k=(n+273);
        cout << k;
        break;
    case 'F':
    f=((n*9/5)+32);
        cout << f;
        break;
    case 'R':
    r=((n*9/5)+32);
        cout << r;
        break;
    default:
        cout << "Input Konversi Salah, Silakan coba lagi";
        main:
    }
}

int main1()
{
	cout << "--------------------------------KASUS 2------------------------------------\n\n";
	string pass_input, user_input;
	ulang:
	cout << "\t--------LOGIN--------\n\n";
	string password ="ITERA";
	int i=1;
	string login ="block";
	
do {        
       cout << "Username = "; cin>>user_input;        
       cout << "Password = "; cin>>pass_input;        
       if (pass_input == password) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;                                 
           cout << " ================\n\n";      
           i = 4;
           login = "berhasil";        } 
       else {            
           cout << "\n===========================\n";            
           cout << "Password Salah! Sudah ("<<i<<") Kali\n";
		   cout << "=============================\n\n";            
           i = i +1;
       }   
    } while (i <= 3);
	
    if(login != "berhasil"){
       cout<<"Anda telah 3x salah login.\n";       
       cout<<"Silahkan coba 40218 Hari lagi. Terima Kasih..\n\n";      
	}   
}


int main2(){
	cout << "--------------------------------KASUS 3------------------------------------\n\n";
	int n=5,bilangan, Hasil;
	for(int i=1; i<=n; i++){
		cout<<"Masukkan Bilangan ke "<<i<<" = " ; cin>>bilangan;
		Hasil=bilangan%2;
		
	if(Hasil==0){
			cout<<"Bilangan "<<bilangan<<" merupakan bilangan genap\n" <<endl;
		}else if(Hasil==1){
			cout<<"Bilangan "<<bilangan<<" tidak termasuk bilangan genap\n" <<endl;
			return 0;
		}
	}
}


int main3()
{
cout << "--------------------------------KASUS 4------------------------------------"<< endl;
	cout << "Program Menentukan Jumlah Bilangan Ganjil atau Genap"<<endl<<endl;
int ganjil=0,genap=0;
    int angka[8];


    for(int i=1;i<=8;i++){
       cout<<"Masukkan Angka "<<i<<" : "; cin>>angka[i];
    }

    for(int i=1;i<=8;i++){
        int p=1;
        switch(p){
            case 1:
                if(angka[i]%2==0){
                    genap++;
                }else
                    ganjil++;
                break;
        }
    }
	cout<<"Jumlah Bilangan Genap : "<<genap<<"\n";
	cout<<"Jumlah Bilangan Ganjil : "<<ganjil;
	return 0;
}
