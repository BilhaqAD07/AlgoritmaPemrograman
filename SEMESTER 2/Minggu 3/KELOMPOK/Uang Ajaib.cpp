#include <iostream>
using namespace std;

float bunga(float m){
    return m-(m*0.15);

}
float kali(float n){
    return n*2;
}

int main()
{
    string z="GAJAH TERBANG KELIATAN APANYA?";
    string p="NAMPAK KEREN";
    string q="NAMPAK PELIK";
    string d="SIAPAKAH PENEMU TELEPON?";
    string e="Alexander Graham Bell";
    string f="Louis Pasteur";
    int x, simpan,y;
    int jwb;
    cout << "\t===================================="<< endl;
    cout << "\t SELAMAT DATANG DI BANK UANG AJAIB"<< endl;
    cout << "\t===================================="<< endl<<endl;
    cout << "----------PAGI HARI----------"<<endl;
    cout << "Masukkan Uang yang akan ditabung = "<<"Rp."; cin >> x;
    cout << endl;
    cout << "Uang Anda dikenakan biaya administrasi sebesar 15%"<< endl<<endl;
    simpan=bunga(x);
    ulang:
    cout << "----------SIANG HARI---------"<<endl;
    cout << "Jawablah kuis berikut ini, apabila benar maka gratis biaya admin"<< endl;
    cout<<z<< endl;
    cout<<"1. "<<p<< endl;
    cout<<"2. "<<q<< endl;
    cout <<"Jawaban Anda(1/2) = "; cin >> y;
    cout << endl;
    switch(y){
        case 1:
        cout << "MAAF JAWABAN ANDA SALAH"<< endl<<endl;
        cout << "----------MALAM HARI---------"<<endl;
        cout << "Berikut ada kuis kedua, apabila benar tabungan akan digandakan dan apabila kalah tabungan akan hangus"<<endl;
        cout <<d<<endl;
        cout <<"1. "<<e<<endl;
        cout <<"2. "<<f<<endl;
        cout <<"Jawaban Anda(1/2) = "; cin >> jwb;
        cout << endl;
        if(jwb==1){
            cout <<"\tSELAMAT UANG ANDA DIGANDAKAN"<<endl;
            cout <<"\tUang Anda = "<<"Rp. "<<simpan<<endl;
        }else{
            cout <<"\tMAAF JAWABAN MASIH SALAH"<< endl;
            cout <<"\tUang Anda = "<<"Rp.0"<<endl;
        }
        break;
        case 2:
        cout << "YEY KAMU BENAR, GRATIS BIAYA ADMIN"<< endl<<endl;
        cout << "----------MALAM HARI---------"<<endl;
        cout << "Berikut ada kuis kedua, apabila benar tabungan akan digandakan dan apabila kalah tabungan akan hangus"<<endl;
        cout <<d<<endl;
        cout <<"1. "<<e<<endl;
        cout <<"2. "<<f<<endl;
        cout <<"Jawaban Anda(1/2) = "; cin >> jwb;
        cout << endl;
        if(jwb==1){
            cout <<"\tSELAMAT UANG ANDA DIGANDAKAN"<<endl;
            cout <<"\tUang Anda = "<<"Rp. "<<kali(x)<<endl;
        }else{
            cout <<"\tMAAF ANDA JAWABAN SALAH"<< endl;
            cout <<"\tUang Anda = "<<"Rp.0"<<endl;
        }
        break;
        default:
            cout << "KESALAHAN, SILAHKAN COBA LAGI"<< endl;
            goto ulang;
    }
    cout <<"-----------------------------------------"<<endl;
    system("pause");
    return 0;
}
