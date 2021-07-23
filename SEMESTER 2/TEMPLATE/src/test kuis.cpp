#include <iostream>
using namespace std;
void tukar(int*x, int*y){
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}

int main(){
	int input[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> input[i];
    }
    cout << "masukkan: ";
    for (int i = 0; i < 4; i++)
    {
        cout << input[i] << ", ";
    }
    
	tukar(&input[1],&input[0]); 
	tukar(&input[3],&input[2]);
    cout << endl;
	cout <<"luaran: ";
    for (int i = 0; i < 4; i++)
    {
        cout << input[i] << ", ";
    }
    
	return 0;
}