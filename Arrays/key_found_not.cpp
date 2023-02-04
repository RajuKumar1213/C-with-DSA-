#include<iostream>
using namespace std;

bool search(int arr[] , int size , int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key){
            return 1;
        }
        
    }
    return 0;
    
}

int main(){
    int arr[10] = {1, 2,4 ,54, -23, -45, 43 , 4 , 12 ,13 };
    int key;
    cout << "Enter the number to search in this array:-";
    cin >> key;

    bool found = search(arr , 10 , key);

    if (found)
    {
        cout << "Key is present "<<endl;
    }
    
    else {
        cout << "Key is absent ";
    }
    return 0;
}