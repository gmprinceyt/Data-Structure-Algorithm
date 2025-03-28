#include <iostream>
using namespace std;

void lacturePractic()
{
    // Bubble Sorting in Array
    int arr[1000];
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    cout << "Enter your value: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!swapped)
            break;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void HomeWork()
{
    //? 1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.
    // int arr[1000];
    // int n;
    // cout << "Enter Array Size: ";
    // cin >> n;
    // cout << "Enter Your Values: ";

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = n-2; i >= 0; i--)
    // {
    //     bool swapped = false;
    //     for (int j = 0; j <= n-2; j++)
    //     {
    //         if (arr[j] < arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //             swapped = true;
    //         }
    //     }
    //     if (!swapped) break;
    // }

    //? 2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.

    // for (int i = 1; i < n; i++)
    // {
    //    bool swapped = false;
    //     for (int j = n-1; j >= i; j--)
    //     {
    //         if (arr[j - 1] > arr[j])
    //         {
    //             swap(arr[j], arr[j - 1]);
    //             swapped = true;
    //         }
    //     }
    //     if (!swapped) break;
    // }

    // cout << "Sorted Array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //? 3: Bubble Sort Algorithm to sort the array of char in ascending order.

    // char arr[100]; 
    // int n;
    // cout<<"Enter Array length: ";
    // cin>>n;
    
    // cout << "Enter Your charactors: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // for (int i = n-2; i >= 0; i--)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}

int main()
{
    //    lacturePractic();
    HomeWork();
}
