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
    int input;
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
        cout << endl;
    }
    cout << endl;

    cout << setw(55)<<right<<"DATA NILAI MAHASISWA"<<endl;
    cout << "-------------------------------------------------------------------------------------------"<< endl;
    cout << setw(8)<<left<<"|"<<setw(10)<<left<<"NIM"<<"|"<<setw(12)<<right<<"NAMA"<<setw(10)<<right<<"|";
    cout << setw(22)<<right<<"NAMA MATA KULIAH"<<setw(7)<<right<<"|"<<setw(5)<<right<<"SKS"<<setw(3)<<right<<"|";
    cout << setw(11)<<right<<"HURUF MUTU"<<setw(2)<<right<<"|"<<endl;
    cout << "-------------------------------------------------------------------------------------------"<< endl;
    
    for (int i = 1; i <= input; i++)
    {
        cout << setw(5)<<left<<"|"<<setw(13)<<left<<data[i].nim<<"|"<<setw(21)<<left<<data[i].nama<<"|";
        cout << setw(28)<<left<<data[i].matkul<<"|"<<setw(4)<<right<<data[i].sks<<setw(4)<<right<<"|";
        cout << setw(7)<<right<<data[i].hrf<<setw(6)<<right<<"|"<<endl;
        cout << "-------------------------------------------------------------------------------------------"<<endl;
    }
    
    return 0;
}
