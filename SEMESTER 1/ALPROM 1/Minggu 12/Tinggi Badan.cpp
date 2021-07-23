#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int bil;
    float ting[5];
    //Output Array
    for(int k=0;k<5;k++){
        cout << "Data ke- "<< k << " = "; 
        cin>>ting[k];
    }cout << endl;

    //Pencarian
    cout << "-----Pencarian Data-----" << endl;
    cout << "Nilai yang akan dicari = ";
    cin >> bil; 
    for(int w=0;w<5;w++){
        if (ting[w] ==bil){
            cout << "Nilai yang dicari di indeks ke- "<< w << endl;
            break;
        }else if(ting[w] !=bil){
            cout << "Input Pencarian Salah" << endl;
            break;
        }
        
    }cout << endl;
    system("pause");
    return 0;
}
