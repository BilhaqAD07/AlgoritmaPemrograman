#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a, b, c = 1;

    cout << "Input Baris = "; cin >> a;
    cout << "Input Kolom = "; cin >> b;
    int n[a][b], m[a][b];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            n[i][j] = c;
            m[i][j] = c;
            c++;
        }
        cout << endl;
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
     }
     cout << "\n+\n" << endl;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << n[i][j] << " ";
        }
        cout << endl;
     }
     cout << "\n=" << endl;
    cout << endl;

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout << m[i][j]+n[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
