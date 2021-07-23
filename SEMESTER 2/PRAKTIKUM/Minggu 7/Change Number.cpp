#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp;
		temp=*x;
		*x=*y;
		*y=temp;	
	
}

int main(){
	int input[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>input[i][j];
		}
	}
	int jmltukar;
	
	cin>>jmltukar;
	if(jmltukar<=0)
	{
		cout<<"Error";
		return 0;
	}
	
	int x,y,a,b;
	for(int k=0;k<jmltukar;k++){
		    int temp=0;
			cin>>x>>y>>a>>b;
			if(x<0||y<0||a<0||b<0||x>2||y>2||a>2||b>2){
				cout<<"Error";
				return 0;
			}
			swap(&input[x][y],&input[a][b]);		
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<input[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
