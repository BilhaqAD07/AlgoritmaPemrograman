//nama : hilmanda panji orienski
//NIM : 120140130
//kelas : RC

//============== nomor 1 ===========
#include <iostream>
using namespace std;

int main(){
    float fah, cel, kel, rea;
    int pilih;

    
    cout<<"====Konversi suhu Celsius ke"<<endl;
    cout<<"1. fahrenheit"<<endl;
    cout<<"2. reamur"<<endl;
    cout<<"3. kelvin"<<endl;
    cout<<"masukkan pilihan konversi = ";
    cin>>pilih;
    if(pilih>0 && pilih<4){
        cout<<"masukkan suhu dalam celsius = ";
        cin>>cel;
        switch(pilih){
            case 1:
                fah=((9/5)*cel)+32;
                cout<<cel<<" celsius = "<<fah<<" fahrenheit";
                break;
            case 2:
                rea=((4/9)*cel)-32;
                cout<<cel<<" celsius = "<<rea<<" reamur";
                break;
            case 3:
                kel=cel+273;
                cout<<cel<<" celsius = "<<kel<<" reamur";
                break;
            default :
                break;
        }

    }

    return 0;
}

//============== nomor 2 ===========
#include <iostream>
using namespace std;

int main(){
    int tes=3;
    string inpass;
    

    while(tes>0){
        cout<<"masukkan password = ";
        cin>>inpass;
        if(inpass=="ITERA"){
            cout<<"login berhasil";
            return 0;
        }else{
            tes--;
            cout<<"login gagal, kesempatan "<<tes<<" kali lagi";
        }
    }
    return 0;
}
//============== nomor 3 ===========
#include <iostream>
using namespace std;

int main(){
    
    int bil[5];
    for(int i=0;i<5;i++){
        cin>>bil[i];
    }

    for(int i=0;i<5;i++){
        if(bil[i]%2==0){
            cout<<"Bilangan "<<bil[i]<<" merupakan bilangan genap"<<endl;
        }else{
            cout<<"Bilangan "<<bil[i]<<" tidak termasuk bilangan genap"<<endl;
            return 0;
        }
    }
    return 0;
}

// ============== nomor 4 ===========
#include <iostream>
using namespace std;

int main(){
    int ganjil=0,genap=0;
    int bil[8];

    for(int i=0;i<8;i++){
        cin>>bil[i];
    }

    for(int i=0;i<8;i++){
        int cek=1;
        switch(cek){
            case 1:
                if(bil[i]%2==0){
                    genap++;
                }else
                    ganjil++;
                break;
        }
    }
    cout<<"Bilangan genap : "<<genap<<endl;;
    cout<<"Bilangan ganjil : "<<ganjil;

    return 0;
}
