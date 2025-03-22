#include <iostream>
using namespace std;

void lactureProblem()
{
    //? Search Element in Array
    //// int size = 6;
    // int arr[6] = {10, 20, 7, 11, 8, 4};

    // int size = sizeof(arr) / sizeof(arr[0]);
    // int target;
    // cout<<"Enter Value TO Find Element: ";
    // cin>>target;

    // int index = -1;
    // for (int i = 0; i < size; i++)
    // {
    //     if (target == arr[i])
    //     {
    //         index =i;
    //         break;
    //     }
    // }
    // cout << "Here Index Value: " << index << endl;

    //? Reverse Array

    // int arr[6] = {1, 2, 3, 4, 5, 6};
    // int temp[6];

    // int j = 0;
    // // copy array value in temp with reverse
    // for (int i = 5; i >= 0; i--)
    // {
    //     temp[j] = arr[i];
    //     j++;
    // }
    // // insert reversed value in orignal Array
    // for (int i = 0; i < 6; i++)
    // {
    //     arr[i] = temp[i];
    // }
    // //Print Array
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i];
    // }

    //! Second And Best Approach To Solve This Problem

    // int arr[6] = {1, 2, 5, 6, 8, 5};
    // int start = 0;
    // int end = 5;

    // while (end > start)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    // for (int i = 0; i < 6; i++) cout << arr[i];

   //? Find Second Largest Element

    int arr[5] = {1,2,3,4,5};
    int largest = INT_MIN;
    int second = -1;

    for (int i = 0; i < 5; i++)
    if (arr[i] > largest) largest = arr[i];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < largest)
        second = max(second , arr[i]);
    }
    // for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << second << " ";
}

int main()
{
    lactureProblem();
    // HomeWorkProblem();
}