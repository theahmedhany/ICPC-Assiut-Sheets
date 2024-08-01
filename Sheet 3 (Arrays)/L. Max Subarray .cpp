#include<bits/stdc++.h>

using namespace std;

int main (){

  int size;
  cin >> size;

  while (size--){
    int number;
    cin >> number;

    int arry[number];

    for (int i = 0; i < number; i++){
      cin >> arry[i];
    }

    for (int ii = 0; ii < number; ii++){
      cout << arry[ii] << " ";

      int maximum = arry[ii];

      for (int iii = ii + 1; iii < number; iii++){
        maximum = max(maximum, arry[iii]);

        cout << maximum << " ";
      }
    }

    cout << endl;
  }

}
