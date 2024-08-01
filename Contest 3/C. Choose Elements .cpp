#include<bits/stdc++.h>

using namespace std;

int main(){

  long long size , number;
  cin >> size >> number;

  long long arry[size];

  for (int i = 0; i < size; i++){
    cin >> arry[i];
  }
  
  sort(arry , arry + size);
  reverse(arry , arry + size);

  long long sum = 0;
  for (int i = 0; i < number; i++){

    if (arry[i] < 0){
      break;
    }

    sum += arry[i];

  }
	
  cout << sum;

}
