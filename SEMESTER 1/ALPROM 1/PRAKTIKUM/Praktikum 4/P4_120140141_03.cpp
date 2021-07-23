/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P4_120140141_ZP
Tanggal		: 18 November 2020
Deskripsi	: Zeno Paradoks
============================================
*/

#include<iostream>
using namespace std;
int main()
{
	 int a;
  float hsl;

  cin >> a;

  hsl = a;
  for (int i = 0; i <= 10; i++) {
    hsl /= 2;
  }
  cout << "gagal finish sisa " << hsl;
}
