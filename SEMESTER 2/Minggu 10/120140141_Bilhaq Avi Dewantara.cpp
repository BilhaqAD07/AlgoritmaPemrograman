//Bilhaq Avi Dewantara
//120140141
//RC


//==============================SOAL 1==============================
#include <iostream>
using namespace std;

int deret_asoy(int n){
    int angka;
    if(n==1){
        angka = 1;
    } else {
        angka = (n-1)+deret_asoy(n-1);
    }
    cout << angka << ", ";
    return angka;
}

int main()
{
    int test=7;
    cout << "Percobaan fungsi rekursif dengan memasukkan angka 7";
    cout << endl;
    cout << endl;
    cout << "Hasil : "<<deret_asoy(test) << endl;
    
   
    return 0;
}

/* Jawab:
Output yang keluar apabila sub-program tersebut dimasukkan angka 7 dari dalam main program adala;
" 1, 2, 4, 7, 11, 16, 22
Hasil : 22"
*/

//==============================SOAL 2==============================
#include <iostream>
using namespace std;

int ngapaya(int n){
    int angka;
    if(n==1)
    return n;
    else angka =ngapaya(n-1)+(n);
    return angka;
    }

int main()
{
    int X;
    cout << "Masukkan bilangan bulat Positif: ";
    cin >> X;
    cout << "Hasil akhirnya adalah : " << ngapaya(X) << endl;
    cout << endl;
    for(int i=X;i>=0;i--){
        if(i!=0){
            cout << i << " + "; 
        } else {
            cout << i;
        }
    }
    cout << " = " << ngapaya(X);
    cout << endl;

    
    
    
    return 0;
}
//==============================SOAL 3==============================
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

//==============================SOAL 4==============================
#include <iostream>
using namespace std;

int sum=0;
int kuadrat(int N){
    if(sum==2)
        return 1;
    else 
    sum++;
    return N * kuadrat(N);
}

int main()
{
    int x;
    cout << "Masukkan Angka = ";
    cin >> x;
    cout << x << " pangkat 2 adalah " << kuadrat(x);
    
    return 0;
}
