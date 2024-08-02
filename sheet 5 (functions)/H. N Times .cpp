#include <bits/stdc++.h>

using namespace std;

void Times(int times){

  for (int i = 0; i < times; i++){
		int number;
    string txt;

    cin >> number >> txt;

    for (int i = 0; i < number; i++){
      cout << txt << " ";
    }

    cout << endl;
  }

}

int main() {

  int times;
  cin >> times;

  Times(times);

}