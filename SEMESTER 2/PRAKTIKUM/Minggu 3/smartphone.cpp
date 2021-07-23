#include <iostream>
using namespace std;

struct data {
    string merk, tipe;
    int ram,memo,cam, bat;
};

int main () {
    data hp;
    cin>>hp.merk;
    if (hp.merk=="Samsung") {
        cin>>hp.tipe;
        if (hp.tipe=="M10"||hp.tipe=="S20"||hp.tipe=="S10"||hp.tipe=="A01"||hp.tipe=="A02") {
            goto apakek;
        }
        else {
            cout<<"Error";
            exit(0);
        }
    }
    else if (hp.merk=="Iphone") {
        cin>>hp.tipe;
        if (hp.tipe=="Xs"||hp.tipe=="Xs"||hp.tipe=="6s"||hp.tipe=="7"||hp.tipe=="X") {
            goto apakek;
        }
        else {
            cout<<"Error";
            exit(0);
        }
    }
    apakek:
    
    
    cin>>hp.ram;
    if (hp.ram<=0) {
        cout<<"Error";
        exit(0);
    }

    cin>>hp.memo;
    if (hp.memo<=0) {
        cout<<"Error";
        exit(0);
    }

    cin>>hp.cam;
    if (hp.cam<=0) {
        cout<<"Error";
        exit(0);
    }

    cin>>hp.bat;
    if (hp.bat<=0) {
        cout<<"Error";
        exit(0);
    }

    cout<<"Handphone terbaru "<<hp.merk<<" "<<hp.tipe<<", dengan spesifikasi Ram "<<hp.ram<<" Gb, Storage "<<hp.memo<<" Gb, kamera "<<hp.cam<<" Mb, dan batrai "<<hp.bat<<" Mah."<<endl;

}