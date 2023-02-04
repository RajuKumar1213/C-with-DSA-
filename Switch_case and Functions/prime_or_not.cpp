#include<iostream>
using namespace std;

bool isPrime(int n) {
    for (int  i = 2; i <n-1; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
    
}

int main(){
    int n;
    cout << "Enter a number to check whether that number is prime or not:-";
    cin >> n;
    if(isPrime(n) == 0){
        cout << "Not a prime number";
    }
    else {
        cout << "Prime number";
    }
    return 0;
}