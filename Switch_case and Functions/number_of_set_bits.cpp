#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number to conver decimal to banary" << endl;
    cin >> n;
    int enteredNumber = n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i) + ans);
        n = n >> 1;
        i++;
    }
    cout << "The binary of " << enteredNumber << ":-" << ans;

    return 0;
}