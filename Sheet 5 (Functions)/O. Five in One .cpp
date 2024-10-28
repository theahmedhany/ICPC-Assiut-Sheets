#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(int size) {

  int original = size;
  int reversed = 0;

  while (original > 0) {
    reversed = reversed * 10 + original % 10;
    original /= 10;
  }

  return size == reversed;

}

bool isPrime(int number) {

  if (number <= 1) return false;
  if (number == 2) return true;
  if (number % 2 == 0) return false;

  for (int i = 3; i * i <= number; i += 2) {
    if (number % i == 0) return false;
  }

  return true;

}

int divisorCount(int size) {

  int count = 0;

  for (int i = 1; i * i <= size; i++) {
    if (size % i == 0) {
      count++;
      if (size / i != i) count++;
    }
  }

  return count;

}

int main() {

  int size;
  cin >> size;

  int arry[size];
  for (int i = 0; i < size; i++)
    cin >> arry[i];

  int max_value = arry[0];
  int min_value = arry[0];

  int palindrome_count = 0;
  int prime_count = 0;
  int max_divisors = 0;
  int answer = 0;

  for (int i = 0; i < size; i++) {
    max_value = max(arry[i], max_value);
    min_value = min(arry[i], min_value);

    palindrome_count += isPalindrome(arry[i]);
    prime_count += isPrime(arry[i]);

    int divisors = divisorCount(arry[i]);

    if (divisors == max_divisors) {
      answer = max(answer, arry[i]);
    } else if (divisors > max_divisors) {
      answer = arry[i];
      max_divisors = divisors;
    }
  }

  cout << "The maximum number : " << max_value << endl;
  cout << "The minimum number : " << min_value << endl;
  cout << "The number of prime numbers : " << prime_count << endl;
  cout << "The number of palindrome numbers : " << palindrome_count << endl;
  cout << "The number that has the maximum number of divisors : " << answer << endl;

}
