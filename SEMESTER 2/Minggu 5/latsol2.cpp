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
        if(z[i].ipk<2){
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