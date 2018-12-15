#include <iostream>
using namespace std;

int main() {
  string str;
  long int key, count;
  cout << "請輸入要加密(凱薩加密)的明文:";
  cin >> str;
  cout << "請輸入密鑰(每一字元要加多少):";
  cin >> key;
  cout << "\n密文為:";
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = (str[i] - 'A' + key) % 26 + 'A';
      cout << (char)str[i];
    }

    else if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = (str[i] - 'a' + key) % 26 + 'a';
      cout << (char)str[i];
    }

    else {
      cout << (char)str[i];
    }
  }
}
