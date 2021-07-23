#include <iostream>
#include <string>

using namespace std;

int main() {

  string kalimat;
  int vokal = 0, konsonan = 0, i;

  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  for (i = 0; i < kalimat.length(); i++) {
    char t = tolower(kalimat[i]);
    int as = t;

    if (as == 97 || as == 101 || as == 105 || as == 111 || as == 117)
      vokal++;
    else if (as > 97 && as <= 122)
      konsonan++;
  }

  cout << "Jumlah huruf vokal: " << vokal << "\n";
  cout << "Jumlah huruf konsonan: " << konsonan << "\n";
  return 0;
}