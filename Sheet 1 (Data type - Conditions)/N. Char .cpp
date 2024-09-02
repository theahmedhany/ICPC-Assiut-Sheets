#include<bits/stdc++.h>

using namespace std;

int main() {

  char txt;
  cin >> txt;

  int txt_ascii = txt;

  if (txt_ascii >= 'A' && txt_ascii <= 'Z') {
    char result_txt = txt_ascii + 32;
    cout << result_txt;
  } else if (txt_ascii >= 'a' && txt_ascii <= 'z') {
    char result_txt = txt_ascii - 32;
    cout << result_txt;
  } else if (txt_ascii == 'z') {
    cout << "Z";
  } else if (txt_ascii == 'Z') {
    cout << "A";
  }

}