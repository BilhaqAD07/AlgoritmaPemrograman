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
        cout << "\tTidak ada barang yang harganya lebih dari Rp.50000" << endl;
    }
    
    return 0;
}
