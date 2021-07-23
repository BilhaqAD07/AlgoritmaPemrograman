#include <ctype.h>
#include <iostream>
using namespace std;


int main(){
    char kata;
    int vokal = 0, konsonan = 0;
    int space = 0, numerik = 0;
    cout << "Input kata : ";
    while((kata = getchar())!='\n')
    {
        konsonan++;
        if(toupper(kata) == 'A' || toupper(kata) == 'I' || toupper(kata) == 'U' || toupper(kata) == 'E' || toupper(kata) == 'O')
            vokal++;
        if(kata == ' ')
            space++;
        if(kata >= '0' && kata <= '9')
            numerik++;
    }
    konsonan -= (space + numerik + vokal);
    cout << "\tHasil :" << endl;
    cout << "\tVokal    : " << vokal << endl;
    cout << "\tKonsonan : " << konsonan << endl;
    cout << "\tNumerik  : " << numerik << endl;

    return 0;
}