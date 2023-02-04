#include <iostream>
using namespace std;

int isEven(int num){
    if(num & 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int number;
    cout <<" Enter a number :-";
    cin >> number;
    int returnedValue = isEven(number);
    if(returnedValue == 1){
        cout << "Odd";
    }
    else {
        cout << "Even";
    }
    
    return 0;
}