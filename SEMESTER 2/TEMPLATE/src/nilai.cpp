#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
/**
*bundet.com
*Menghitung Nilai Mahasiswa Versi 0.1
*/
void gotoxy(int x, int y){
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
char nama[30], namamk[30];
int jml,uts,uas,tugas;
char hrf;
float rata;
cout<<"Nama : ";cin>>nama;
cout<<"Jml MK : ";cin>>jml;
cout<<"================================================================\n";
cout<<"| No | Nama MK | UTS | UAS | Tugas | Rata2 | Huruf |\n";
cout<<"================================================================\n";
for(int i=1;i<=jml;i++)
{
gotoxy(1,5+i);cout<<"|";
gotoxy(3,5+i);cout<<i;
gotoxy(6,5+i);cout<<"|";
gotoxy(8,5+i);cin>>namamk;
gotoxy(16,5+i);cout<<"|";
gotoxy(18,5+i);cin>>uts;
gotoxy(22,5+i);cout<<"|";
gotoxy(24,5+i);cin>>uas;
gotoxy(28,5+i);cout<<"|";
gotoxy(30,5+i);cin>>tugas;
gotoxy(36,5+i);cout<<"|";
rata=(uts+uas+tugas)/3;
gotoxy(38,5+i);cout<<rata;
gotoxy(44,5+i);cout<<"|";
if(rata>=80)
hrf='A';
else if(rata>=70)
hrf='B';
else if(rata>=60)
hrf='C';
else if(rata>=50)
hrf='D';
else
hrf='E';
gotoxy(46,5+i);cout<<hrf;
gotoxy(52,5+i);cout<<"|";
}//end for
cout<<"\n================================================================\n";
getch();
}
