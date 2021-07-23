#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{
    int N, temp;
    cout << "Masukkan banyak input : "; cin >> N;
    int A[N];
    for(int i = 0; i < N; i++){
        cout << "Data ke-" << i+1 << " : ";
        cin >> A[i];
    }
    cout << endl;
    cout << "Sebelum Diurutkan : "; 
    for (int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i; j++){
            if (A[i] < A[j])
            {
                swap(&A[i],&A[j]);
            }
        }
        cout << endl << "Proses Ke-" << i+1 << " : ";
        for (int k = 0; k <= i; k++)
        {
            cout << " " << A[k];
        }
        
    }
    cout << endl;
    cout << "Setelah Diurutkan : "; 
    for (int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
