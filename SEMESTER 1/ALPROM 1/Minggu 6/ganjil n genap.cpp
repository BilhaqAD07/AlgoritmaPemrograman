#include <iostream>
using namespace std;

int main()
{
    int N, genap, ganjil, input;

    genap=0; ganjil=0;
    
    cout << "Masukkan berapa angka yang ingin di input => ";
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> input;
        if(input%2==0){
            genap++;
        }else {
            ganjil++;
        }
    }
    cout << "\nBilangan Genap  ada " << genap << " Angka";
    cout << "\nBilangan Ganjil ada " <<ganjil << " Angka";
    cout << endl;
    system("pause");
    return 0;
}
