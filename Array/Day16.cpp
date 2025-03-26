// Sorting in Array

#include <iostream>
using namespace std;

void lacturePractic()
{
    //? Array Selection Sorting 
    int arr[6] = {10, 8, 2, 3, 1, 4};

    for (int i = 0; i < 6-1; i++)
    {
        int in = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[in])
                in = j;
        }
        swap(arr[in], arr[i]);
    }

    for (int i = 0; i < 6; i++) cout<<arr[i];
}

int main()
{
    lacturePractic();
}