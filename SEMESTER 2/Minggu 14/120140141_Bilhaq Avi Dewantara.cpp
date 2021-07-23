//Bilhaq Avi Dewantara
//120140141
//RC

//==============================TUGAS==============================
#include <iostream>
using namespace std;


void merge(int *array, int kiri, int tengah, int kanan)
{
    int temp[kanan + 1];
    int i = kiri;
    int j = tengah + 1;
    int k = 0;

    while (i <= tengah && j <= kanan)
    {
        if (array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    while (i <= tengah)
        temp[k++] = array[i++];
    while (j <= kanan)
        temp[k++] = array[j++];
    k--;
    while (k >= 0)
    {
        array[k + kiri] = temp[k];
        k--;
    }
}

void MerSort(int *array, int kiri, int kanan)
{
    int tengah;
    if (kiri < kanan)
    {
        tengah = (kiri + kanan) / 2;
        MerSort(array, kiri, tengah);
        MerSort(array, tengah + 1, kanan);
        merge(array, kiri, tengah, kanan);
    }
}

int main()
{
    int array[] = {38,27,43,3,9,82,10};
    int n = sizeof(array)/sizeof(array[0]);
    cout << "Sebelum Merge Sort : " ;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    MerSort(array, 0, n - 1);
    cout << endl;
    cout << "Sesudah Merge Sort : " ;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return (0);
}
