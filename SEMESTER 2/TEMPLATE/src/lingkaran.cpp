#include <iostream>
using namespace std;

int main()
{    
    int x,p;
    int i=0,j=0,k=0;

    cout << "Masukkan Angka => "; cin >> p;
    if(p>=4){
        x=p-2;
    } else
        x=p;
    for(i=0;i<x;i++){
        for(j=x;j>i;j--){
            cout << " ";
        }
        for(k=1;k<=2*i;k++){
            cout << "*";
        }
        cout << endl;
    }
   for(i=x;i>=1;i--){
       for(j=i;j<=x;j++){
           cout << " ";
       }
       for(k=2*i-1;k>=2;k--){
           cout <<"*";
       }
       cout << endl;
   }
   cout << "\t ***"<< endl;
   cout << "\t*****"<< endl;
   cout << "\t*****"<< endl;
   cout << "\t ***"<< endl;
   
    system("pause");
    return 0;
}
