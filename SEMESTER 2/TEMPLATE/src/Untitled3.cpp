#include <iostream>
using namespace std;

struct insert{
    int input;
};


int main()
{
    int N, temp;
    cin >> N;
    if(N<=0){
        cout << "Error";
        exit(0);
    }
    insert x[N];
    for(int i = 0; i < N; i++){
        cin >> x[i].input;
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i; j++){
            if (x[i].input > x[j].input)
            {
                temp=x[i].input;
                x[i].input = x[j].input;
                x[j].input=temp;
            }
        }
    }
    for (int i = 0; i < N; i++){
        if (x[i].input==(i%2==0))
        {
            cout << x[i].input << endl;
        }else
            cout << x[i].input << endl;
        
    }
    return 0;
}
