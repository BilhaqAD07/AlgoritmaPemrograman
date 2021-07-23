/*
  Latihan 3 Algoritma Pemrograman
  Nama : Bilhaq Avi Dewantara
  NIM  : 120140141
  Prodi: Teknik Informatika
*/

#include <cstdlib>
#include <iostream>

using namespace std;

// DEKLARASI Menghitung luas Daerah Diarsir

int main()
{
  float r, diagonal, luasbelahketupat, luasdaeraharsir, luaslingkaran;
  const float phi = 3.14;
  
  cout <<"Perhitungan Luas Daerah Arsiran (Lingkaran - Belah Ketupat)";
  cout <<"\nInput Angka Diagonal-> "; cin >> diagonal;
  
  cout <<"\nMenghitung r: ";
  r = diagonal /2;
  cout <<"\nr =" <<diagonal << " /2";
  cout <<"\nr = " << r;
  
  cout <<"\n";
  
  cout <<"\nMenghitung Luas Lingkaran : ";
  luaslingkaran = phi *r *r;
  cout <<"\nLuas Lingkaran = "<< phi << "*" << r << "*" << r;
  cout <<"\nLuas Lingkaran = "<< luaslingkaran;
  
  cout <<"\n";
  cout << "\nMenghitung Luas Belah Ketupat : ";
  luasbelahketupat = diagonal*diagonal /2;
  cout <<"\nLuas Belah Ketupat = "<< diagonal << "*" << diagonal << "*" << "/2";
  cout <<"\nLuas Belah Ketupat = "<< luasbelahketupat;
  
  cout <<"\n";
  
  cout <<"\nMenghitung Luad Daerah Arsiran : ";
  luasdaeraharsir = luaslingkaran - luasbelahketupat;
  cout <<"\nLuas Daerah Arsir = "<< luaslingkaran << "-" << luasbelahketupat;
  cout <<"\nLuas Daerah Arsir = "<< luasdaeraharsir;
  
  return 0;
} 
