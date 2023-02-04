#include <iostream>
using namespace std;
int main()
{
    int myArr[10] = {2, 3, 56, 33, 23, 12, 54, 2, 2, 9};
    int smallest = myArr[0];
    int largest = myArr[0];

    for (int i = 0; i < 10; i++)
    {
        if (myArr[i] > largest)
        {
            largest = myArr[i];           
        }
        for (int i = 0; i < 10; i++)
        {
            if (myArr[i] > largest)
            {
                largest = myArr[i];
            }
        }
    }

    cout << "The largest number is :-" << largest << endl;
    cout << "The smallest number is :-" << smallest << endl;

    return 0;
}