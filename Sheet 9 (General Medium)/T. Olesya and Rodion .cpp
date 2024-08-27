#include<bits/stdc++.h>

using namespace std;

int main(){

  int size , divide;
  cin >> size >> divide;

  string result = "";

  if (size < 2 and divide == 10){
    cout << -1 << endl;
  } else if (size >= 2 and divide == 10) {
    for (int i = 0; i < size - 1; i++){
      result += 1 + '0';
    }
    
    result += 0 + '0';
    cout << result << endl;
  } else {
    for (int i = 0; i < size; i++){
      result += divide + '0';
    }

    cout << result << endl;
  }

}