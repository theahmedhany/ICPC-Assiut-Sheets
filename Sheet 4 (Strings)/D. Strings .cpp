#include<bits/stdc++.h>

using namespace std;

int main() {

  string word_1, word_2;
  cin >> word_1 >> word_2;

  cout << word_1.size() << " " << word_2.size() << endl;
  cout << word_1 + word_2 << endl;

  swap(word_1[0], word_2[0]);

  cout << word_1 << " " << word_2 << endl;

}
