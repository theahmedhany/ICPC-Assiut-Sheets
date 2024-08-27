#include<bits/stdc++.h>

using namespace std;

int main(){

  int power, monster;
  cin >> power >> monster;

  vector<pair<int, int>> arry(monster);

  for(int i = 0; i < monster; i++){
    cin >> arry[i].first;
    cin >> arry[i].second;
  }

  sort(arry.begin(), arry.end());

  for(int i = 0; i < monster; i++){
    if (power > arry[i].first) {
      power += arry[i].second;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

}