#include<bits/stdc++.h>

using namespace std;

int main() {

  cin.tie(0);
  cout.sync_with_stdio(0);

  int size, flag = 0;
  cin >> size;

  int arry[size];
  vector<int> vasya;

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
    if (arry[i] == 0 || arry[i] == 100) {
      vasya.push_back(arry[i]);
    } else if (arry[i] >= 1 && arry[i] <= 9 && !flag) {
      vasya.push_back(arry[i]);
      flag = 1;
    }
  }

  if (flag) {
    for (int i = 0; i < size; ++i) {
      if (arry[i] >= 10 && arry[i] < 100 && arry[i] % 10 == 0) {
        vasya.push_back(arry[i]);
        break;
      }
    }
  } else {
    for (int i = 0; i < size; ++i) {
      if (arry[i] >= 10 && arry[i] < 100) {
        vasya.push_back(arry[i]);
        break;
      }
    }
  }

  cout << vasya.size() << endl;

  for (int i = 0; i < vasya.size(); i++) {
    cout << vasya[i] << " ";
  }

}
