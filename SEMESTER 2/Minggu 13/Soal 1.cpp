#include <iostream>
using namespace std;

struct insert{
    int input;
};


int main()
{
    int N, temp;
    cout << "Masukkan banyak input : "; cin >> N;
    insert x[N];
    for(int i = 0; i < N; i++){
        cout << "Data ke-" << i+1 << " : ";
        cin >> x[i].input;
    }
    cout << endl;
    cout << "Sebelum Diurutkan : "; 
    for (int i = 0; i < N; i++){
        cout << x[i].input << " ";
    }
    cout << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i; j++){
            if (x[i].input < x[j].input)
            {
                temp=x[i].input;
                x[i].input = x[j].input;
                x[j].input=temp;
            }
        }
    }
    cout << "Setelah Diurutkan : "; 
    for (int i = 0; i < N; i++){
        cout << x[i].input << " ";
    }
    cout << endl;
    return 0;
}
//==============================SOAL 2==============================
