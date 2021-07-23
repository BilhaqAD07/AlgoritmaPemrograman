#include <conio.h>
#include <iostream>
#define CLRSCR system("clear");
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;
int main ()
{
	char x,kdPilihan1,kdPilihan2,kdPilihan3,kdMasuk,nama[25],menu1[30],menu2[30],menu3[30],menu4[30],waktu[30];
	int u,hargaSatuan,hargaMenu1,hargaMenu2,hargaMenu3,hargaMenu4,hargaMenu5,jumlahMakanan,totalHarga,totalBayar,uangKembalian;
	awal:
	cout<<""<<endl<<endl;
	cout<<"============================================="<<endl;
	cout<<"\t\t SONY COFFEE"<<endl;
	cout<<"\tJl.Rangkas NO.01 LEBAK, PROVINSI BANTEN"<<endl;
	cout<<"============================================="<<endl<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"\t\tPILIHAN MENU"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"1. PAKET "<<endl;
	cout<<"2. MAKANAN "<<endl;
	cout<<"3. MINUMAN "<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Input Nomer Pilihan Anda [1-3] :";cin>>u;
	cout<<"---------------------------------------------"<<endl;
	cout<<""<<endl;
	if(u==1) {
		cout<<"====================================="<<endl;
		cout<<"\t\tJENIS PAKET"<<endl;
		cout<<"====================================="<<endl;
		cout<<"PAKET HEMAT"<<endl;
		cout<<"PAKET DOUBLE"<<endl;
		cout<<"PAKET TRIPLE"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Input Nomer Pilihan Anda [1-3] : ";cin>>kdPilihan1;
		cout<<"------------------------------------"<<endl;
		cout<<""<<endl;
	}
	else
	if(u==2)
	{
	  	cout<<"===================================="<<endl;
		cout<<"\t\tJENIS PAKET"<<endl;
		cout<<"===================================="<<endl;
		cout<<"MAKANAN PEMBUKA"<<endl;
		cout<<"MAKANAN UTAMA"<<endl;
		cout<<"MAKANAN PENUTUP"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Input Nomer Pilihan Anda [1-3] :";cin>>kdPilihan2;
		cout<<"------------------------------------"<<endl;
		cout<<""<<endl;
	}
	else
	if (u==3)
	{
		cout<<"===================================="<<endl;
		cout<<"\t\tJENIS MINUMAN"<<endl;
		cout<<"===================================="<<endl;
		cout<<"ANEKA JUS"<<endl;
		cout<<"ANEKA SODA"<<endl;
		cout<<"ANEKA KOPI"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Input Nomer Pilihan Anda [1-3] :";cin>>kdPilihan3;
		cout<<"------------------------------------"<<endl;
		cout<<""<<endl;
		
		getch();
	}

    switch(kdPilihan1)
	{
	case '1' :
		strcpy(menu1,"1 Nasi + 1 Ayam");
		strcpy(menu2,"1 Nasi + 1 Ikan");
		strcpy(menu3,"1 Nasi + 1 Capcay");
		hargaMenu1=35000;
		hargaMenu2=30000;
		hargaMenu3=25000;
		break;
	case '2' :
		strcpy(menu1,"2 Nasi + 2 Ayam");
		strcpy(menu2,"2 Nasi + 2 Ikan");
		strcpy(menu3,"2 Nasi + 2 Capcay");
		hargaMenu1=65000;
		hargaMenu2=55000;
		hargaMenu3=45000;
		break;
	case '3' :
		strcpy(menu1,"3 Nasi + 3 Ayam");
		strcpy(menu2,"3 Nasi + 3 Ikan");
		strcpy(menu3,"3 Nasi + 3 Capcay");
		hargaMenu1=95000;
		hargaMenu2=80000;
		hargaMenu3=65000;
		break;	
		default:
		strcpy(menu4, "tanda salah kode");
		break;	
    }
    switch(kdPilihan2) {
    	case '1' :
    	strcpy(menu1, "Kentang Goreng");
    	strcpy(menu2, "Sosis Bakar");
    	strcpy(menu3, "Nugget Goreng");
    	hargaMenu1=15000;
    	hargaMenu2=10000;
    	hargaMenu3=10000;
    break;
    	case '2' :
    	strcpy(menu1, "Nasi Bakar");
    	strcpy(menu2, "Nasi Timbal");
    	strcpy(menu3, "Nasi Goreng");
    	hargaMenu1=30000;
    	hargaMenu2=30000;
    	hargaMenu3=25000;
    break;
        case '3' :
		strcpy(menu1, "Ice Cream");
    	strcpy(menu2, "Pancake");
    	strcpy(menu3, "Puding");
    	hargaMenu1=15000;
    	hargaMenu2=15000;
    	hargaMenu3=10000;
    break;
    default :
    strcpy(menu4, "tanda salah kode");
    break;
	}
	switch(kdPilihan3) {
	case '1' :
	strcpy(menu1, "Jus Mangga");
	strcpy(menu2, "Jus Sirsak");
	strcpy(menu3, "Jus Jeruk");
	hargaMenu1=10000;
    hargaMenu2=10000;
    hargaMenu3=10000;
	break;
	case '2' :
	strcpy(menu1, "Fanta");
	strcpy(menu2, "Coca-Cola");
	strcpy(menu3, "Sprit");
	hargaMenu1=10000;
    hargaMenu2=10000;
    hargaMenu3=10000;
	break;
	case '3' :
	strcpy(menu1, "Hot Cappucino");
	strcpy(menu2, "Hot Vanila Latte");
	strcpy(menu3, "Hot Black Coffe");
	hargaMenu1=15000;
    hargaMenu2=15000;
    hargaMenu3=10000;
	break;
	default:
    strcpy(menu4, "tanda salah kode");
    break;				
	}
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"\t\tSILAHKAN PILIH"<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<menu1<<"                   = Rp. "<<hargaMenu1<<endl;
	cout<<menu2<<"                   = Rp. "<<hargaMenu2<<endl;
	cout<<menu3<<"                   = Rp. "<<hargaMenu3<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"Masukan Nomor Pilihan Anda [1-3] : ";cin>>kdMasuk;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<""<<endl;
	switch(kdMasuk){
	case '1' :
		hargaSatuan=hargaMenu1;
		strcpy(waktu, "5 Menit");
		break;
	case '2' :
		hargaSatuan=hargaMenu2;
		strcpy(waktu, "10 Menit");
		break;
	case '3' :
		hargaSatuan=hargaMenu3;
		strcpy(waktu, "15 Menit");
		break;
		default:
		strcpy(menu1, "tanda salah kode");
		break;	
	}
	cout<<"========================================================"<<endl;
	cout<<"\t\tKASIR JUJUR"<<endl;
	cout<<"\tSILAHKAN PESAN & BAYAR DISINI"<<endl;
	cout<<"========================================================"<<endl;
	cout<<"Nama Pemesan             =";cin>>nama;
	cout<<"Waktu Tunggu             ="<<waktu<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"Harga Satuan             = Rp. "<<hargaSatuan<<endl;
	cout<<"Jumlah Makanan           = Rp. ";cin>>jumlahMakanan;
	cout<<"--------------------------------------------------------"<<endl;
	totalHarga=jumlahMakanan*hargaSatuan;
	cout<<"Total Harga = Rp. "<<totalHarga<<endl;
	cout<<"Total Bayar = Rp. ";cin>>totalBayar;
	uangKembalian=totalBayar-totalHarga;
	cout<<"Kembalian   = Rp. "<<uangKembalian<<endl;
	cout<<"========================================================"<<endl;
	cout<<"\t\tTERIMA KASIH"<<endl;
	cout<<"\t\tSELAMAT DATANG KEMBALI"<<endl;
	cout<<"\t\tSELAMAT DATANG KEMBALI"<<endl;
	cout<<"========================================================"<<endl;
	
	getch();
	cout<<" "<<endl;
	cout<<"Ulangi Lagi (Y/T) :";
	cin>>x;
	if(x=='Y' || x=='y')
	goto awal;
	else
	cout<<" "<<endl;
	}
