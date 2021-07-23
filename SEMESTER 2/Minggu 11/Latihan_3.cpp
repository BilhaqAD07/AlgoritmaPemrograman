#include <iostream>
using namespace std;

void hasil(int *luaran, int nilai) {
    if (nilai == 2) {
*luaran = *luaran + 1;
    }else{
        if((nilai%2 == 0) || (nilai%5 == 0))
            *luaran = *luaran + 1;
        hasil(luaran, nilai-1);
    }
}
int main() {
    int hasilLuaran = 0;
    hasil(&hasilLuaran, 20);
    cout << hasilLuaran << endl;
}
