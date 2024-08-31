#include<bits/stdc++.h>

using namespace std;

int main(){

  int size, moments = 0;
  cin >> size;

  int arry[size];
  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  int max_seen = 0;
  for (int i = 0; i < size; i++) {
    max_seen = max(max_seen, arry[i]);
    if (i + 1 == max_seen) {
      moments++;
    }
  }

  cout << moments << endl;

}
