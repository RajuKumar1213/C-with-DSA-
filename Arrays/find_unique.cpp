#include<iostream>
using namespace std;

int find_unique(int arr[] ,int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    
    return ans;
}

int main(){
    int ans = 0;
    int arr[] = {2, 3, 1, 6, 3, 6, 2 };

    int lengthOfArr = sizeof(arr)/4;

    int uniqueNumber = find_unique(arr , lengthOfArr);
    cout <<"The unique number inside the array is :-" <<  uniqueNumber<< endl;

    return 0;
}