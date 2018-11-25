#include <iostream>
using namespace std;

int main() {
  string str;
  int key, count;
  cout << "請輸入要加密(凱薩加密)的明文(不可有空格，會爆XD)(非字母不會加密喔!):";
  cin >> str;
  cout << "請輸入要加密的字元數(含標點)(同上):";
  cin >> count;
  cout << "請輸入密鑰(每一字元要加多少)(同上):";
  cin >> key;
  cout << "\n密文為:";
  for (int i = 0; i < count; i++) {
    if (str[i] > 65 && str[i] < 90) {
      str[i] = (str[i] - 65 + key) % 26 + 65;
      cout << (char)str[i];
    }

    else if (str[i] > 97 && str[i] < 122) {
      str[i] = (str[i] - 97 + key) % 26 + 97;
      cout << (char)str[i];
    }

    else {
      cout << (char)str[i];
    }
  }
}
