#include <iostream>
using namespace std;

// // int BinarySearch(int arr[], int n, int target)
// // {
// //     int start = 0, end = n - 1, mid;

// //     while (start <= end)
// //     {
// //         // mid
// //         mid = (start + end) / 2;
// //         if (arr[mid] == target)
// //         {
// //             return mid;
// //             break;
// //         }
// //         else if (target > arr[mid])
// //             // Right
// //             start = mid + 1;
// //         else
// //             // Left
// //             end = mid - 1;
// //     }
// //     return -1;
// // }

// // void lactureWork()
// // {
// //     //? Binary Search
// //     int arr[1000];
// //     int n, target;
// //     cout << "Enter The Size Of Array Element: ";
// //     cin >> n;

// //     cout << "Enter The Element of Array: ";
// //     for (int i = 0; i < n; i++)
// //         cin >> arr[i];
// //     cout << "Enter Target Element: ";
// //     cin >> target;

// //     cout << BinarySearch(arr, n, target) << endl;
// // }

// int BinarySearchDicreasing(int arr[], int n, int target)
// {
//     int left = 0, right = n - 1, mid;

//     while (left <= right)
//     {
//         mid = (left + right) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] < target)
//         {
//             right = mid - 1;
//         }
//         else
//         {
//            left = mid + 1;
//         }
//     }
//     return -1;
// }

// void HomeWorkPractic()l1
// {
//     //? 1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

//     int arr[1000];
//     int n;
//     cout << "Enter Size of Array Element: ";
//     cin >> n;

//     cout << "Enter the Value Of Array: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int target;
//     cout << "Enter targeted Value of Array: ";
//     cin >> target;

//     int result = BinarySearchDicreasing(arr, n, target);
//     cout << result << endl;
// }

void leetcodeQuestion()
{
    //? 34. Find First and Last Position of Element in Sorted Array

    int arr[6] = {5,7,7,8,8,10};

    int target;
    cout << "Enter target Value: ";
    cin >> target;
    int start=0, end=5, mid=0;
    int first=-1,last=-1;

    while (start <= end)
    {
        mid = (end + start)/2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        } else if (arr[mid] > target )
        {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    start=0, end=5, mid=0;
    while (start <= end)
    {
        mid = (end + start)/2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        } else if (arr[mid] > target )
        {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout << first << last << endl;
 
}

int main()
{
    // lactureWork();
    // HomeWorkPractic();
    leetcodeQuestion();
}
