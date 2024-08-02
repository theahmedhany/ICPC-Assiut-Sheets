#include<bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  getline(cin, txt);

  int counter = 1;
  bool flag = true;

  for (int i = 1; i < txt.size(); i++){
    if (isalpha(txt[i])){
      if (not flag){
        counter++;
      }

      flag = true;
    } else {
      flag = false;
    }
  }

  cout << counter << endl;

}