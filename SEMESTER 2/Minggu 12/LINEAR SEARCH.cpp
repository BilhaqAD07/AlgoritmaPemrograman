#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int target){
    int i;
    for(int i=0;i<n;i++)
        if(arr[i]==target)
            return i;
    return -1;
}

int main()
{
    int arr[]= {2,3,4,10,40};
    int target=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    int hasil = linearsearch(arr, n, target);
    (hasil == -1)? cout << "Nilai yang dicari tidak terdapat pada Array"
                    : cout << "Nilai terdapat pada index array Ke-"<<hasil;


    return 0;
}
