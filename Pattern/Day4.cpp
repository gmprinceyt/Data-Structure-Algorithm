//? Day 4/180: Pattern Printing

#include<iostream>
using namespace std;


void printSimple(){
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * * 
    // * * * * * 
    // for(int i = 1; i <=5; i++){ 
    //     for(int i= 1; i<=5; i++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 10 10 10 10 10 
    // 10 10 10 10 10 
    // 10 10 10 10 10 
    // 10 10 10 10 10 

    int row;
    int col;

    // for(row=1;row<=4; row++){
    //     for(col=1; col<=5; col++){
    //         cout<<10<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1 1 1 1 1
    // 2 2 2 2 2 
    // 3 3 3 3 3
    // 4 4 4 4 4 
    // 5 5 5 5 5

    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5; col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 

    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5; col++){
    //         cont<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // 5 4 3 2 1 
    // 5 4 3 2 1 
    // 5 4 3 2 1 
    // 5 4 3 2 1 
    // 5 4 3 2 1 

    // for(row=1; row<=5; row++){
    //     for(col=5; col>=1; col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // a a a a a 
    // b b b b b
    // c c c c c
    // d d d d d
    // e e e e e

    // for(char i = 'a'; i<='e'; i++){
    //     for(col= 1; col<=5; col++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // a b c d e 
    // a b c d e 
    // a b c d e 
    // a b c d e 
    // a b c d e 

    // for(row=1; row<=5; row++){
    //     for(char col= 'a'; col<='e'; col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<end;
    // }

    // 1 2 3 4 5 
    // 6 7 8 9 10
    // 11 12 13 14 15 
    // 16 17 18 19 20 
    // int count=0;
    // for(row=1;row<=5; row++){
    //     for(col=1; col<=5; col++){
    //         count= count +1;
    //         cout<<count<<" ";
    //     }
    //     cout<<endl;
    // }

    //? First Pattern:

    //    4 4 4 4 4 4
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4  
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4 


    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5; col++){
    //   !      cout<<4<<" ";
    //     }
    //     cout<<endl;
    // }

    //? Second Pattern:
   
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25

    // for(row=1; row<=5; row++){
    //     for(col=1;col<=5; col++){
    //       !  cout<<col*col<<" ";
    //     }
    //     cout<<endl;
    // }

    //? Third Pattern:
  
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216


    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5; col++){
    //         ! cout<<col*col*col<<" ";
    //     }
    //     cout<<endl;
    // }

        //? Fourth Pattern:

    // F G H I J K  
    // F G H I J K
    // F G H I J K
    // F G H I J K
    // F G H I J K

    // for(row=1; row<=5; row++){
    //   !  for(char i ='F'; i<='K'; i= i+1){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }





}



int main(){
   printSimple();
}