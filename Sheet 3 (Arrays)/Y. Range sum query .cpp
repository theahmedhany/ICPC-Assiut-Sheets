#include<bits/stdc++.h>

using namespace std;

int main(){

  long long size, range;
  cin >> size >> range;

  long long first_arry[size];
  long long second_arry[size];

  for (int i = 0; i < size; i++){
    cin >> first_arry[i];

    if (i == 0){
      second_arry[i] = first_arry[i];
    } else {
      second_arry[i] = first_arry[i] + second_arry[i - 1];
    }
  }

  while (range--){
    long long start, end;
    cin >> start >> end;

    start--;
    end--;

    long long sum = second_arry[end] - second_arry[start] + first_arry[start];

    cout << sum << endl;
  }

}
