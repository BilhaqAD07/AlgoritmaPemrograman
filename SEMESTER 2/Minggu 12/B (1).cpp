#include <iostream>
#include <string>

using namespace std;

int main() {

  string kalimat, kata;
  int i;
  bool ada = false;

  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  cout << "Masukkan kata: ";
  cin >> kata;

  int k_length = kata.length(), j = 0, c = 0;

  for (i = 0; i < kalimat.length(); i++) {

    if (kata[j] == kalimat[i]) {
      j++;
      c++;
    }
    else {
      if (c > 0)
        i--;
      j = 0;
      c = 0;
    }
    if (c == k_length) {
      ada = true;
      break;
    }
  }

  if (ada)
    cout << "Kata " << kata << " ditemukan.";
  else
    cout << "kata " << kata << " tidak ditemukan";

  cout << "\n";

  return 0;
}