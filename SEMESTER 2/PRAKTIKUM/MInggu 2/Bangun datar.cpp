#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
    
    int Trapesium(int a, int b, int c){
        return ((a+b)*c/2);
    }int Belahketupat(int a, int b){
        return ((a*b)/2);
    }int Lingkaran(int a){
        return (3.14*a*a);
}

int main() {
    int a, b, c;
    string pilih;
    cin >> pilih;
    if(pilih=="Trapesium"){
        cin>>a;
        cin>>b;
        cin>>c;
            if (a <= 0, b <= 0, c <= 0) {
            cout << "Error";
            return 0;
            }
        cout <<Trapesium(a,b,c);
    }else if(pilih=="Belahketupat"){
        cin>>a;
        cin>>b;
            if (a <= 0, b <= 0) {
            cout << "Error";
            return 0;
            }
        cout <<Belahketupat(a,b);
    }else if(pilih=="Lingkaran"){
        cin>>a;
            if (a <= 0) {
            cout << "Error";
            return 0;
            }
        cout<< Lingkaran(a);
}else{
        cout<<"Error";
    }
    return 0;
}