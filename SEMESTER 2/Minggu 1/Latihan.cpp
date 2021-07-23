#include <iostream>
using namespace std;

int main()
{
	port:
	int tugas,uts,uas,hasil;
	char b;
	string index;
	char nama[30];
	
	cout << "\t\t*******************\n";
	cout << "\t\tPROGRAM INDEX NILAI\n";
	cout << "\t\t*******************\n\n";
	
	cout << "Input nama Anda		=> ";
	cin >> nama;
	cout << "Input nilai Tugas 	=> ";
	cin >> tugas;
	cout << "Input nilai UTS		=> ";
	cin >> uts;
	cout << "Input nilai UAS		=> ";
	cin >> uas;
	
	hasil=(tugas*0.25)+(uts*0.3)+(uas*0.35);
	cout << "\n";
	
	if (hasil >= 80){
		index = "A, Istimewa\n";	
	} else if(hasil >= 70){
		index = "AB, Sangat Baik\n";
	} else if(hasil >= 65){
		index = "B, Baik\n";
	} else if(hasil >= 60){
		index = "BC, Cukup Baik\n";
	} else if(hasil >= 50){
		index = "C, Cukup\n";
	} else if(hasil >= 40){
		index = "D, Kurang\n";
	} else
		index = "E, Gagal\n";

	
	cout << "\t*****************************\n";
	cout << "\tNama Anda  = " << nama << endl;
	cout << "\tNilai Anda = " << hasil << endl;
	cout << "\tIndex      = " << index << endl;
	cout << "\t*****************************"<< endl;

	lang:
	cout << "Apakah Anda Ingin Mengulanginya? (Y/N) => ";
	cin >> b;
		system("cls");
	if (b=='Y'||b=='y'){
		goto port;
	} if (b=='N'||b=='n'){
		cout << "Terima Kasih:)"<< endl;
	} else{
		cout << "Silahkan Ulangi Lagi.."<< endl;
		goto lang;
	}

return 0;
}
