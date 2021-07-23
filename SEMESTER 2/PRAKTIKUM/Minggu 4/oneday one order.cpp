#include <iostream>
#include<math.h>
using namespace std;

struct koordinat
{
    int x, y;
};
int main()
{
    int a;
    cin >> a;
    if(a <= 0){
        cout<<"Error";
        exit(0);
    }

    int min = 0;
    int choice;

    koordinat data[a];

    int jarak;
    for (int i = 0; i < a; ++i)
    {
        cin >> data[i].x;
        cin >> data[i].y;

        jarak = sqrt(pow((data[i].x-0), 2) + pow((data[i].y-0), 2));

        if(jarak <= 0){
            cout<<"Error";
            exit(0);
        }

        if(i == 0)
            min = jarak;

        if(jarak < min)
        {
            min = jarak;
            choice = i;
        }
    }

    cout << data[choice].x << " ";
    cout << data[choice].y;

    return 0;
}