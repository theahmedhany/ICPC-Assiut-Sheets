#include<bits/stdc++.h>

using namespace std;

int main (){

  int size;
  cin >> size;

  int number;
  int police = 0;
  int problem = 0;

  for (int i = 0 ; i < size; i++){

    cin >> number;

    if (number == -1 && police == 0){
      problem++;
    }else if (number == -1 && police != 0){
      police--;
    }else{
      police += number;
    }
  }

  cout << problem << endl ;

}