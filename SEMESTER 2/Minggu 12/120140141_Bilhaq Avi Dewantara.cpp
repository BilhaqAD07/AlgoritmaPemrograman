//Bilhaq Avi Dewantara
//120140141
//RC

//==============================SOAL 1==============================
#include <iostream>
using namespace std;

int main()
{
    string kata ;
    char cekhrf ;
    int h=0, i=0;
    cout<<"Input kata bebas         : ";cin>>kata;
    cout<<"Cek huruf yang dicari    : ";cin>>cekhrf;

    do{
        if(cekhrf == kata[i]){
            ++h;
        }
        i++;
    }while(kata[i]!='\0');

    cout << endl;
	if(h>=1){
		cout<<"Huruf ditemukan, jumlahnya ada "<< h <<" karakter dalam kata";
	}else{
		cout<<"Maaf, huruf tidak ditemukan";
	}
    cout << endl;
    return 0;
}
//==============================SOAL 2==============================
#include <iostream>
#include <string>
  
using namespace std;
  
bool find(string klmt, string kata)
{
    bool flag = false;
    int index = 0, i, help = 0;
    for (i = 0; i < klmt.size(); i++)
    {
        if (kata.at(index) == klmt.at(i))
        {
            if (flag == false)
            {
                flag = true;
                help = i;
            }
            index++;
        }
        else
        {
            flag = false;
            index = 0;
        }
        if (index == kata.size())
        {
            break;
        }
    }
    if ((i+1-help) == index)
    {
        return true;
        
    }
    return false;
    
}

int main(){
    string x;
    cout << "Input Kalimat terserah kamu : "; getline(cin, x);
    string kata;
    cout <<"''"<< x <<"''"<< endl;
    cout << "Kata yang ingin dicari : "; cin >>kata;
    int binari = find(x, kata);
    cout << endl;
   (binari==false)? cout << "Yah gada bro/sis"
                  : cout << "Asik ada katanya bro/sis";
    cout << endl;
    
    return 0;
}
//==============================SOAL 3==============================
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
//==============================SOAL 4==============================
#include <ctype.h>
#include <iostream>
using namespace std;


int main(){
    char kata;
    int vokal = 0, konsonan = 0;
    int space = 0, numerik = 0;
    cout << "Input kata : ";
    while((kata = getchar())!='\n')
    {
        konsonan++;
        if(toupper(kata) == 'A' || toupper(kata) == 'I' || toupper(kata) == 'U' || toupper(kata) == 'E' || toupper(kata) == 'O')
            vokal++;
        if(kata == ' ')
            space++;
        if(kata >= '0' && kata <= '9')
            numerik++;
    }
    konsonan -= (space + numerik + vokal);
    cout << "\tHasil :" << endl;
    cout << "\tVokal    : " << vokal << endl;
    cout << "\tKonsonan : " << konsonan << endl;
    cout << "\tNumerik  : " << numerik << endl;

    return 0;
}