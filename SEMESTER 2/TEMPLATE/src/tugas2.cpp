#include <iostream>
using namespace std;

int main(){
    int macam;
    float harga[10], jumlahbrg[10], totbelanja, hasil_diskon, diskon;
    string pilih, brg;
    
    cout<<"=== Selamat Datang di Minimarket ==="<<endl;
    cout<<"Anda member (ya/tdk) : ";cin>>pilih; //proses input member
    cout << endl;
    if(pilih=="ya"){	//menggunakan proses percabangan jika true maka akan dilanjutkan 
        cout<<"Berapa macam brg: ";cin>>macam;
            for(int i=0; i<macam; i++){ // perulangan banyak nya jumlah macam
            	//input data brg, harga, dan jumlah  
                cout << "Data barang ke-"<<i+1<<endl;
				cout<<"Barang       : "; cin>>brg;
				cout<<"Harga        : "; cin>>harga[i];
                cout<<"Jumlah brg   : "; cin>>jumlahbrg[i];
                totbelanja+=harga[i]*jumlahbrg[i];
            	diskon=0.07*totbelanja;
				hasil_diskon=totbelanja-diskon;
                cout << endl;
                }
                	//output jumlah belanja, diskon, total sebelum diskon dan total total setelah diskon
                        cout<<"Jumlah belanja		: "<<totbelanja<<endl;
                        cout<<"Diskon (7%)   		: "<<diskon<<endl;
                        cout<<"Sebelum diskon     	: "<<totbelanja<<endl;
                        cout<<"Setelah diskon     	: "<<hasil_diskon<<endl;
                        cout<<"***************"<<endl;    
    } else{ //proses percabangan jika bernilai false  maka akan melanjutkan program di bawahnya
        cout<<"Berapa macam brg : ";cin>>macam;
            for(int i=0; i<macam; i++){ //proses perulangan berdasarkan jumlah macam    
			//input data brg, harga, dan jumlah           
				cout<<"Barang       : "; cin>>brg; 
				cout<<"Harga        : "; cin>>harga[i];
                cout<<"jumlah brg   : "; cin>>jumlahbrg[i];
                totbelanja+=harga[i]*jumlahbrg[i];
            }
            //output total belanja
                 cout<<"Total belanja 	: "<<totbelanja<<endl;
                 cout<<"=================="<<endl;
}
 return 0;
}