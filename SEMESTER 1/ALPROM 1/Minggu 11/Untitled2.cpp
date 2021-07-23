#include <iostream>
using namespace std;
float Konversifar(float H){
    float J;
    J= H*1.8+32;
    return J;
}
float Konversikel(float N){
    float M;
    M= N+273;
    return M;
}

int main()
{
    system("cls");
float C,F,K;
char convert;
	
	cin >> C;
	cin >> convert;
	switch(convert){
		case 'F':
     F=Konversifar(C);
			cout<< F;
			break;
		case 'K':
     K=Konversikel(C);
			cout<< K;
			break;
		default:
			cout<<"Tidak bisa Konversi";
			
	}
    return 0;
}
