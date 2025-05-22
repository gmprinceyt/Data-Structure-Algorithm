#include <bits/stdc++.h>
using namespace std;

//? 1608. Special Array With X Elements Greater Than or Equal

int main() {
    vector<int> arr = {0,4,3,0,4};

    // Sort arrector (by default in ascending order)
    sort(arr.begin(), arr.end());

    int start=0, end = arr.size();
    while (start <= end){
        int x = (start + end)/2;
        int idx = lower_bound(arr.begin(), arr.end(), x) - arr.begin(); //! write your own Binary Search lowerbound Code
        int count = arr.size() - idx;

        if (count == x ){
            cout << x;
            break;
        } else if (x < count){
            start = x +1;
        } else{
            end = x -1;
        }
    }




}