#include<iostream>
using namespace std;

int fibonacciSeries(int a){
    if(a == 0 || a == 1){
        return a;
    }
    else {
        return (fibonacciSeries(a-1) + fibonacciSeries(a-2));
    }
}

int main(){
    int n;
    cout << "Enter the value of n :-";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
    cout << " " <<fibonacciSeries(i); 
    }
    return 0;
}