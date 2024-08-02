#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  string txt;
  cin >> txt;

  int sum = 1;

  for (int i = 0; i < size - 1; i++){
    if (txt[i] != txt[i + 1]){
      sum++;
    }
  }

  cout << sum << endl;

}