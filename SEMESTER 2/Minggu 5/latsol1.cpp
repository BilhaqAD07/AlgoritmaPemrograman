#include <iostream>
using namespace std;

string size(double r,){
    const float phi=3.14;
    double Luas= phi*r*r;
    if(L>50)return "Besar";
    if(L>20)return "Sedang";
    return "Kecil";
}
int main()
{
    
    int n;
    cout << "Masukkan N buah lingkaran : "; cin >> n;
    double r[n];
    for(int i=1;i<=n;i++){
        cout << "Masukkan jari-jari Lingkaran ke-" << i << " : ";
        cin >> r[i];
    }
    
    for(int i=1;i<=n;i++){
    cout << size(r[i])<<endl;
    }
    return 0;
}
