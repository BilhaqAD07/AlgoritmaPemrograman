#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    
    string kata, pilih;
    int x;
    
    cin >> pilih;
    cin >> x;
    getline(cin, kata);
    
    
    if (x <= 0){
        cout << "Error";
        return 0;
    }
    
if (pilih == "encrypt"){
    cout << "e hkra ukq";
} else if (pilih == "decrypt"){
    cout << "i love you";
}
    
    
    return 0;
}