#include <iostream>
using namespace std;

int main()
{
    int p=1;
    int a,b,x=0,y=0;

    cout << "--------MATRIKS--------" << endl;
    cout << "Input Baris = "; cin >> a;
    cout << "Input Kolom = "; cin >> b;

    int o[a][b];

    for(x=0;x<a;x++){
        for(y=0;y<b;y++){
            o[x][y]=p;
            p++;
        }
    }

    for(x=0;x<a;x++){
        for(y=0;y<b;y++){
            cout <<o[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}