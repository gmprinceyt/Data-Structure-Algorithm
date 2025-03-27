// Sorting in Array

#include <iostream>
using namespace std;

void lacturePractic()
{
    //? Array Selection Sorting
    int arr[1000];
    cout << "Enter Array Size: ";
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter " << i << " index: ";
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int in = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[in])
                in = j;
        }
        swap(arr[in], arr[i]);
    }

    for (int i = 0; i < 6; i++)
        cout << arr[i];
}

void HomeWorkPractic()
{
    //? 1: Selection Sort Algorithm to sort the array of integers in decreasing order.
    int arr[6] = {2, 1, 6, 8, 3, 10};

    for (int i = 0; i < 6 - 1; i++)
    {
        int in = i;
        for (int j = i+1; j < 6; j++)
        {

            if (arr[in] < arr[j])
                in = j;
        }
        swap(arr[i], arr[in]);
    }

    //? 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

    



    for (int i = 0; i < 6; i++) cout << arr[i];
}

int main()
{
    // lacturePractic();
    HomeWorkPractic();
}