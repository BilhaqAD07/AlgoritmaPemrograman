#include <iostream>

using namespace std;
int main() {
		

int n, a ; 
		cout << "input angka (diatas 1) = ";
		cin >> n;
		cout << endl << endl;
		for (int i = 1 ; i <= n; i++ )	{
			for( int j = n ; j > i ; j--){
				cout << " ";
				
			}
			for (int k = 1 ; k <= i ; k++){
				cout << " *";
				
			}
			for( int j = n ; j > i ; j--){
				cout << " ";
				
			}
			for( int j = n ; j > i ; j--){
				cout << " ";
				
			}
			for (int k = 1 ; k <= i ; k++){
				cout << " *";
				
			}
			cout << endl;
		}
	 	
		a = (n * 2)-1;
		for ( int i = a ; i >= 1 ; i--){
			for (int j = i ; j <= a ; j++){
				cout << " ";
			}
			for ( int k = i ; k > 0 ; k--){
				cout << " *";
			}
			cout << endl;
		}	
		
	


		
		

		   return 0;
		   
  }
