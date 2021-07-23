#include <iostream>
using namespace std;

void MyF(int *x, int y){
    *x=y-1;
}
int main()
{
    int x, y;

    cout << "Masukkan angka : "; cin >> y;
    MyF(&x,y);
    cout << "Nilai sebelum diubah : " << y << endl;
    cout << "Nilai sesudah diubah : " << x << endl;

    return 0;
}
