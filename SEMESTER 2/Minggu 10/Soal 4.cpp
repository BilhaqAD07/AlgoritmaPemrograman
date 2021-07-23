#include <iostream>
using namespace std;

int sum=0;
int kuadrat(int N){
    if(sum==2)
        return 1;
    else 
    sum++;
    return N * kuadrat(N);
}

int main()
{
    int x;
    cout << "Masukkan Angka = ";
    cin >> x;
    cout << x << " pangkat 2 adalah " << kuadrat(x);
    
    return 0;
}
