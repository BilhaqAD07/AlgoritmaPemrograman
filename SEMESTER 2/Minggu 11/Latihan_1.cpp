#include <iostream>
using namespace std;

void MyF(int *x);

int main()
{
    //PASSING BY REFERENCE
    int a,b,c;
    cout << "Input nilai a : "; cin >> a;
    cout << "Input nilai b : "; cin >> b;
    cout << "Input nilai c : "; cin >> c;
    cout << endl;
    cout << "Sebelum diubah : " << a << " " << b << " " << c << endl;
    MyF(&a);
    MyF(&b);
    MyF(&c);
    cout << "Sesudah diubah : " << a << " " << b << " " << c << endl;
    return 0;
}

void MyF(int *x){
    *x=*x*2;
}