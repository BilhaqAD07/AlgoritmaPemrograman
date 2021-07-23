/*
KELOMPOK 2
NIM - Nama:
120140129 - Rendi Muhammad Fajri
120140141 - Bilhaq Avi Dewantara
120140147 - Gery Melia Suwanda
120140153 - Fadhilah Fauza Hamda
120140158 - Faisal Khairul Fasha
120140159 - Ryco Afta Gian Aidil
================================================
*/

// SOAL 1 (Percabangan dan Perulangan)

// Sebuah Universitas memiliki kebijakan sistem penilaian seperti berikut:
// - Setiap mahasiswa menerima nilai dalam rentang inklusif dari 0 hingga 100.
// - Nilai apa pun yang kurang dari 45 adalah nilai gagal.

// Frans adalah seorang profesor di universitas dan suka membulatkan nilai setiap mahasiswa sesuai dengan aturan berikut:
// - Jika perbedaan antara nilai dan kelipatan 5 berikutnya kurang dari 3, bulatkan nilai ke kelipatan 5 berikutnya.
// - Jika nilai kelas kurang dari 43, pembulatan tidak terjadi karena nilai dianggap nilai gagal.
// Contoh:
// Nilai = 89 dibulatkan menjadi 90 (90-89 kurang dari 3)
// Nilai = 29 tidak dapat dibulatkan (hasil kurang dari 45 atau nilai gagal)
// Nilai = 47 tidak dapat dibulatkan (50-47 adalah 3 atau lebih tinggi)

// Buatlah Program tersebut menggunakan Perulangan + Percabangan (Jumlah Bilangan Yang Ingin Diinput Harus Ditentukan oleh Pengguna)

// Jawaban:

#include <iostream>
using namespace std;

int main () {
    int x;
    int nilai;
    
    cout << "Masukkan Banyaknya Nilai Yang Ingin Dicari = "; cin >> x;
    for(int i = 1; i <= x; i++){
        cout << "Masukkan Nilai Ke-" << i << " = "; cin >> nilai;
        if (nilai >= 43 && nilai % 5 >= 3)
            nilai += 5 - nilai % 5;
        cout << "Hasil Akhir Nilai Ke-" << i << " = " << nilai << endl;
    }
    return 0;
}

// ================================================================================================

// SOAL 2 (Array)

// Buatlah suatu program (Array) menggunakan fungsi swap, masukan batas angka dengan jumlah ganjil, 
// selanjutnya masukan angka dan tukarkan dua bilangan secara ziz zag setelah bilangan pertama dengan tetap mempertahankan nilai bilangan pertama!

// Jawaban:

#include<iostream>
using namespace std;
//menukarkan deret angka dengan cara zig_zag

void zig_zag_array(int no[], int z)
{
    bool tukar = true;
    for (int i=0; i<=z-2; i++)
    {
    if(tukar){
        if (no[i] > no[i+1])
            swap(no[i],no[i+1]);
    }
        else{
        if (no[i] < no[i+1])
            swap(no[i], no[i+1]);
        }
        tukar =!tukar; 
    }
}
 
int main()
{   int no[100];
    int z;

    cout <<"Masukkan Jumlah Angka (Ganjil): "; cin >> z;
    cout <<"Bilangan Awal : ";

    for(int i=0;i<z;i++){
    cin>>no[i];
    }
    
    zig_zag_array(no, z);
    cout << "\nBilangan Zig_Zag : ";
    for (int i=0; i < z; i++) 
      cout << no[i] <<" ";
  return 0;     
}

// ================================================================================================

// SOAL 3 (Sub Program)

