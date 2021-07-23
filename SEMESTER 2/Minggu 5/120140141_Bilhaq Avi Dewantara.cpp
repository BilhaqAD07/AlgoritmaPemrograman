/*
NAMA    : Bilhaq Avi Dewantara
NIM     : 120140141
KELAS   : RC
*/

//========================LATIHAN 1========================
#include <iostream>
using namespace std;

string size(double r,){
    const float phi=3.14;
    double Luas= phi*r*r;
    if(L>50)return "Besar";
    if(L>20)return "Sedang";
    return "Kecil";
}
int main()
{
    
    int n;
    cout << "Masukkan N buah lingkaran : "; cin >> n;
    double r[n];
    for(int i=1;i<=n;i++){
        cout << "Masukkan jari-jari Lingkaran ke-" << i << " : ";
        cin >> r[i];
    }
    
    for(int i=1;i<=n;i++){
    cout << size(r[i])<<endl;
    }
    return 0;
}

//========================LATIHAN 2========================
#include <iostream>
using namespace std;

struct data{
    int nim;
    float ipk;
    string nama;
};
int main()
{
    data z[10];
    int n, cek=0;
    cout << "Input banyak data N : ";cin >> n;
    for (int i=1;i<=n;i++){
        cout << "Data ke-" << i << endl;
        cout << "NIM        : ";cin >> z[i].nim;
        cin.ignore(256,'\n');
        cout << "Nama       : ";getline(cin,z[i].nama);
        cout << "IPK        : ";cin >> z[i].ipk;
        cout << endl;
    }
    cout << "Mahasiswa IPK dibawah 2, yaitu :"<<endl;
    for(int i=1;i<=n;i++){
        if(z[i].ipk<2.0){
            cek=1;
            cout <<"\t"<< z[i].nim << " - " << z[i].nama<<endl;
        }
    }
    if(cek==0){
        cout << "\tTIDAK ADA YA, HEHE" << endl;
    }
    cout << endl;
    return 0;
}

//========================LATIHAN 3========================
#include <iostream>
using namespace std;

struct toko{
    int kode;
    string nabar;
    float harga,berat;
};
int main()
{
    toko jaya[10];
    int x;
    int cek=0;
    cout << "Input banyak data barang = "; cin >> x;
    cout << endl;
    for(int i=1;i<=x;i++){
        cout << "Barang ke-"<<i<<endl;
        cout << "Kode barang    : ";cin >> jaya[i].kode;
        cin.ignore(256,'\n');
        cout << "Nama Barang    : ";getline(cin,jaya[i].nabar);
        cout << "Harga Barang   : Rp.";cin >> jaya[i].harga;
        cout << "Berat Barang   : ";cin >> jaya[i].berat;
        cout << endl;
    }
    cout << "Harga Barang di atas Rp.50000, yaitu :"<< endl;
    cek=0;
    for(int i=1;i<=x;i++){
        if(jaya[i].harga>50000){
            cek=1;
            cout <<"\t"<< jaya[i].nabar <<" -  Rp."<< jaya[i].harga << endl;
        }
        
    }
    if(cek==0){
        cout << "Tidak ada barang yang harganya lebih dari Rp.50000" << endl;
    }
    
    return 0;
}
