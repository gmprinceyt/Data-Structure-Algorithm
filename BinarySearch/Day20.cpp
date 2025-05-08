#include<iostream>
using namespace std;

int ArraySearchDecresingOrder(int arr[] , int n){
    int target;
    cout << "Enter Target Valur To Find: ";
    cin>> target;

    int start=0, end=n-1, mid;

    while (start <= end){
        mid = (start + end)/2;
        if (arr[mid] == target ){
            return mid;
        } else if (arr[mid] < target){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[1000];
    int n ;
    cout << "Enter Array Element OF Size: ";
    cin >> n;
    cout << "Enter Array Values By Decresing Order: ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
   int result =  ArraySearchDecresingOrder(arr,n);
   cout << result;
}