#include <iostream>
using namespace std;
int main(){
    int x, y, r = 1;
    
    cout << "Masukan dimensi larik yang anda inginkan : " << endl;
    cin >> x >> y;
    int a[x][y], b[x][y];
    cout << endl;

    for (int i = 0; i < x; i++)
    { for (int j = 0; j < y; j++)
    {   a[i][j] = r;
        b[i][j] = r;
        r++;
    } 
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++){
        cout << a[i][j] << " " ;
    }
    cout << endl;
    }
    cout << "+" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
    cout << b[i][j] << " " ; }
    cout << endl;
    }
    cout << endl;
    cout << "=\n" << endl;
 
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
        cout << a[i][j]+b[i][j] << " " ; }
        cout << endl;
        }
    }