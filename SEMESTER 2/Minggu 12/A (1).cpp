#include <iostream>

using namespace std;

int main() {

  int i;
  string kata;
  char k;
  bool ada = false;

  cout << "Masukkan kata: ";
  cin >> kata;

  cout << "Masukkan karakter yang mau dicek: ";
  cin >> k;

  for (i = 0; i < kata.length(); i++) {
    if (k == kata[i]) {
      ada = true;
      break;
    }
  }

  if (ada)
    cout << "Karakter " << k << " ditemukan.";
  else
    cout << "Karakter " << k << " tidak ditemukan.";

  cout << "\n";

  return 0;
}