//Bilhaq Avi Dewantara
//120140141
//RC

//==============================LATIHAN 1==============================

#include <iostream>
using namespace std;

int main()
{
    int N=10;
    float input;
    for(int i=1;i<=N;i++){
        float input[i];
        cout << "Angka ke-"<< i << " : "; cin >> input[i];
    }
    for(int i=1;i<=N;i++){
    float input[i];
    if(input[i]==10){
        cout << input[i] << " Adalah Sepuluh";
    }else {
        cout << input[i] << " Bukan Sepuluh";
    }
    cout << endl;
    }
    return 0;
}

//==============================LATIHAN 2==============================
#include <iostream>
using namespace std;



    struct data{
        int tahun;
        string nama, asal, merk, nok;
    };
    int main(){
        data b[10];
        int N;
        cout << "Input banyak data N :  "; cin >> N;
        for(int i=1;i<=N;i++){
            cout << "Data ke-" << i << endl;
            cout << "No. Kendaraan       : "; getline(cin,b[i].nok);
            cin.ignore(256,'\n');
            cout << "Nama Pemilik        : "; getline(cin,b[i].nama);
            cout << "Asal Daerah Pemilik : "; getline(cin,b[i].asal);
            cout << "Merk Kendaraan      : "; getline(cin,b[i].merk);
            cout << "Tahun Keluaran      : "; cin >> b[i].tahun;
            cout << endl;
        }
        cout << "DATA Kendaraan dari keluaran 2010 dan asal Kab. Tulang Bawang, yaitu :" << endl;
        for(int i=1;i<=N;i++){
            if(b[i].tahun>=2010 && b[i].asal=="Kab. Tulang Bawang"){
                cout << b[i].nok<< " - "<<b[i].nama << " dengan mobil " << b[i].merk<<endl; 
            }
        }

    
    return 0;
}

//==============================LATIHAN 3==============================
#include <iostream>
using namespace std;

int main(){
    
    int x, code, pinjam;
    string nama;
    cout<<"perpustakaan kecil-kecilan"<<endl;
    cout<<" masukkan jumlah inputan = "; cin>>n;
    
    for(int i=0; i<x; i++){
        
        cout<<" Nama penyewa buku = "; cin>>nama;
        cout<<" Kode buku = "; cin>>code;
        cout<<" Banyak pinjaman = "; cin>>pinjam;
    }
    
    int tarifsewa1=