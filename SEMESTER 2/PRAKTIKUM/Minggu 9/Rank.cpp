#include <iostream>
using namespace std;

struct data{
    string nama;
    int nilai, nim;
};

int main()
{
    int n, checking=0, cari;
    cin >> n;
    if (n<=0)
    {
        cout << "Error";
        exit(0);
    }
    
    data A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].nama;
        cin >> A[i].nim;
        cin >> A[i].nilai;
        if (A[i].nilai < 0 || A[i].nilai > 100)
        {
            cout << "Error";
            exit(0);
        }
        
    }
    cin >> cari;
    for (int i = 0; i < n; i++)
    {
        if (cari==A[i].nim)
        {
            checking=1;
            cout << A[i].nama << endl;
            cout << i;
        }
        
    }
    return 0;
}