#include<iostream>
using namespace std;

//! Most Importent Questions

int main(){
    
    //? Book Allucation 
    int arr[4] = {12,34,67,90};
    int dis;
    cout << "Enter Distubution: ";
    cin>> dis;
    // Sum OF array 
    int sum=0;

    // Maxium Nummber in Array 
    int max = INT_MIN;
    for (int i = 0; i < 4; i++) {
        sum += arr[i];
        if (arr[i] > max){
            max = arr[i];
        }
    }

    int ans = -1;
    int str = max,end=sum;

    while (str <= end){
        int mid = str + (end - str)/2;
        int pages=0,count=1;
        for (int i = 0; i < 4; i++){
            pages += arr[i];
            if (pages > mid){
                count++;
                pages = arr[i];
            }
        }
        if (count <= dis){
            ans = mid;
            end = mid -1;
        } else {
            str = mid + 1;
        }
    }
    cout << ans << " Distibution " << dis;
    return 0;
}