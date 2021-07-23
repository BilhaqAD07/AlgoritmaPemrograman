#include<iostream>
using namespace std;
int main(){
int A[5] = {11, 23, 15, 19, 12};
int bil;
for(int i = 0; i < 5; i++){
cout<<"A["<<i<<"] : "<<A[i]<<endl;
}cout<<'\n';
cout<<"Nilai yang dicari : ";
cin>>bil;
//pencarian elemen
for(int j = 0; j<5; j++){
if(A[j] == bil){
cout<<"Nilai yang dicari terdapat pada indeks ke-"<<j;
break;
}
}
}