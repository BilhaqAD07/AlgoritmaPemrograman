/* ==============================================
   NIM/Nama = 120140130 / Hilmanda Panji Orienski
   Nama File = P3_120140130_01.cpp
   Tanggal = 14-11-2020
   Deskripsi =
   ==============================================*/

#include <iostream>
using namespace std;

int main(){
	int N,M;

    cin>>N;
    cin>>M;

    for(int i=0;i<N;i++){

       if(i%M==0){
           cout<<i;
       }
    }

	return 0;
}  