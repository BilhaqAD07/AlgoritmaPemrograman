//Bilhaq Avi Dewantara
//120140141
//TPB 52
//ID = 4
#include <iostream>
using namespace std;

void swap( int* x, int *y){
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}

int main()
{
    int input[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> input[i];
    }
    
    swap(&input[0],&input[1]);
    swap(&input[3],&input[4]);

    cout << "Hasil Akhir : ";
    for (int i = 0; i < 5; i++)
    {
        cout << input[i] << " ";
    }


    return 0;
}
