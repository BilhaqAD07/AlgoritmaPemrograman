#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int Xn, x, Yn, y, tot;
    cin >> Xn >> x;
    cin >> Yn >> y;

    
    if(Xn<=0||x<= 0||Yn<=0||y<= 0)
    {
        cout << "Error";
        exit(0);
    }

    tot = Xn+x+Yn+y+13;
    cout << tot<< endl;
    cout << tot*12000*2<< endl;
}