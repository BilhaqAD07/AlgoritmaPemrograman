#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
int a[3][3],b[3][3],i,j,;
int N;

for(i=0;i<3;i++){
for(j=0;j<3;j++){
cin>>a[i][j];}
}
cout<<endl<<endl;
cin >> N;
    if(N<=0){
        cout << "Error";
        exit(0);
    }
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    cin>>b[i][j];
    if(b[i][j]<0||b[i][j]>2){
        cout << "Error";
        exit(0);
    }
}
}
for(int x=0;x<3;x++){
for(int y=0;y<3;y++){
    cout << a[x][y];
}
}
return 0;
}

