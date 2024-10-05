#include <bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int number;

  vector<int> programming, maths, physical;

  for(int i = 1; i <= size; i++) {
    cin >> number;

    if(number == 1)
      programming.push_back(i);
    else if(number == 2)
      maths.push_back(i);
    else if(number == 3)
      physical.push_back(i);
  }

  int answer = min({maths.size(), programming.size(), physical.size()});

  cout << answer << endl;

  for(int i = 0; i < answer; i++) {
    cout << maths[i] << " " << programming[i] << " " << physical[i] << endl;
  }

}
