#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILE_MASUK "jumlah_tabungan.txt"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void daftarin();
void transs();

int main(){
 	printf("\nNama 	: Martiza Aurelia Ahmad");
	printf("\nNIM	: 0102520052");
	printf("\nProdi 	: Informatika");
int mode;
 do{
 
  printf("\t\t\t Selamat Datang di Aplikasi Bank MAA\n\n\n");
  printf("Silahkan pilih layanan kami:\n");
  printf("MENU\n \t\n1. Registration \t\n2. Login \n\n\tChoices>  :");
  mode=getche();
  if (mode=='1'){
  daftarin();
  }
  else if(mode=='2'){
  transs();
  }
 } 
 while (mode=='1' || mode=='2');
 return 0;
}

void masukkan_creds(int *saldo, char nama[10], char no[10] ){
   
  printf("\n\nName> "); scanf("%s", nama);
  printf("Acc Number > "); scanf("%s", no);
  printf("Balance > "); scanf("%d", saldo);
}

void simpan_input_masuk(char nama_akun[10], char no_akun[10], int saldo){
 FILE * fp;
 fp= fopen(FILE_MASUK,"a");
 fprintf(fp,"%s %s %d \n",nama_akun,no_akun,saldo);
 fclose(fp);
}

void transs(){
 
 char nama[10];
 char no[10];
 int saldo_masuk, saldo_keluar;
 int biaya;
 
 hitung_transaksi(saldo_keluar);
 }

void daftarin(){
 char nama[10];
 char no[10];
 int saldo_masuk;

 masukkan_creds(&saldo_masuk, nama, no);
 printf("\n\n************AKUN TELAH DIBUAT************\n");
 puts(nama); 
 puts(no);
 printf("Rp. %d\n\n", saldo_masuk);
 simpan_input_masuk(nama, no, saldo_masuk);
}

int baca_jam_masuk(char nama_akun[10], char no_akun[10],int *saldo){
 FILE * fp;
 char no_akun_masuk[10];
 fp= fopen(FILE_MASUK,"r");

 while(fscanf(fp,"%s %s %d",no_akun_masuk,nama_akun,saldo)==3){
  printf("%s %d %d\n",no_akun_masuk,nama_akun,saldo);
  if(strcmp(no_akun,no_akun_masuk)==0) {
   fclose(fp);
   return 1;
  }
 }
 fclose(fp);
 return 0;
}

int hitung_transaksi(int saldo_masuk){
 
 int pilih;
 int debit;
 int kredit;
 int total_debit;
 int total_kredit;
 
 printf("\n1. Debit \n2. Kredit \npilih :");
 pilih=getche();
 if(pilih=='1'){
  printf("\nNilai Debit :"); scanf("%d", &debit);
  total_debit = saldo_masuk - debit;
  printf("Total Saldo : Rp. %d", total_debit);
 }
 else if(pilih=='2'){
  printf("\nNilai Kredit :"); scanf("%d", &debit);
  total_kredit = saldo_masuk + kredit;
  printf("Total Saldo : Rp. %d", total_kredit); 
 }
 
}
