#include<iostream>
using namespace std;
struct datbook{
    int isbn, hal;
    string judul, peng, pene;
};


int main(){
    datbook x;

    cout<<"Program Record Buku";
    cout<<"\nMasukan ISBN : ";cin>>x.isbn;
    cout<<"Masukan Judul Buku : ";cin>>x.judul;
    cout<<"Masukan Pengarang Buku : ";cin>>x.peng;
    cout<<"Masukan Jumlah Halaman Buku : ";cin>>x.hal;
    cout<<"Masukan Penerbit Buku : ";cin>>x.pene;
    cout<<endl;

    cout<<"\nISBN = "<<x.isbn;
    cout<<"\nJudul Buku = "<<x.judul;
    cout<<"\nPengarang Buku = "<<x.peng;
    cout<<"\nHalaman Buku = "<<x.hal;
    cout<<"\nPenerbit Buku = "<<x.pene;
}
