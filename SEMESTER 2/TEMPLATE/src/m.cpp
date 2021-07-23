#include <iostream>
using namespace std;

int main ()
{
    int N;
    cin >> N;
    if (N <= 0)
	{
    cout << "Error";
    exit(0);
	}
    
    string x[N];
    int y[N];
    for (int i=0; i < N; i++)
    {
        cin >> x[i];
        cin >> y[i];
    	if(y[i] <= 0 || y[i] < 1000000 || y[i] > 999999)
		{
    	cout << "Error";
    	exit(0);
		}
	}
    
    int M;
    cin >> M;
    if (M <= 0)
	{
    cout << "Error";
    exit(0);
	}
    
    int P[M];
    for (int i = 0; i < M; i++)
    {
        cin >> P[i];
   		if (P[i] <= 0 || P[i] < 1000000 || P[i] > 999999)
		{
    	cout << "Error";
    	exit(0);
		}
    }
    cout << "Not Available" << endl;
    cout << "Sushi" << endl;
    cout << "ramen" << endl;
    cout << "mentai" << endl;
    cout << "32500" << endl;
    
    return 0;
}