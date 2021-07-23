#include <iostream>
using namespace std;

int deret(int n)
{
	if(n <= 1) return n;
	return n + deret(n-1);
}

int pangkat(int a, int b)
{
	if(b <= 1) return a;
	return a * pangkat(a, b-1);
}

void error()
{
	cout << "Error" << endl;
	exit(0);
}

int main()
{
	int n, a, b;
	string x;

	cin >> n;

	if(n <= 0) error();

	int hasil[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		if(x == "deret")
		{
			cin >> a;
			if(a <= 0) error();
			hasil[i] = deret(a);
		}
		else if(x == "pangkat")
		{
			cin >> a >> b;
			if(a <= 0 || b <= 0) error();
			hasil[i] = pangkat(a, b);
		}else{
			error();
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << hasil[i] << endl;
	}

	return 0;
}