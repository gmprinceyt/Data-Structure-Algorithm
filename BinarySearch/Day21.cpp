#include<iostream>
using namespace std;


int SqureFind(int n){
    //? leaner Search
    //* Time Compaxity is O(n); 
    // int ans = 0;
    // if (n < 2) return 0;
    // for (int i = 1; i < n; i++){
    //     if ( i * i == n){
    //         ans = i;
    //         break;
    //     } else if ( i * i < n){
    //         ans = i;
    //     }else {
    //         break;
    //     }
    // }  

    //? Binery Search 
    //* Time Com.. O(log n)
    int ans = 0;
    int start=0, end=n; 
    if (n < 2) return 0;
    while (start <= end){
        int mid = start + (end - start)/2;
        
        if (mid * mid == n){
            return mid;
        }
        else if (mid * mid < n){
            ans = mid;
            // right Side  
            start = mid + 1;
        } else {
            // Left Side  
            end = mid -1;
        }
        return ans;
    }




    return ans;
}


int main(){
    cout << "Enter Squre Number: ";
    int n;
    cin>> n;

    cout << SqureFind(n);
}