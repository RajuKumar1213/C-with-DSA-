#include<iostream>
using namespace std;

int ap(int n) {
    return (3 * n + 7);
}

int main(){
    int n;
    cout << "Enter the value of n :-";
    cin >> n;
    int apAnswer = ap(n);
    cout << "The answer is :-" << apAnswer;
    return 0;
}