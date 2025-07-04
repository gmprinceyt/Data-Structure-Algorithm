#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool DiviedArraySum(vector<int> v){
    int n = v.size();

    //? Brute Force Approach O(n*2)
    // for (int i = 0; i < n-1; i++){
    //     int sum1 = 0; 
    //     for (int j = 0; j <= i; j++){
    //         sum1+=v[j];
    //     }

    //     int sum2 = 0; 
    //     for (int j = i+1; j < n; j++){
    //         sum2+=v[j];
    //     }

    //     if (sum1 == sum2) return 1;
    // }

    //? Optimize Approach
    int total_sum=0;
    for (int i = 0; i < n; i++){
        total_sum+=v[i];
    }

    int sum=0;
    for (int i = 0; i < n-1; i++){
        sum+=v[i];
        if (total_sum-sum == sum ) return 1;
    }


    return 0;
}

int main(){

    //! Problem -> Given Array and find the Divede sum Equel to subarray sum ;
    int n;
    cout << "Enter Your Vector Size: ";
    cin>>n;
    vector<int>v(n);

    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    int ans  = DiviedArraySum(v);
    cout << ans << endl;

}