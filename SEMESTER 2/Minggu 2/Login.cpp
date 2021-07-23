#include <iostream>
using namespace std;

int main ()
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
           cout << "Username / Password Salah! Sudah ("<<i<<") Kali\n";
		   cout << "=============================\n\n";            
           i = i +1;
       }   
    } while (i <= 3);
	
    if(login != "berhasil"){
       cout<<"Anda telah 3x salah login.\n";       
       cout<<"Silahkan coba 40218 Hari lagi. Terima Kasih..\n\n";      
	}   
}


