#include <iostream>
#include <math.h>
using namespace std;

int main() {
  // QUESTION 1

  // int n;
  // int multiple = 1;
  // int sum = 0;
  // cout << "Enter a number :-" << endl;
  // cin >> n;

  // while (n != 0) {
  //   int rem = n % 10;
  //   multiple = multiple * rem;
  //   sum = sum + rem;

  //   n = n / 10;
  // }

  // int answer = multiple - sum;
  // cout << "The required answer is " << answer;

  // QUESTION 2:- CONVERTING DECIMAL TO BINARY

  // int n;
  // cout << "Enter a number to conver decimal to banary" << endl;
  // cin >> n;
  // int enteredNumber = n;
  // int ans = 0;
  // int i = 0;
  // while (n != 0) {
  //   int bit = n & 1;
  //   ans = (bit * pow(10, i) + ans);
  //   n = n >> 1;
  //   i++;
  // }
  // cout << "The binary of " << enteredNumber << ":-" << ans;

  // CONVERTING BINARY TO DECIMAL

  // int n;
  // cout << "Enter binary number to convert it into decimal:-" << endl;
  // cin >> n;
  // int binary = n;
  // int i = 0, ans = 0;
  // while (n != 0) {
  //   int digit = n % 10;
  //   if (digit == 1) {
  //     ans = ans += pow(2, i);
  //   }
  //   n = n / 10;
  //   i++;
  // }
  // cout << "The binary of the " << binary << " is :- " << ans;

  // REVERSING THE INTEGER
  // int n;
  // cout << "Enter a number to reverse that number :-" << endl;
  // cin >> n;
  // int number = n;
  // int ans = 0;
  // int i = 0;
  // while (n != 0) {
  //   int digit = n % 10;
  //   ans = (ans * 10 + digit);
  //   n = n / 10;
  // }

  // cout << "the reverse of the " << number << " is :-" << ans;

  return 0;
}