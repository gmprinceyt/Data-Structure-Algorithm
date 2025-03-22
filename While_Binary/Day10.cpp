#include <iostream>
using namespace std;

void VideoPractic()
{
    //! Decimal To Binary

    // Famula of Reverse Value
    // ?ans = rem * 10*i + ans;

    // int num ,rem, ans=0, i=1;
    // cout<<"Enter Your Decimal Number: ";
    // cin>>num;

    // while(num>0){
    //     rem=num%2;
    //     num/=2;
    //     ans += rem*i;
    //     i*=10;
    // }
    // cout<<ans<<endl;

    //! Binary To Decimal

    //? ans += rem * i;  = falmula for Binary To Decimal

    // int num, ans = 0, rem, i = 1;
    // cout<<"Enter Your Number: ";
    // cin>>num;

    // while (num > 0)
    // {
    //     rem = num % 10;
    //     num /= 10;
    //     ans += rem * i;
    //     i *= 2;
    // }
    // cout << ans << endl;

    // //! Octal => Decimal (0,1,2,3,4,5,6,7) => Octal Vale => 8 Base of Octal Value 

    // int num, ans=0, mul=1,rem;
    // cout << "Enter Your Octal Number: ";
    // cin >> num;

    // while(num)
    // {
    //     rem = num % 10;
    //     num /= 10;
    //     ans += rem * mul;
    //     mul *= 8;
    // }
    // cout << ans << endl;
}

void HomeWorkPractic()
{
    //! Write a program to convert binary numbers to decimal numbers using a for loop.
    // int num , rem, ans=0,mul=1;
    // cout<<"Enter Your Number: ";
    // cin>>num;

    // for(int i =0; i<num; ){
    //     rem = num%10;
    //     num /=10;
    //     ans += rem*mul;
    //     mul*=2;
    // }
    // cout<<ans<<endl;

    //! Write a program to convert decimal numbers to binary numbers using a for loop.

    // int num, rem, ans = 0, mul = 1;
    // cout << "Enter Your Number: ";
    // cin >> num;

    // for (int i = 0; i < num;)
    // {
    //     rem = num % 2;
    //     num /= 2;
    //     ans += rem * mul;
    //     mul *= 10;
    // }
    // cout << ans << endl;

    //! Write a program to convert decimal numbers to Octal numbers.

    //* Octal value = (0,1,2,3,4,5,7) base=8;

    // int num, rem, ans = 0, mul = 1;
    // cout << "Enter Your Number: ";
    // cin >> num;

    // while (num)
    // {
    //     rem = num % 8;
    //     num /= 8;
    //     ans += rem * mul;
    //     mul *= 10;
    // }
    // cout << ans << endl;

    //! Write a program to convert Octal numbers to decimal numbers.

    // int num, rem, ans = 0, mul = 1;
    // cout << "Enter Your Number: ";
    // cin >> num;

    // while(num){
    //     rem = num%10;;
    //     num/=10;
    //     ans += rem*mul;
    //     mul*=8;
    // }
    // cout << ans << endl;

    //! Write a program to convert binary to Octal numbers

    //* binary --> decimal --> octal

    // int num, rem, ans = 0, mul = 1;
    // cout << "Enter Your Number: ";
    // cin >> num;

    // while (num)
    // {
    //     rem = num % 10;
    //     num /= 10;
    //     ans += rem * mul;
    //     mul *= 2;
    // };
    // num = ans;
    // ans = 0;
    // mul = 1;
    // while (num)
    // {
    //     rem = num % 8;
    //     num /= 8;
    //     ans += rem * mul;
    //     mul *= 10;
    // }
    // cout << ans << endl;


    //! Write a program to convert Octal numbers to binary numbers

    //* Octal --> Decimal --> Binary;

    // int num , ans=0, rem, mul=1; 
    // cout << "Enter Your Number: ";
    // cin >> num;

    // while( num )
    // {
    //     rem = num % 10;
    //     num /= 10;
    //     ans += rem * mul;
    //     mul *= 8;
    // }
    // num=ans;
    // ans=0;
    // mul=1;
    // while( num )
    // {
    //     rem = num % 2;
    //     num /= 2;
    //     ans += rem * mul;
    //     mul *= 10;
    // }
    // cout << ans << endl;

    

}

int main()
{
    VideoPractic();
    HomeWorkPractic();
}