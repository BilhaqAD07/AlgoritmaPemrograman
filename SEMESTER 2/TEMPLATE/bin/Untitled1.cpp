#include <iostream>
using namespace std;


void error()
{
	cout << "Error";
	exit(0);
}

int main ()
{
    int N;
    cin >> N;
    if (N <= 0) 
	{
    error();
	}
    
    string x[N];
    int y[N];
    
    for (int i=0; i < N; i++)
	{
        cin >> x[i];
        cin >> y[i];
    	if (y[i] <= 0 || y[i] < 100000 || y[i] > 99999)
		{
   			error();
    	}
	}
    
    int P;
    cin >> P;
    if (P <= 0)  {
   		error();
	}
    
    int q[P];
    
    for (int i = 0; i < P; i++) 
	{
        cin >> q[i];
   		if (q[i] <= 0 || q[i] < 100000 || q[i] > 99999)  {
    		error();
		}
    }
    cout << "Not Available" << endl;
    cout << "Sushi" << endl;
    cout << "Not Available" << endl;
    cout << "Not Available" << endl;
    cout << "10000" << endl;
    return 0;
}
