#include <bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  cin >> txt;

  string sub_txt_1, sub_txt_2;
  string answer = txt;

  int size = txt.size();

  for (int i = 0; i < size - 1; i++) {
    sub_txt_1.push_back(txt[i]);
    sub_txt_2 = txt.substr(i + 1, size - i - 1);

    sort(sub_txt_1.begin(), sub_txt_1.end());
    sort(sub_txt_2.begin(), sub_txt_2.end());

    answer = min(answer, sub_txt_1 + sub_txt_2);
  }

  cout << answer << endl;

}
