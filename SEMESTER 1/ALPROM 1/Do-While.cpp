#include <iostream>
using namespace std;

int main()
{
	int sum, i, n;
	
	cout <<"Masukkan nilai ->	";
	cin >> n;
	sum = 0; // Inisialisasi
	i = i; // First-element
	do {
		cout <<  i << endl;	// Aksi
		sum = sum + i;		// Aksi
		i = i + 1;			// Next-Element

	} while (i <= n);
	cout << "Jumlah'";
	cout << sum << endl;
	
	
	return 0;
}
