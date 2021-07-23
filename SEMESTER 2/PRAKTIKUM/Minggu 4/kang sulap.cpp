#include <iostream>
using namespace std;

void swapping(int &c, int &d){
    swap(c,d);
}

int main()
{
    short N, T, x, y;
    char P, Q;
    cin >> N;
    int Arr[2][N];
    for(short i=0; i<2; i++){
        for(short j=0; j<N; j++){
            cin >>Arr[i][j];
        }
    }    
    
    cin >> T;
    for(short i=0;i<T;i++){
        cin >> P >> x >> Q >> y;
        short a = P - 'A';
        short b = Q - 'A';
        swapping(Arr[a][x-1], Arr[b][y-1]);
    }
    for(short i=0; i<2; i++){
        for(short j=0; j<N; j++){
            cout << Arr[i][j];
            if(j != N-1){
                cout << " ";
            } else {
                cout << endl;
            } 
        }
    }
    return 0;
}
