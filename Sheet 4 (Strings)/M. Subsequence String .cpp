#include<bits/stdc++.h>

using namespace std;

int main() {

  string hello = "hello";
  int index = 0;

  string txt;
  cin >> txt;

  for (int i = 0; i < txt.size() && index < 5; i++){
    if (txt[i] == hello[index]){
      index++;
    }
  }

  if (index == 5){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}