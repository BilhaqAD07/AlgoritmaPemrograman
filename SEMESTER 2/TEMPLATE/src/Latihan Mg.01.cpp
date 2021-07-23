#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y){
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int matkul,uts,uas,tugas;
    char nama[30], mk[30];
    char trns;
    float rata;

    cout << "Nama           => "; cin >> nama;
    cout << "Jumlah MatKul  => "; cin >> matkul;
    
cout<<"================================================================\n";
cout<<"| No | MatKul | Tugas | UTS | UAS | Rata2 | Transkrip |\n";
cout<<"================================================================\n";
for(int i=1;i<=matkul;i++){
    gotoxy(1,5+i);cout <<"|";
    gotoxy(3,5+i);cout <<i;
    gotoxy(6,5+i);cout <<"|";
    gotoxy(8,5+i);cin  >>mk;
    gotoxy(14,5+i);cout <<"|";
    gotoxy(17,5+i);cin >>tugas;
    gotoxy(22,5+i);cout <<"|";
    gotoxy(24,5+i);cin >>uts;
    gotoxy(28,5+i);cout <<"|";
    gotoxy(30,5+i);cin >>uas;
    gotoxy(34,5+i);cout <<"|";
    rata=(tugas*0.25)+(uts*0.3)+(uas*0.35);
    gotoxy(36,5+i);cout <<rata;
    gotoxy(42,5+i);cout <<"|";
   if(rata>=80)
   trns='A';
   else if(rata>=70)
   trns='B';
   else if(rata>=60)
   trns='C';
   else if(rata>=50)
   trns='D';
   else
   trns='E';
    gotoxy(47,5+i);cout <<trns;
    gotoxy(54,5+i);cout <<"|";
}   // selesai perulangannya
    cout<<"\n================================================================\n";
getch();
}
