/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P4_120140141_
Tanggal		: 18 November 2020
Deskripsi	:
============================================
*/

#include <iostream>
using namespace std;
int main()
{
    
     //how to calculate factorial using for loop
     // maybe
     
     int s=1;
     int a;
     cin>>a; 
        
        for (int i=1; i<=a; i++){
            cout <<i<<" ";
        }
        cout<<endl;
        
        for (int i=1; i<=a; i++){
         s=s*i;
     }
     
     cout<<s;
}
