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
        if(x[i].input<0||x[i].input>100){
            cout <<"Error";
            exit(0);
        }
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
        cout << x[i].input << " ";
    }
    return 0;
}
