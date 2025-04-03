#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        // mid
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
            break;
        }
        else if (target > arr[mid])
            // Right
            start = mid + 1;
        else
            // Left
            end = mid - 1;
    }
    return -1;
}

void lactureWork()
{
    //? Binary Search
    int arr[1000];
    int n, target;
    cout << "Enter The Size Of Array Element: ";
    cin >> n;

    cout << "Enter The Element of Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter Target Element: ";
    cin >> target;
    9065214997

    cout << BinarySearch(arr, n, target) << endl;
}


void HomeWorkPractic()
{
    //? 1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

    int arr[1000];
    int n;
    cout << "Enter Size of Array Element: ";
    

}


int main()
{
    // lactureWork();
    HomeWorkPractic();
}
