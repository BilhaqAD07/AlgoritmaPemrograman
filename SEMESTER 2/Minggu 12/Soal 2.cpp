#include <iostream>
#include <string>
  
using namespace std;
  
bool find(string klmt, string kata)
{
    bool flag = false;
    int index = 0, i, help = 0;
    for (i = 0; i < klmt.size(); i++)
    {
        if (kata.at(index) == klmt.at(i))
        {
            if (flag == false)
            {
                flag = true;
                help = i;
            }
            index++;
        }
        else
        {
            flag = false;
            index = 0;
        }
        if (index == kata.size())
        {
            break;
        }
    }
    if ((i+1-help) == index)
    {
        return true;
        
    }
    return false;
    
}

int main(){
    string x;
    cout << "Input Kalimat terserah kamu : "; getline(cin, x);
    string kata;
    cout <<"''"<< x <<"''"<< endl;
    cout << "Kata yang ingin dicari : "; cin >>kata;
    int binari = find(x, kata);
    cout << endl;
   (binari==false)? cout << "Yah gada bro/sis"
                  : cout << "Asik ada katanya bro/sis";
    cout << endl;
    
    return 0;
}