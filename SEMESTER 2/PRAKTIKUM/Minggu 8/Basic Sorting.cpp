#include <iostream>
using namespace std;
void swipe(string &x, string &y){
   swap(x,y);
}

int main(){
    int i, j, N;
    cin >> N;
    if(N<=0){
        cout << "Error";
        exit(0);
    }
    string X[N];
    for(i=0; i<N; i++){
        cin >> X[i];
    }
    for(i=0; i<N; i++){
        for(j=N-1; j>i; j--){
            if(X[j][i]<65){
                if(X[j] < X[j-1] || X[j].length()<X[j-1].length()){
                    swipe(X[j], X[j-1]);
                }
            }
        }
        for(int k=N-1;k>=i;k--){
            if(X[k][0] > X[k-1][0] && X[k][i]>65 && X[k-1][i]>65){
                swipe(X[k], X[k-1]);
            }
        }
    }
    for(i=0; i<N; i++){
        cout << X[i];
        cout << endl;
    }
}
