#include <iostream>
using namespace std;

void PartTwo()
{

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    // for(int row=1; row<=5;row++){
    //    ! for(int col=1; col<=row; col++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    int row, col;

    // for(row=1; row<=5; row++){
    //     for(col=1; col<=row; col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // for(row=1;row<=5; row++){
    //     for(col=1; col<=row; col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    // for(row=1; row<=5; row++){
    //!     for(col=row; col>=1; col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // a
    // b b
    // c c c
    // d d d d
    // e e e e e

    //*My Approach
    // for(char row1='a'; row1<='e'; row1++){
    // !    for(char col1='a'; col1<=row1; col1++){
    //         cout<<row1<<" ";
    //     }
    //     cout<<endl;
    // }

    //* Sir Approach;

    // for(row=1; row<=5; row++){

    //     char name = 'a'+ row-1;
    //     for(col=1; col<=row; col++){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // for(row=5; row>=1; row--){
    //     for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // for (row = 5; row >= 1; row--)
    // {
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout << row << " ";
    //     }
    //     cout<<endl;
    // }

}

void PracticQNA(){
    //? First Pattern:
       
    //  1
    //  1 2
    //  1 2 3
    //  1 2 3 4
    //  1 2 3 4 5 
    //  1 2 3 4 5 6 
    int row,col;

    // for(row=1;row<=6; row++){
    //     for(col=1; col<=row; col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // ? Second Pattern:
   
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E

    // for(row=1; row<=5 ; row++){
    //     for(col=1; col<=row; col++){
    //         char name = 'A' + col -1;
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    // Third Pattern:
     
    //    10
    //    10 11
    //    10 11 12
    //    10 11 12 13
    //    10 11 12 13 14
    //    10 11 12 13 14 15

    // for(row=1; row<=6; row++){
    //     for(col=1; col<=row; col++){
    // !        int num = 10 + col -1;
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    // }

    // Fourth Pattern:

    //   A B C D
    //   A B C
    //   A B
    //   A

    // for(row=4; row>=1;row--){
    //!     for(col=1; col<=row; col++){
    //         char name = 'A' + col -1;
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }


    




}

int main()
{
    PartTwo();
    PracticQNA();
}