#include <iostream>
using namespace std;

int main()
{
    int pilihan, N;

    cout << "--------HUKUM LORENTZ--------"<<endl<<endl;
    cout << "\tDAFTAR MENU"<<endl;
    cout << "1. Gaya Lorentz"<<endl;
    cout << "2. Panjang Kawat"<<endl;
    cout << "3. Arus Listrik"<<endl;
    cout << "Pilihan kamu yang ada di menu  = ";
    cin >> pilihan;
    cout << "Ingin berapa kali menghitung   = ";
    cin >> N; 
    cout << endl;
    float arus[N],medan[N],gaya[N],kawat[N];
    if (pilihan==1)
    {
        for (int i = 0; i < N; i++)
        {
            cout << "Perhitungan ke-" << i+1 <<endl;
            cout << "Masukkan arus listrik  : "; cin >> arus[i];
            cout << "Masukkan panjang kawat : "; cin >> kawat[i];
            cout << "Masukkan medan magnet  : "; cin >> medan[i];
            gaya[i]=arus[i]*medan[i]*kawat[i];
            cout << "Hasil Gaya Lorentz     : " << gaya[i] << endl;
            cout << endl;
        }
    }else if (pilihan==2){
        for (int i = 0; i < N; i++)
        {
            cout << "Perhitungan ke-" << i+1 <<endl;
            cout << "Masukkan gaya lorentz  : "; cin >> gaya[i];
            cout << "Masukkan panjang kawat : "; cin >> kawat[i];
            cout << "Masukkan medan magnet  : "; cin >> medan[i];
            arus[i]=gaya[i]/(medan[i]*kawat[i]);
            cout << "Hasil Arus Listrik     : " << arus[i] << endl;
            cout << endl;
        }
    }else if (pilihan==3){
        for (int i = 0; i < N; i++)
        {
            cout << "Perhitungan ke-" << i+1 <<endl;
            cout << "Masukkan gaya lorentz  : "; cin >> gaya[i];
            cout << "Masukkan arus listrik  : "; cin >> arus[i];
            cout << "Masukkan medan magnet  : "; cin >> medan[i];
            kawat[i]=gaya[i]/(medan[i]*arus[i]);
            cout << "Hasil Panjang Kawat    : " << kawat[i] << endl;
            cout << endl;
        }
    }else
        cout << "Pilihan Error" << endl;
    
    return 0;
}
