#include <iostream>
using namespace std;

void swap_alternate(int arr[] , int size){
    for (int j = 0; j < size; j+=2)
    {
        if(j + 1 < size){
            swap(arr[j] , arr[j + 1]);
        }
    }
    
}

void printingArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main()
{
    int arr[6] = {2, 4, 6, 7, 8, 97};

    cout << "Array before swaping alternatively" <<endl;
    printingArray(arr , 6);
    swap_alternate(arr , 6);
    cout << "Array after swaping " << endl;
    printingArray(arr , 6);
    return 0;
}