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

    cout <<"Masukkan Jumlah Angka : "; cin >> z;
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