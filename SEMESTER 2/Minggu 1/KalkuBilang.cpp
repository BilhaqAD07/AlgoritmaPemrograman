#include <iostream>
using namespace std;

int main()
{
 int oper, gas,tambah,kurang,kali,bagi;
 float n,p;
 operasi:
 cout <<"1. Penjumlahan" << endl;
 cout <<"2. Pengurangan" << endl;
 cout <<"3. Perkalian" << endl;
 cout <<"4. Pembagian" << endl;
 cout <<"Pilih Operasi	=> ";
 cin >> oper;
 system("cls");
 
 switch(oper){
 	case 1:
 		one:
 		cout << "-----Penjumlahan-----\n\n";
 		cout << "Input Angka Ke-1	=> ";
 		cin >> n;
 		cout << "Input Angka Ke-2	=> ";
		cin >> p;
		tambah=n+p;
		cout << "Hasil				=> " <<n<<" + "<<p<<"= "<<tambah;
		ask1:
		cout << "\n\n1. Ulangi Operasi Bilangan\n";
		cout << "2. Ganti Operasi Bilangan\n";
		cout << "3. Selesai\n";
		cout << "Pilihan Anda			=> ";
		cin >> gas;
		system("cls");
		if(gas==1){
			goto one;
		} else if(gas==2){
			goto operasi;
		} else if(gas==3){
			cout << "Terima Kasih, Semoga Bermanfaat :*";
		} else{
			cout << "Kesalahan memasukkan pilihan\n\n";
			goto ask1;
		}
		break;
	case 2:
		two:
		cout << "-----Pengurangan-----\n\n";
 		cout << "Input Angka Ke-1	=> ";
 		cin >> n;
 		cout << "Input Angka Ke-2	=> ";
		cin >> p;
		kurang=n-p;
		cout << "Hasil				=> " <<n<<" - "<<p<<"= "<<kurang;
		ask2:
		cout << "\n\n1. Ulangi Operasi Bilangan\n";
		cout << "2. Ganti Operasi Bilangan\n";
		cout << "3. Selesai\n";
		cout << "Pilihan Anda			=> ";
		cin >> gas;
		system("cls");
		if(gas==1){
			goto two;
		} else if(gas==2){
			goto operasi;
		} else if(gas==3){
			cout << "Terima Kasih, Semoga Bermanfaat :*";
		} else{
			cout << "Kesalahan memasukkan pilihan\n\n";
			goto ask2;
		}
		break;
	case 3:
		three:
		cout << "-----Perkalian-----\n\n";
 		cout << "Input Angka Ke-1	=> ";
 		cin >> n;
 		cout << "Input Angka Ke-2	=> ";
		cin >> p;
		kali=n*p;
		cout << "Hasil				=> " <<n<<" x "<<p<<"= "<<kali;
		ask3:
		cout << "\n\n1. Ulangi Operasi Bilangan\n";
		cout << "2. Ganti Operasi Bilangan\n";
		cout << "3. Selesai\n";
		cout << "Pilihan Anda			=> ";
		cin >> gas;
		system("cls");
		if(gas==1){
			goto three;
		} else if(gas==2){
			goto operasi;
		} else if(gas==3){
			cout << "Terima Kasih, Semoga Bermanfaat :*";
		} else{
			cout << "Kesalahan memasukkan pilihan\n\n";
			goto ask3;
		}
		break;
	case 4:
		four:
		cout << "-----Pembagian-----\n\n";
 		cout << "Input Angka Ke-1	=> ";
 		cin >> n;
 		cout << "Input Angka Ke-2	=> ";
		cin >> p;
		bagi=n/p;
		cout << "Hasil				=> " <<n<<" : "<<p<<"= "<<bagi;
		ask4:
		cout << "\n\n1. Ulangi Operasi Bilangan\n";
		cout << "2. Ganti Operasi Bilangan\n";
		cout << "3. Selesai\n";
		cout << "Pilihan Anda			=> ";
		cin >> gas;
		system("cls");
		if(gas==1){
			goto four;
		} else if(gas==2){
			goto operasi;
		} else if(gas==3){
			cout << "Terima Kasih, Semoga Bermanfaat :*\n\n";
		} else{
			cout << "Kesalahan memasukkan pilihan\n\n";
			goto ask4;
		}
		break;
		default:
			cout << "Kesalahan memasukkan pilihan\n\n";
			goto operasi;
		 
 }
    
    system("pause");
    return 0;
}
