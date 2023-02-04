#include<iostream>
using namespace std;

//METHOD 1:-

// void array_reverse(int arr[]){
//    int temp;
//    for (int j = 0; j < 6/2; j++)
//    {
//       temp = arr[j];
//       arr[j] = arr[6 - 1 - j];
//       arr[6-j-1] = temp;
      
//    }
//    cout << endl;
   
// }

//METHOD 2:-

void array_reverse(int arr[] ,int size) {
   int start = 0;
   int end = size-1;

   while (start <= end)
   {
      swap(arr[start] , arr[end]);
      start ++;
      end --;
   }
   

}


void printArray(int arr[]){
   cout << endl;
   cout << "Array after reversing :" << endl;
   for (int k = 0; k < 6; k++)
   {
      cout << " " << arr[k];
   }

}

int main(){
   int arr[6] = {3,4,5,6,7,8};
   cout << "Array before reversing :-" << endl;
   for (int i = 0; i < 6; i++)
   {
      cout << " " << arr[i];
   }

   array_reverse(arr , 6);

   printArray(arr);
   
   
   return 0;
}