#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){

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
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(25);
    arr.push_back(0);
    arr.push_back(9);
    arr.push_back(3);

    // increasing Order sort a vector
    sort(arr.begin(), arr.end());
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



    return 0;


}