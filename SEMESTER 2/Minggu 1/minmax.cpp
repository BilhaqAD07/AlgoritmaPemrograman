#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x;
    float max,min,input;
    cout << "Masukkan Jumlah Angka = ";
    cin >> x;
    cout << "Masukkan Angka ke-1 = ";
    cin >> max;
    min=max;

    for(int i=2;i<=x;i++){
        cout << "Masukkan Angka ke-" << i << " = ";
        cin >>input;
        if (input > max){
            max=input;
        } if(input < min){
            min=input;
        }
    }
    
    cout << "Nilai Max dari ke-" <<x<< " angka adalah : " << max << endl;
    cout << "Nilai Min dari ke-" <<x<< " angka adalah : " << min << endl;
    return 0;
}
