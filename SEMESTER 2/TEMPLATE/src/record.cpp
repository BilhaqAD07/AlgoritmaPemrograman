#include <iostream>
using namespace std;

int data_angka[7]={8,10,9,2,7,15,5};

int proses(){
    int temp, jumlah=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<6-1;j++){
            if(data_angka[j]>data_angka[j+1]){
            temp=data_angka[j];
            data_angka[j] = data_angka[j+1];
            data_angka[j] = temp;
            jumlah++; 
            }
        }
    }
    return jumlah, temp;
}
int main()
{
    int hasil;

    hasil = proses();
    cout << "Jumlah proses penukaran : " << hasil << endl;

    for(int i=0;i<7;i++){
        cout << data_angka[i]<< " ";
    }
    cout << endl;
    
    return 0;
}
