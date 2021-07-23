#include <iostream>
using namespace std;

int search(int arr[],int N, int point){
    int i;
    for(i=0;i<N;i++)
        if(arr[i]==point)
            return i;
    return -1;
}

int main()
{
  int N, X, linear;
  int A[100];
  
  cin>>N;
  if(N<=0){
      cout << "Error";
      exit(0);
  }
  for (int i=0;i<N;i++)
  {
    cin>>A[i];
  }
  cin>>X;
  linear = search(A,N,X);
  (linear == -1)? cout << "Tidak Ada"
                : cout << "Elemen ke-" << linear;
}