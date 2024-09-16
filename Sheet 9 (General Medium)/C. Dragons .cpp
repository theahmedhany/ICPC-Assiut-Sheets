#include<bits/stdc++.h>

using namespace std;

int main() {

  int power, monsters_number;
  cin >> power >> monsters_number;

  vector<pair<int, int>> monsters(monsters_number);

  for (int i = 0; i < monsters_number; i++) {
    cin >> monsters[i].first >> monsters[i].second;
  }

  sort(monsters.begin(), monsters.end());

  for (int i = 0; i < monsters_number; i++) {
    if (power > monsters[i].first) {
      power += monsters[i].second;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

}
