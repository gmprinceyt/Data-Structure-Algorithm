#include<iostream>
#include<vector>
using namespace std;

int remove(vector<int>A){

     int start=0,end=1;
     int n = A.size();
     while (end < n){
        if (A[start] == A[end]){
            A.erase(A.begin()+end);
            if (end == n-1) break;
            end++;
        } else {
            end++;
            start = end -1;
        }
    }
    return A.size();
}

int main(){
    // int n = 6;
    vector<int> A ={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3};


    cout<<remove(A);
}