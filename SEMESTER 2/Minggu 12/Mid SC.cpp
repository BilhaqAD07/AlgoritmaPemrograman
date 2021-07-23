#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
	if(end >= start){		//selama end point > start poin
		int mid = start + (end-start)/2;
		
		//jika data yang dicari berada ditengah pada pencarian pertama
		if(arr[mid] == target)
			return mid;
		
		//jika data yang dicari lebih kecil nilainya dari mid
		// maka akan melakukan pencarian di kiri array, dan end point akan berubah mid-1
		if(arr[mid] > target)
			return binarySearch(arr, start, mid-1, target);
			
		//jika data yang dicari lebih besar dari nilainya dari mid
		//maka akan melakukan pencarian di kanan array, dan start point akan berubah mid+1
		return  binarySearch(arr,mid+1,end,target);
	}
	//jika data tidak ditemukan.
	return -1;
}
int main ()
{
	int arr[]={2,3,4,10,40};
	int n = sizeof(arr)/sizeof(arr[0]); //fungsi untuk meghitung panjang array; 1 elemen
	int target;
	cout << "Target : "; cin >> target;
	int result=binarySearch(arr,0,n-1,target);
	(result == -1)? cout << "Nilai yang dicari tidak terdapat pada Array"
				  : cout << "Nilai terdapat pada index array Ke-"<<result;
				  
	
	return 0;
}

