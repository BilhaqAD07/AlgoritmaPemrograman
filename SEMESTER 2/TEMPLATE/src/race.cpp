#include <iostream>
using namespace std;
void swap(string *x, string *y){
   string tmp;
   tmp = *x;
   *x  = *y;
   *y  = tmp;
}

int main(){
       int i, j, N;
       cin >> N;
       if(N<=0){
       cout << "Error";
       exit(0);
       }
    int A[N];
       for(i=0; i<N; i++){
      getline(cin, A[N]);
       }
       for(i=0; i<N; i++){
      for(j=N-1; j>i; j--){
         if(A[i] > A[j]){
            swap(&A[i], &A[j]);
         }
      }
       }
       for(i=0; i<N; i++){
      cout << A[i];
      cout << endl;
       }
}