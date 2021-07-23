#include <iostream>
using namespace std;

int main(){
	int n=5,bilangan, Hasil;
	for(int i=1; i<=n; i++){
		cout<<"Masukkan Bilangan ke "<<i<<" = " ; cin>>bilangan;
		Hasil=bilangan%2;
		
	if(Hasil==0){
			cout<<"Bilangan "<<bilangan<<" merupakan bilangan genap\n" <<endl;
		}else if(Hasil==1){
			cout<<"Bilangan "<<bilangan<<" tidak termasuk bilangan genap\n" <<endl;
			return 0;
		}
	}
}

