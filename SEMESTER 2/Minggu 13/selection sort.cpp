#include<iostream>
using namespace std;




int main() {
    int n, tukar, A[100];
    cin >> n;
    if(n<=0){
        cout << "Error";
        exit(0);
    }
    for (int i = 0; i < n; i++) {
        cin >> A[i];

    }
    for (int i = 0; i < n-1; i++) {
        tukar = i;
        int temp;
        for(int j = i+1; j < n; j++){
            if(A[j] < A[tukar]){
                tukar = j;
            }
        }   
        temp = A[tukar];
        A[tukar] = A[i];
        A[i] = temp;
    }




    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cin.get();
    return 0;


}