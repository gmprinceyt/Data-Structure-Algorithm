#include <iostream>
using namespace std;

int main()
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
