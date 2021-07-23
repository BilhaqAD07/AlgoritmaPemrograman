#include <iostream>
using namespace std;

int main()
{
    int N=10;
    float input;
    for(int i=1;i<=N;i++){
        float input[i];
        cout << "Angka ke-"<< i << " : "; cin >> input[i];
    }
    for(int i=1;i<=N;i++){
    float input[i];
    if(input[i]==10){
        cout << input[i] << " Adalah Sepuluh";
    }else {
        cout << input[i] << " Bukan Sepuluh";
    }
    cout << endl;
    }
    return 0;
}