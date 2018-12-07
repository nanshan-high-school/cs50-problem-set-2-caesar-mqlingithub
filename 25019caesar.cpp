#include <iostream>
using namespace std;

int main() {
  string str;
  long int key, count;
  cout << "請輸入要加密(凱薩加密)的明文(不可有空格，會爆XD)(非字母不會加密喔!):";
  cin >> str;
  cout << "請輸入密鑰(每一字元要加多少)(同上):";
  cin >> key;
  cout << "\n密文為:";
  for (int i = 0; i < count; i++) {
    if (str[i] == '\0') count = 0;
    else if (str[i] > 'A' && str[i] < 'Z') {
      str[i] = (str[i] - 65 + key) % 26 + 65;
      cout << (char)str[i];
      count++;
    }

    else if (str[i] > 'a' && str[i] < 'z') {
      str[i] = (str[i] - 97 + key) % 26 + 97;
      cout << (char)str[i];
      count++;
    }

    else {
      cout << (char)str[i];
      count++;
    }
  }
}
