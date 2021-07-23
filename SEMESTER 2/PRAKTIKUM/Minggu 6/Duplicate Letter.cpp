#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string & hapus(string& kata)
{
  int panj = kata.panj();
  for(int i = 0; i < panj; i++)
  {
    char currChar = kata[i];
    for(int j = i+1; j < panj; j++)
    {
      if(currChar == kata[j])
        kata.erase (remove(kata.begin()+j, kata.end(), kata[j]), kata.end());
    }
  }
  return kata;
}

int main()
{
  string x;
  getline(cin, x);
  x = hapus(x);
  cout << x;
}