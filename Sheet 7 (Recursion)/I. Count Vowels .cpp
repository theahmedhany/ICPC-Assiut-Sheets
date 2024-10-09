#include<bits/stdc++.h>

using namespace std;

string txt;
int txt_size;

int countVowels(int index) {

  if (index == txt_size) {
    return 0;
  }

  char value = tolower(txt[index]);

  int answer = 0;
  if (value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u') {
    answer++;
  }

  return answer + countVowels(index + 1);

}

int main() {

  getline(cin, txt);

  txt_size = txt.size();

  cout << countVowels(0) << endl;

}
