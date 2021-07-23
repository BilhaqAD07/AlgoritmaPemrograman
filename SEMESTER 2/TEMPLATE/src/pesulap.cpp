#include <iostream>
using namespace std;
void tukar(int *p1, int *p2){
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

int main()
{ int N;
  cin>>N;
   int A[N];
   int B[N];
   for (int i=0;i<N;i++){
   	cin>>A[i];
   }
   for (int i=0;i<N;i++){
   	cin>>B[i];
   }
	int T;
	cin>>T;
	char P,Q;
	int x,y;
	
	for(int i=1;i<=T;i++){
		cin>>P;
		cin>>x;
		cin>>Q;
		cin>>y;
		
		 if(P=='A'&&Q=='B'){
		 tukar(&A[x-1],&B[y-1]);
		}
		else if(P=='B'&&Q=='A'){
		 tukar(&B[x-1],&A[y-1]);
		}
	    else if(P=='A'&&Q=='A'){
		 tukar(&A[x-1],&A[y-1]);
		}
		else if(P=='B'&&Q=='B'){
		 tukar(&B[x-1],&B[y-1]);
		}
	}
	
	for(int i=0;i<N;i++){
	cout<<A[i]<<" ";
	}
	cout<<endl;
		for(int i=0;i<N;i++){
	cout<<B[i]<<" ";
	}
}