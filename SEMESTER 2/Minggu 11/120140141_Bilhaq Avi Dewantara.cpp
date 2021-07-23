//Bilhaq Avi Dewantara
//120140141
//RC


//==============================LATIHAN 1==============================

// Keluarannya adalah : 12

//==============================LATIHAN 2==============================

// Keluarannya adalah : 1 1

//==============================LATIHAN 3==============================
#include <iostream>
using namespace std;

// Fungsi Penukaran
void tuker(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
// Fungsi Pembalik
void pembalik(int input[], int binput){
    int *point1=input,

        *point2=input + binput-1;
        while(point1<point2){
            tuker(point1,point2);
            point1++;
            point2--;
        }
}
// Fungsi Output
void out(int* input, int binput)
{
  
    // Length pointing at end of the array
    int *panjang = input + binput,
  
        // Position pointing to the beginning of the array
        *posisi = input;
    cout << "Deret : ";
    for (posisi = input; posisi < panjang; posisi++)
        cout << *posisi << " ";
}

int main()
{
    int deret[] = { 2, 5, 7, 6, 1, 3, 8, 4, 9, 8};
    cout << "Awal  Deret : ";
    for(int i=0;i<10;i++){
        cout << deret[i] << ' ';
    }
    
    cout << endl;
    cout << "Akhir ";
    pembalik(deret,10);
    out(deret,10);

    cout << endl;
    return 0;
}
