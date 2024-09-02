#include<bits/stdc++.h>

using namespace std;

int main() {

  long long days_number;
  cin >> days_number;

  int year = days_number / 365;
  int remaining_days = days_number - (year * 365);
  int month = remaining_days / 30;
  int day = remaining_days - (month * 30);

  cout << year << " years\n";
  cout << month << " months\n";
  cout << day << " days\n";

}
