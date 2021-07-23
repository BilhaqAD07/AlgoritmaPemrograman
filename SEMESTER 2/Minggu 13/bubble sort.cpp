#include <iostream>
using namespace std;

void tukar(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n=7;
    int A[n]={12,56,3,7,35,9, 29};
    cout << "Sebelum pengurutan : ";
    for(int i=0;i<n;i++){
        cout << A[i] << " ";
    }
    cout << endl;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(A[j]<A[j-1]){
                tukar(&A[j-1],&A[j]);
            }
        }
    }
    
    cout << "Setelah pengurutan : ";
    for(int i=0;i<n;i++){
        cout << A[i] << " ";
    }
    cout << endl;
    
    
    return 0;
}
