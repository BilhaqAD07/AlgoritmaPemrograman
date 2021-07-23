#include <iostream>
#include <cstring>
using namespace std;
int main()
{
      int vokal=0, konsonan=0, x;
      char kalimat[50];
      cout<<"Masukkan kalimat : ";cin.getline(kalimat,50);
      x=strlen(kalimat);
      for(int i=0; i<x ;i++){
            if(kalimat[i]=='a'|| kalimat[i]=='i' || kalimat[i]=='u' || kalimat[i]=='e' || kalimat[i]=='o')
            vokal++;
            else
            konsonan++;
      } 
      cout<<"Huruf Vokal     : "<< vokal <<" huruf"<< endl;
      cout<<"Huruf Konsonan  : "<< konsonan <<" huruf"<< endl;

      return 0;
}