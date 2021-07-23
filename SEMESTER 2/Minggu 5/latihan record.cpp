#include <iostream>
using namespace std;

struct karya{
    long isbn;
    string jdl, pengarang, pt;
    int hal;
};

int main()
{
    karya buku;
    cout << "\t===============================================" << endl;
    cout << "\t                    DATA BUKU" << endl;
    cout << "\t===============================================" << endl;
    cin.ignore(256,'\n');
    cout << "Input Judul Buku       : ";getline(cin,buku.jdl);
    cout << "Input nomor ISBN       : ";cin >> buku.isbn;
    cin.ignore(256,'\n');
    cout << "Input nama pengarang   : ";getline(cin,buku.pengarang);
    cout << "Input nama Penerbit    : ";getline(cin,buku.pt);
    cout << "Input jumlah halaman   : ";cin >> buku.hal;
    cout << endl;
    cout << "Buku ini berjudul " <<buku.jdl <<" dengan nomor ISBN "<<buku.isbn<< endl;
    cout << "Pengarang buku ini "<<buku.pengarang<< " yang telah diterbitkan oleh "<<buku.pt<< " setebal "<<buku.hal<<" halaman."<<endl;
    
    cout << "\t===============================================" << endl;
    cout << "\t                    SELESAi" << endl;
    cout << "\t===============================================" << endl;
    
    
    return 0;
}
