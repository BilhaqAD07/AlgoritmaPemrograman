#include <iostream>
using namespace std;

int main()
{
    int barang[5];
    int hasil=0;
    for (int i = 0; i < 5; i++)
    {
        cout<< "Barang "<<i+1 << "=";
        cin>>barang[i];
        hasil+=barang[i];
    }
    cout << "Hasil Keseluruhan Berat barang ="<<hasil;
    


    return 0;
}
