#include <bits/stdc++.h>

using namespace std;

int main() {

  cin.tie(0);
  cout.sync_with_stdio(0);

  int size, result = -1;
  cin >> size;

  int arry[size];
  priority_queue<pair<int, int>> position;

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
    position.push({arry[i], i});
  }

  for (int i = 0; i < size; i++) {
    while (position.size() > 0 && position.top().first >= arry[i]) {
      result = max(result, position.top().second - i);
      position.pop();
    }
  }

  cout << result;

}
