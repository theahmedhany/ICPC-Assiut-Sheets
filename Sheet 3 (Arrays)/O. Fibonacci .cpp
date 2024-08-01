#include<bits/stdc++.h>

using namespace std;

int main(){

  long long position;
  cin >> position;

  long long first = 0;
  long long second = 1;

  if (position == 1){
    cout << first << endl;
  } else if (position == 2) {
    cout << second << endl;
  } else {
    for (int i = 3; i <= position; i++){
      long long result = first + second;

      first = second;
      second = result;
    }

    cout << second << endl;
  }

}