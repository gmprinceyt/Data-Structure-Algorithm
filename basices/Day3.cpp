#include <iostream>
using namespace std;

void fibonacci(int n)
{
    //! Fiboncci Serices;

    int i, last = 0, prev = 1, cerrent;
    if (n < 0)
        cout << "Please Enter Positive Number";
    cout << "Fibonacci Serices: ";
    if (n == 0)
        cout << last;
    if (n == 1)
        cout << prev;
    for (i = 3; i <= n; i++)
    {
        cerrent = last + prev;
        cout << cerrent << endl;
        last = prev;
        prev = cerrent;
    }
}

int main()
{
    ////? Practic Questions
    ////* Print number from 280 to 250 with the help of for loop.✅;

    //! for(int i = 280; i>=250; i=i-1){
    //    cout<<i<<endl;
    // }

    ////* Print char from ‘A’ to ‘Z’ with the help of a for loop.✅

    //! for(char i = 'A'; i<='Z'; i= i+1){
    //     cout<<i<<endl;
    // }

    ////*Print char from ‘Z’ to ‘A’ with the help of a for loop.✅

    // !for(char i='Z'; i>='A'; i=i-1){
    //     cout<<i<<endl;
    // }

    ////* There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.✅

    // int First = 220;
    // int limit = 730;
    // int Diffence = 7;

    // !for(int i =First; i<=limit; i=i+Diffence){
    //     cout<<i<<" ";
    // }
    // cout << endl;

    // //* Print Sum of square of first n natural number.✅

    // int n;
    // cout<<"Enter Number: ";
    // cin>>n;
    // int sum=0;
    // for(int i=1; i<=n; i++){
    //     !sum =sum + i*i;
    // }

    // cout << "Sum of squares of the first n natural numbers: " << sum << endl;

    // //* Print Sum of cube of first n natural number✅

    // int n;
    // cout<<"Enter Number: ";
    // cin>>n;
    // int sum= 0;
    // for(int i = 1; i<=n; i++){
    // !  sum += i*i*i;
    // }
    // cout<<sum<<" ";

    // //* Print n’th Fibonacci Number.✅
    // 0 1 1 2 3 5 8 13 21 34
    // int n, last = 0, prev = 1, cerrent, i;
    // cout << "Enter Number Of Items: ";
    // cin >> n;
    // if (n < 0)
    // {
    //     cout << "Enter Positive Numbber";
    //     return 0;
    // }
    // cout << "Your Fibonacci Series: ";
    // if (n == 0)
    //     cout << last;
    // if (n == 1)
    //     cout << prev;

    // for (i = 3; i <= n; i++)
    // {
    //     !cerrent = last + prev;
    //     last = prev;
    //     prev = cerrent;
    // }
    // cout << cerrent << " " << endl;

    // int n;
    // cout << "Enter Your Number: ";
    // cin >> n;
    // fibonacci(n);
    return 0;
}