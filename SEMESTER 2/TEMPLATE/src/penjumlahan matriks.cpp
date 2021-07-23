#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a, b, c=1;
    int n[a][b], m[a][b];

    cout << "Input Baris = "; cin >> a;
    cout << "Input Kolom = "; cin >> b;
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            m[i][j] = c;
            n[i][j] = c;
            c++;
        }
        cout << endl;
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << m[i][j] << ' ';
        }
        cout << endl;
     }
     cout << "+" << endl;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << n[i][j] << ' ';
        }
        cout << endl;
     }
     cout << "=" << endl;
    cout << endl;

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout << m[i][j]+n[i][j] << ' ';
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
