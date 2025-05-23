#include<iostream>
using namespace std;

int main(){
    //? Search In Rotated Array || on Leedcode No. 80;

    int arr[10] = {4,5,6,6,7,0,1,2,4,4};
    // int arr[6] = {1,0,1,1,1,1};

    int start = 0,  end = 10;
    int target = 0;

    while (start <= end){
        //* skip Dublicate Elements
            // left
        while(start < end && arr[start] == arr[start+1]){
            start++;
        }
        while(start < end && arr[end] == arr[end-1]){
            end--;
        }

        int mid = start + (end - start )/2;

        if (arr[mid] == target ){
            cout << mid;
            break;
        } else if (arr[0] < arr[mid]){
            // left side Sorted 
            if (arr[start] <= target && arr[mid] >= target){
                end = mid - 1;
            } else 
                start = mid + 1;
        } else {
            // Right side Sorted
           if (arr[mid] <= target && arr[end] >= target){
            start = mid + 1;
           } else 
           end = mid - 1;
        }
    }

    return 0;
}