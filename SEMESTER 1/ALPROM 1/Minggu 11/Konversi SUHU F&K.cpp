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



int kasus2(){
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
           cout << " \n\n";                     
           cout << " ================\n\n";      
           i = 4;
           login = "berhasil";        } 
       else {            
           cout << "\n===========================\n";            
           cout << "Username / Password Salah! ("<<i<<"x)\n";
		   cout << "=============================\n\n";            
           i = i +1;
       }   
    } while (i <= 2);
	
    if(login != "berhasil"){
       cout<<"Anda telah 3x salah login.\n";       
       cout<<"Silahkan coba 40218 Hari lagi. Terima Kasih..\n\n";      
	}   
}

int main1(){
cout << "--------------------------------KASUS 3------------------------------------\n\n";	
int input i=5;
cout <<"Input :";cin >> input;

for
}

