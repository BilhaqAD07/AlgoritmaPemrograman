#include <iostream>
using namespace std;

struct TT
{
    string kos;
    int biaya;
};

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapstring(string *x, string *y){
    string temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void contraints(int n){
    if (n <= 0 )
    {
        cout << "Error";
        exit(0);
    }
    
}

int main (){
    int N, i, j;
    cin >> N;
    contraints(N);
    TT A[N];
    for (i = 0; i < N; i++){
        cin.ignore();
        getline(cin, A[i].kos);
        cin >> A[i].biaya;
        contraints(A[i].biaya);
    }
    for (i = 0; i < N; i++){
        for (j = 0; j < N - 1; j++){
            if (A[j].biaya > A[j+1].biaya)
            {
                swap(&A[j].biaya, &A[j+1].biaya);
                swapstring(&A[j].kos, &A[j+1].kos);
            }
        } 
    }
    for (i = 0; i < N; i++){
        cout << A[i].kos<< endl;
    }
    cout << "Kaori akan ngekos di " << A[0].kos;
    
    return 0;
}