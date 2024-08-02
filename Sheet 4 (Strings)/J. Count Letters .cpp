#include<bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  cin >> txt;

  int arry[26];

  for (int i = 0; i < 26; i++){
    arry[i] = 0;
  }

  int size = txt.size();

  for (int i = 0; i < size; i++){
    int index = txt[i] - 'a';
    arry[index]++;
  }

  for (int i = 0; i < 26; i++){
    if (arry[i] != 0){
      cout << char(i + 'a') << " : " << arry[i] << endl;
    }
  }

}