// Melia mengunjungi sebuah bank ajaib di negeri hogwarts. Bank itu memiliki ciri khusus pada setiap waktu
// Pada saat pagi hari, bank itu akan menampilkan ucapan selamat datang dan perhitungan tabungan yang diinputkan pengguna dengan biaya admin 15%.
// Pada siang hari, bank tersebut akan memberikan bonus gratis biaya admin apabila nasabah telah menjawab kuis dengan benar.
// Sedangkan pada malam hari, bank memberikan kuis  jebakan dengan mempertaruhkan total uang dan apabila pemilik tabungan tidak bisa menjawab maka bank akan memblokir rekening ajaib tetapi jika kuis benar maka uang akan dilipatgandakan 2x lipat.

// Jawaban: 

#include <iostream>
using namespace std;

float admin(float m){
    return m-(m*0.15);

}
float kali(float n){
    return n*2;
}

int main()
{
    string z="GAJAH TERBANG KELIATAN APANYA?";
    string p="NAMPAK KEREN";
    string q="NAMPAK PELIK";
    string d="SIAPAKAH PENEMU TELEPON?";
    string e="Alexander Graham Bell";
    string f="Louis Pasteur";
    int x, simpan,y;
    int jwb;
    cout << "\t===================================="<< endl;
    cout << "\t SELAMAT DATANG DI BANK UANG AJAIB"<< endl;
    cout << "\t===================================="<< endl<<endl;
    cout << "----------PAGI HARI----------"<<endl;
    cout << "Masukkan Uang yang akan ditabung = "<<"Rp."; cin >> x;
    cout << endl;
    cout << "Uang Anda dikenakan biaya administrasi sebesar 15%"<< endl<<endl;
    simpan=admin(x);
    ulang:
    cout << "----------SIANG HARI---------"<<endl;
    cout << "Jawablah kuis berikut ini, apabila benar maka gratis biaya admin"<< endl;
    cout<<z<< endl;
    cout<<"1. "<<p<< endl;
    cout<<"2. "<<q<< endl;
    cout <<"Jawaban Anda(1/2) = "; cin >> y;
    cout << endl;
    switch(y){
        case 1:
        cout << "MAAF JAWABAN ANDA SALAH"<< endl<<endl;
        cout << "----------MALAM HARI---------"<<endl;
        cout << "Berikut ada kuis kedua, apabila benar tabungan akan digandakan dan apabila kalah tabungan akan hangus"<<endl;
        cout <<d<<endl;
        cout <<"1. "<<e<<endl;
        cout <<"2. "<<f<<endl;
        cout <<"Jawaban Anda(1/2) = "; cin >> jwb;
        cout << endl;
        if(jwb==1){
            cout <<"\tSELAMAT UANG ANDA DIGANDAKAN"<<endl;
            cout <<"\tUang Anda = "<<"Rp. "<<simpan<<endl;
        }else{
            cout <<"\tMAAF JAWABAN MASIH SALAH"<< endl;
            cout <<"\tUang Anda = "<<"Rp.0"<<endl;
        }
        break;
        case 2:
        cout << "YEY KAMU BENAR, GRATIS BIAYA ADMIN"<< endl<<endl;
        cout << "----------MALAM HARI---------"<<endl;
        cout << "Berikut ada kuis kedua, apabila benar tabungan akan digandakan dan apabila kalah tabungan akan hangus"<<endl;
        cout <<d<<endl;
        cout <<"1. "<<e<<endl;
        cout <<"2. "<<f<<endl;
        cout <<"Jawaban Anda(1/2) = "; cin >> jwb;
        cout << endl;
        if(jwb==1){
            cout <<"\tSELAMAT UANG ANDA DIGANDAKAN"<<endl;
            cout <<"\tUang Anda = "<<"Rp. "<<kali(x)<<endl;
        }else{
            cout <<"\tMAAF ANDA JAWABAN SALAH"<< endl;
            cout <<"\tUang Anda = "<<"Rp.0"<<endl;
        }
        break;
        default:
            cout << "KESALAHAN, SILAHKAN COBA LAGI"<< endl;
            goto ulang;
    }
    cout <<"-----------------------------------------"<<endl;
    system("pause");
    return 0;
}

// ================================================================================================
