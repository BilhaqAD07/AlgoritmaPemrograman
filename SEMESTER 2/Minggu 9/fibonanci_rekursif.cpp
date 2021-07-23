#include <iostream>
using namespace std;

int fib(int n){
	if(n<=1){
		return n;
	}else{
		return (fib(n-1)+fib(n-2));
	}
}

int main() {
  
  int N, i, j = 0;
  cin >> N;
    if(N<=0){
        cout << "Error";
        exit(0);
    }
  for (i = 1; i <= N; i++){
    cout << fib(j) << " ";
    j++;
  }
  return 0;
}