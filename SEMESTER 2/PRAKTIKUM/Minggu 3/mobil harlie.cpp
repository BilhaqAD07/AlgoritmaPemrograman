#include <iostream>
using namespace std;

struct data {
    string merk, tp, wrn;
    int pub;
};

int main ()
{
    int x;
    cin >> x;
    if (x <= 0) {
        cout << "Error";
        exit(0);
    }
    data z[x];
    for (int i = 0; i < x; i++) {
        cin >> z[i].merk;
        cin >> z[i].tp;
        if (z[i].tp != "sedan" && z[i].tp != "mini_bus" && z[i].tp != "pick_up") {
            cout << "Error";
            exit(0);
        }
        cin >> z[i].pub;
        if (z[i].pub <= 0) {
            cout << "Error";
            exit (0);
        }
        cin >> z[i].wrn;
        if (z[i].wrn != "hitam" && z[i].wrn != "putih") {
            cout << "Error";
            exit (0);
        }
    }
    cout << endl;
    for (int i = 0; i < x; i++) {
        cout <<"Merek mobil : "<< z[i].merk << endl;
        cout <<"Tipe mobil : "<<z[i].tp << endl;
        cout <<"Tahun terbit : "<<z[i].pub << endl;
        cout <<"Warna : "<< z[i].wrn << endl;
        cout << endl;
    }
    return 0;
}