#include <bits/stdc++.h>

using namespace std;

int main(){

  long long seet;
  cin >> seet;

  long long row = seet / 4;
  long long column;

  if (row % 2 == 0) {
    column = seet % 4;
  } else {
    column = 3 - (seet % 4);
  }

  cout << row << " " << column;

}
