#include <iostream>
using namespace std;

void lacturePractic()
{
    // insertion Sort
    int arr[1000];
    int n;
    cout << "Enter Array length: ";
    cin >> n;
    cout << "Enter Your value: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << "";
}

void HomeWorkQuestion()
{
    //? 1: Selection Sort Algorithm to sort the array of integers in decreasing order.

    int arr[1000];
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    cout << "Enter Array Of Value: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Algorithm

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }

    // Array Printing

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    // lacturePractic();
    HomeWorkQuestion();
}