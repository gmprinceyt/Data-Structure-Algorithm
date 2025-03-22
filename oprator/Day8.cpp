#include<iostream>
using namespace std;



void PracticQuestion(){
    // ?1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.
    
    // int t; 
    // cout<<"Enter Temperature: ";
    // cin>>t;

    // if(t>70 && t<90){
    //     cout<<"YES";
    // }else{
    //     cout<<"NO";
    // }

    //? 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

    // int f;
    // cout<<"Number First: ";
    // cin>>f;

    // if(f%2==0 && f>0 ){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }

    //? 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

    // int age;
    // cout<<"Enter Age: ";
    // cin>>age;

    // if(age>=13 && age<=19){
    //     cout<<"YES";
    // }else{
    //     cout<<"NO";
    // }

    //? 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

    // int a,b,c ;
    // cout<<"Given A Number: ";
    // cin>>a;
    // cout<<"Given B Number: ";
    // cin>>b;
    // cout<<"Given C Number: ";
    // cin>>c;

    // if(a>b || a>c )
    // cout<<"Yes";
    // else 
    // cout<<"NO";

    //? 5: What will be the result below according to the precedence table.
    // 2*3-48==5/4*6
    // 6<<2-4*8/2
    // 5>4<3/2-8%4+5
    // 14-8+92>>2+70

    //* First Quenstion  
    // 6-48==5/4*6
    // 6-48==1*6
    // 6-48==6
    // -42==6
    //  0

    //* 6<<2-4*8/2

    // 6<<2-32/2
    // 6<<2-16
    // 6<<-14


    //*  5>4<3/2-8%4+5
    //   5>4<1-8%4+5
    //   5>4<1-0+5
    //   5>4<1+5
    //   5>4<6
    //   1<6
    //   1

    //* 14-8+92>>2+70
    // 98>>72
    // 0


    // cout<<(2*3-48==5/4*6);
    // cout<<(6<<2-4*8/2);
    // cout<<(5>4<3/2-8%4+5);
    // cout<<(14-8+92>>2+70);


}


int main(){
    PracticQuestion();
}