#include <iostream>
#include <iomanip>
using namespace std;

struct mhs{
    int nim, sks,ksm;
    string nama, matkul,hrf;
};

int main()
{
    mhs data[10];
    int input,cek,nim;
    int totksm=0;
    int totsks=0;
    string maba;
    cout << "Input banyak data N : "; cin >> input;
    system("cls");
    for (int i = 1; i <= input; i++)
    {
        cout << "Data Ke-" <<i<<endl;
        cout << "NIM"<<setw(12)<<right<<": "; cin >> data[i].nim;
        cin.ignore(256,'\n');
        cout << "Nama"<<setw(11)<<right<<": "; getline(cin,data[i].nama);
        cout << "MatKul"<<setw(9)<<right<<": "; getline(cin,data[i].matkul);
        cout << "Jumlah SKS"<<setw(5)<<right<<": "; cin >> data[i].sks;
        cout << "Huruf Mutu"<<setw(5)<<right<<": "; cin >> data[i].hrf;
        if(data[i].hrf=="A"||data[i].hrf=="a"){
            data[i].ksm=data[i].sks*4;
            cout <<"KSM"<<setw(12)<<right<<": "<<data[i].ksm<<endl;
        }else if(data[i].hrf=="AB"||data[i].hrf=="ab"){
            data[i].ksm=data[i].sks*3.5;
            cout <<"KSM"<<setw(12)<<right<<": "<<data[i].ksm<<endl;
        }else if(data[i].hrf=="B"||data[i].hrf=="b"){
            data[i].ksm=data[i].sks*3;
            cout <<"KSM"<<setw(12)<<right<<": "<<data[i].ksm<<endl;
        }else if(data[i].hrf=="BC"||data[i].hrf=="bc"){
            data[i].ksm=data[i].sks*2.5;
            cout <<"KSM"<<setw(12)<<right<<": "<<data[i].ksm<<endl;
        }else if(data[i].hrf=="C"||data[i].hrf=="c"){
            data[i].ksm=data[i].sks*2;
            cout <<"KSM"<<setw(12)<<right<<": "<<data[i].ksm<<endl;
        }else if(data[i].hrf=="D"||data[i].hrf=="d"){
            data[i].ksm=data[i].sks*1;
            cout <<"KSM"<<setw(12)<<right<<": "<<data[i].ksm<<endl;
        }else if(data[i].hrf=="E"||data[i].hrf=="e"){
            data[i].ksm=data[i].sks*0;
            cout <<"KSM"<<setw(12)<<right<<": "<<data[i].ksm<<endl;
        }else{
            cout << "Error" <<endl;
            exit(0);
        }
    }
    cout << endl;

    cout << setw(60)<<right<<"DATA NILAI MAHASISWA"<<endl;
    cout << "---------------------------------------------------------------------------------------------------"<< endl;
    cout << setw(8)<<left<<"|"<<setw(10)<<left<<"NIM"<<"|"<<setw(12)<<right<<"NAMA"<<setw(10)<<right<<"|";
    cout << setw(22)<<right<<"NAMA MATA KULIAH"<<setw(7)<<right<<"|"<<setw(5)<<right<<"SKS"<<setw(3)<<right<<"|";
    cout << setw(11)<<right<<"HURUF MUTU"<<setw(2)<<right<<"|"<<setw(5)<<right<<"KSM"<<setw(3)<<right<<"|"<<endl; 
    cout << "---------------------------------------------------------------------------------------------------"<< endl;
    
    for (int i = 1; i <= input; i++)
    {
        cout << setw(5)<<left<<"|"<<setw(13)<<left<<data[i].nim<<"|"<<setw(21)<<left<<data[i].nama<<"|";
        cout << setw(28)<<left<<data[i].matkul<<"|"<<setw(4)<<right<<data[i].sks<<setw(4)<<right<<"|";
        cout << setw(7)<<right<<data[i].hrf<<setw(6)<<right<<"|"<<setw(4)<<right<<data[i].ksm<<setw(4)<<right<<"|"<<endl;
        cout << "---------------------------------------------------------------------------------------------------"<<endl;
    }
    float nrata;
    cout << "Cari NIM"<<setw(7)<<right<<": ";cin>>nim;
    cek=0;
    cout << endl;
    for (int i = 1; i <= input; i++)
    {
        if(data[i].nim==nim){
            cek=1;
            totksm=data[i].ksm+totksm;
            totsks=data[i].sks+totsks;
            nrata=totksm/totsks;
            maba=data[i].nama;
            cout << "NIM ditemukan atas nama "<<maba<< " dengan NR = "<<nrata<< endl;
        }
    }
    if(cek==0){
		cout<<"Tidak ada data!"<<endl;
        exit(0);
    }
}
