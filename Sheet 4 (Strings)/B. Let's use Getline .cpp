#include<bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  getline(cin , txt);

  for (int i = 0; i < txt.size(); i++){
    if (txt[i] == '\\'){
      break;
    }

    cout << txt[i];
  }

}