#include <iostream>
using namespace std;
#include <math.h>

char ConvertUpperCase(char ch)
{
    //* My approach
    // int cout=65;
    // for ( int i =97; i<=ch-1; i++ ) {
    //     cout++;
    // }
    // return cout;

    // Sir Best Approach
    char ans = ch - 'a' + 'A';
    return ans;
}

// my Approach sir best approch
int ArmStrongNumber(int n)
{
    // n=153
    int len = 0;
    int oth = n;

    while (oth)
    {
        len++;
        oth /= 10;
    }
    oth = n;
    int rem = oth % 10;
    int ans = 1;
    int ans1 = 1;
    int ans2 = 1;
    for (int i = 1; i <= len; i++)
    {
        ans *= rem; // 9  27
    }
    oth /= 10;
    rem = oth % 10;
    for (int i = 1; i <= len; i++)
    {
        ans1 *= rem; // 25  125
    }
    oth /= 10;
    rem = oth % 10;
    for (int i = 1; i <= len; i++)
    {
        ans2 *= rem;
    }

    return ans + ans1 + ans2;
}

// sir Approach
int ArmStrongNumberSir(int n)
{
    int num = n;
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    num = n;
    int ans = 0, rem;
    for (int i = 1; i <= count; i++)
    {
        rem = num % 10;
        ans = ans + pow(rem, count);
        num /= 10;
    }
    return ans;
}

int main()
{
    // char ch;
    // cout<<"Enter Charactor: ";
    // cin>>ch;
    // cout<<ConvertUpperCase(ch);

    // int n;
    // cout << "Enter Your Number: ";
    // cin >> n;
    // // cout << ArmStrongNumber(n); // Without in build Fucntion
    // int ans = ArmStrongNumberSir(n);

    // if (ans == n)
    //     cout<<"%d is an Armstrong number\n", n;
    // else
    //     cout<<"%d is not an Armstrong number\n", n;       

    return 0;
}