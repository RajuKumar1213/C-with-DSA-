#include<iostream>
using namespace std;

int printArray(int array[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout << " " << array[i] ;
    }
    
    cout << " printing done " << endl;
}

int main(){
    
    int first[12] = {0};
    printArray(first , 10);
    int second[10] = {1};
    printArray(second , 10);
    return 0;
}