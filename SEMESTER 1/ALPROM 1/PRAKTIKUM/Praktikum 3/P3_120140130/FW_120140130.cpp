/* ==============================================
   NIM/Nama = 120140130 / Hilmanda Panji Orienski
   Nama File = P3_120140130_02.cpp
   Tanggal = 14-11-2020
   Deskripsi =
   ==============================================*/

#include <iostream>
using namespace std;

int main(){
    
    string kata;
	
    cin>>kata;
    while(kata!="anjay" && kata!="selesai"){
        cin>>kata;

    }
    if(kata=="anjay"){
        cout<<"Anda mengucapkan kata terlarang"<<endl;
    }else if(kata=="selesai"){
        cout<<"Anda tidak mengucapkan kata terlarang"<<endl;
    }

	return 0;
}