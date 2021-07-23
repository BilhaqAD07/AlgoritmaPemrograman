#include <iostream>
using namespace std;

int misteri(int n, int m){
    if(m == 0)
        return 0;
        else return n+misteri(n, m-1);
}

int main()
{
    int x=3,y=3;
    cout << "Soal 3, mencoba program rekursif Misteri(3,3)"<< endl;
    cout << "Hasil : "<< misteri(x,y);
    
    return 0;
}

/* Output yang dihasilkan oleh program rekursif misteri(3,3) ialah 9 dimana hasil tersebut
merupakan perkalian antara variabel n dan variabel m pada program rekursif. 

Output tersebut dapat keluar seperti diatas karena ketika input n dimasukkan  ke dalam fungsi  
maka ada pula yang bertugas sebagai penyimpan angka agar dapat dijumlahkan nanti dimana variabel
m-1 tersebut berfungsi agar variabel n yang sebagai penyimpan jumlah angka dapat berjalan dengan
efisien. 
*/