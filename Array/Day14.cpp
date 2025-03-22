#include <iostream>
using namespace std;

void HomeWorkProblem()
{
    //? 1: Take 20 elements from user input and find its sum with the help of an array.

    // int size = 20; // Size Of The Array
    // int arr[size]; // Store Value in Array
    // int sum = 0; // Variable To store the Sum
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter number " << i + 1 << ": ";
    //     cin >> arr[i]; // Input each number into the array
    //     sum+=arr[i]; // Add the number to the sum

    // }
    // cout << "The sum of the 20 numbers is: " << sum << endl;

    //? 2: Calculate the average of elements in an array of size 18.

    //     int size = 18; // Size of Array
    //     int arr[size]; // Array
    //     int sum = 0; // Variable For Sore Sum Values

    //     for ( int i = 0; i < size; i++)
    //     {
    //         cout<<"Enter Number "<< i + 1 << ": ";
    //         cin>>arr[i]; // Input
    //         sum += arr[i]; // Calculate Sum Of Array
    //     }
    //    cout << "Average: " << sum / size << endl; // Here Average?

    //? 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

    //     // What I will Do;
    //     // 1 ask the size from User
    //     // 2 add the value in array given by User
    //     // 3 Ask the value by User
    //     // 4 then Return index of array based on Value

    //     int size, target;
    //     cout << "Enter Your Array Size: ";
    //     cin >> size;

    //     int arr[size];

    //     for (int i = 0; i < size; i++)
    //     {
    //         cout << "Enter Number " << i + 1 << ": ";
    //         cin >> arr[i];
    //     }

    //     cout << "Enter Value For Find Index: ";
    //     cin >> target;
    //     int index = -1;
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (arr[i] == target)
    //         {
    //             index = i;
    //                break;
    //         }
    //     }

    //     cout << "Here index: " << index << endl;

    //? 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

    // // find Array Size
    //// int size = sizeof(arrChar)/sizeof(arrChar[0]);
    //// char arrChar[] = {'a','b','c','d','e','f','g','h','i','j','k','l','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    // int size = 26;
    // char arr[size];

    // for ( int i = 0; i < size; i++)
    // {
    //     arr[i] = 'a' + i;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout <<arr[i] << endl;
    // }

    //? 5:Find the second largest element in an array of unique elements of size n. Where n>3.

    //    You are asked to find the second largest element in an array that has:
    // ✅ Unique elements – No element repeats in the array.
    // ✅ Size greater than 3 – The array has at least 4 elements.

    //     int arr[5] = {10, 5, 8, 20, 15};
    //     int largest = INT_MIN;
    //     int second = INT_MIN;

    //     for (int i = 0; i < 5; i++)
    //     {
    //         if (arr[i] > largest)
    //         {
    //             second = largest;
    //             largest = arr[i];
    //         } else if (arr[i] > second && arr[i] != largest ) second = arr[i];
    //     }

    //     cout << second << endl;

    //? 6: Find the third smallest element in an array of unique elements size n. Where n>3.

    int arr[5] = {4,7,2,9,3};
    int small = INT_MAX;
    int second = INT_MAX;
    int third = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < small)
        {
            third = second;
            second = small;
            small = arr[i];
        } else if ( arr[i] < second && arr[i] != small)
        {
            third = second;
            second = arr[i];
        }
    };

    cout << third << endl;

    //? 7: What is Byte addressable?
}

int main()
{

    //* Basic In Array

    // int arr[5] = {2,3,5,3,5}; // declear

    // // Print Array
    // for(int i=0; i<5; i++ )
    // {
    //     cout<<arr[i];
    // }

    //* How To Find Array lenght;

    // int arr[5] = {1,2,4,6,8};
    // // Array Size
    // cout<<sizeof(arr)<<endl;

    // // Array Lenght
    // cout<<sizeof(arr)/sizeof(arr[0]);

    // * How To Add value in Array

    // int name[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> name[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << name[i];
    // }

    //* Find Mixmium value in Array

    // int a[5] = {1,4,5,6,7};

    // int ans = INT_MIN;
    // for(int i =0; i< 5; i++){
    //     if ( a[i] > ans) {
    //         ans = a[i];
    //     }
    // }
    // cout<<ans;

    //* Find Minmium value in Array

    // int a[5] = {16, 8, 4, 32, 1};

    // int ans = INT_MAX;

    // for (int i = 0; i < 5; i++)
    // {
    //     if (a[i] < ans)
    //     {
    //         ans = a[i];
    //     }
    // }
    // cout<<ans;
    HomeWorkProblem();
    return 0;
}