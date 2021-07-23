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
