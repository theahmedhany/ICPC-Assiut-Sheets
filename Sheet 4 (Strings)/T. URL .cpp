#include<bits/stdc++.h>

using namespace std;

int main() {

  string txt;
  cin >> txt;

  int size = txt.size();

  for (int i = 0; i < size; i++){
    if (txt[i] == '?'){
      i++;

      while (i < size){
        if (txt[i] == '='){
          cout << ": ";
        } else if (txt[i] == '&') {
          cout << "\n";
        } else {
          cout << txt[i];
        }

        i++;
      }

      break;
    }
  }

}