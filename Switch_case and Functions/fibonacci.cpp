#include<iostream>
using namespace std;

int fibonaccNumber(int n){

    int a = 0;
    int b = 1;
    int fib = 0;

    for (int  i = 0; i < n; i++)
    {
        a = b;
        b = fib;
        fib = a + b;


    }
    return fib;

}

int main(){
    int n;
    cout << "Enter the value of n :-";
    cin >> n;
    cout << fibonaccNumber(n);
    return 0;
}