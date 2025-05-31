#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int HomeWork(vector<int>arr)
{
    /*
            *Day 37/180 Vector in C++

            ?1. Prove that the average time Complexity of Push_back operation in Vector is O(1) time.
            ?2. How to find the number of Occurance of an element in a vector. You need to use STL here.
            ?3. How to find maximum and minimum elements from the vector. USE STL here.
            ?4. Find Lower bound and Upper Bound of a given element in a sorted vector. USE STL here to find them.
            ?5. How to pass a vector to a function. Write a small code for it.
    */

    //  ?1. Prove that the average time Complexity of Push_back operation in Vector is O(1) time.

    // Total copies: 1 + 2 + 4 + 8 + ... + n/2 = geometric series → < n

    // So, total cost of n insertions =
    // ✅ n (for basic insertions)
    // ➕ < n (for copies during reallocation)
    // ➡️ Total < 2n
    // Total cost for n push_back operations: < 2n

    // So, average cost per operation: < 2n / n = 2 = O(1)

    // Hence, the amortized time complexity of push_back is O(1).

    //?2. How to find the number of Occurance of an element in a vector. You need to use STL here.

    // vector<int>arr = {1,2,4,3,3,3,1,2};

    // int target;
    // cout << "Enter Your target Value Find Occurance: ";
    // cin >> target;

    // int Occurance = count(arr.begin(), arr.end(),target);
    // cout << target << "  Occurance is : " << Occurance << endl;

    // ?3. How to find maximum and minimum elements from the vector. USE STL here.
    // vector<int>arr = {1,23,4,1,2,90,88};

    // auto maximum = max_element(arr.begin(), arr.end());
    // cout << "maxumum Element in Vector: "<< *maximum << endl; 
    // auto minimum = min_element(arr.begin(), arr.end());
    // cout << "minimum Element in Vector: " << *minimum << endl;

    // ?4. Find Lower bound and Upper Bound of a given element in a sorted vector. USE STL here to find them.
    // vector<int>arr = {1,23,4,1,2,90,88};

    // sort(arr.begin(), arr.end()); 

    // int target;
    // cout << " Enter target To Find Lower Bound in Vector: ";
    // cin >> target;


    // auto lowerbound = lower_bound(arr.begin(), arr.end(),target);
    // cout << target << " lowerbound is: " << *lowerbound << endl;

    // // auto upperbound = upper_bound(arr.begin(),arr.end(), target);
    // // cout << target << "  upper Bound : " << *upperbound << endl;
    // ?5. How to pass a vector to a function. Write a small code for it.


    // Pass value in cerrent Function 

    // for(auto i : arr)
    // cout << i; // got it 


    return 0;
}

int main()
{

    //? Create Vector , declare
    // vector<int>arr={10,3};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;

    // //? Update Value
    // arr[0] = 2;
    // cout << arr[0] << endl;

    //? Vector Size and Capacity */
    // vector<int> v;

    // v.push_back(1); //* 1,1
    // v.push_back(3); //* 2,2
    // v.push_back(2); //* 3,4
    // v.push_back(1); //* 4,4
    // v.push_back(8); //* 5,8
    // cout << "Size Of Vector: " << v.size() << endl;
    // cout << "Capacity Of Vector: " << v.capacity() << endl;

    //?  Functions In Vector */

    // vector<int>arr;
    // // add elment
    // arr.push_back(12);
    // arr.push_back(20);
    // arr.push_back(23);
    // arr.push_back(22);
    // arr.push_back(29);

    // // delete last element
    // arr.pop_back();
    // // remove elment on position
    // arr.erase(arr.begin()+1);
    // cout << "Size Of Vector: " << arr.size() << endl;
    // cout << "Capacity Of Vector: " << arr.capacity() << endl;

    // // print vector
    // for (auto it = arr.begin(); it != arr.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // // insert new elment in array;
    // arr.insert(arr.begin()+1, 20);
    // // replace value;
    // // arr[1] = 20;

    // arr.clear(); // remove all Element
    // for (auto it = arr.begin(); it != arr.end(); it++){
    //     cout << *it << endl;
    // }
    // cout << "Size Of Vector: " << arr.size() << endl; //0
    // cout << "Capacity Of Vector: " << arr.capacity() << endl; // 8

    // copy vector printing
    // vector<int>arr;

    // arr.push_back(2);
    // arr.push_back(5);
    // arr.push_back(9);
    // arr.push_back(10);
    // arr.push_back(3);

    // // cout << arr.front(); //print first Element
    // // cout << arr.back(); // Print Last Element

    // vector<int>a;

    // a = arr; // Copy Value in 1 Vector to other
    // cout << "Vector A of Size: " << a.size() << endl;

    // //* Print Array In Sort Way
    // for( auto i : a)
    // cout << i;

    // Sorting In VEctor
    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(25);
    // arr.push_back(0);
    // arr.push_back(9);
    // arr.push_back(3);

    // // increasing Order sort a vector
    // sort(arr.begin(), arr.end());
    // for (auto i : arr)
    // cout << i << endl;

    // decreasing order
    // sort(arr.begin(), arr.end(), greater<int>());
    // for (auto i :arr)
    // cout << i << endl;

    // after Sort a vector i can fint element using binery search
    // cout << binary_search(arr.begin(), arr.end(), 25);

    // FInd VEctor Index using Find Function
    // cout << find(arr.begin(),arr.end(), 25)- arr.begin();

    // count value in parsent vector <find Dubulicate>
    // cout << count(arr.begin(), arr.end(), 25);


    vector <int>arr = {1,2,3,45,5};
    HomeWork(arr);
    return 0;
}