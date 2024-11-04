#include<bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  cin >> txt;

  string arry[1000];

  int left_counter = 0, right_counter = 0;
  int index = 0;

  string answer = "";

  for (int i = 0; i < txt.size(); i++) {
    if (txt[i] == 'L') {
      left_counter++;
    } else {
      right_counter++;
    }

    answer.push_back(txt[i]);

    if (left_counter == right_counter) {
      arry[index] = answer;
      answer.clear();
      index++;
      left_counter = 0;
      right_counter = 0;
    }
  }

  cout << index << endl;

  for (int i = 0; i < index; i++) {
    cout << arry[i] << endl;
  }

}
