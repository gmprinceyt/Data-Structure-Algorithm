#include<iostream>
using namespace std;

void HardPattern(){
    //          *
    //        * *
    //      * * *
    //    * * * * 

    int row, col;

    // for(row=1; row<=5; row++){
    //  !   for(col=1; col<=5-row; col++){
    //         cout<<"  ";
    //     }
    // !    for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }

    // _ _ _ _ 1
    // _ _ _ 2 2 
    // _ _ 3 3 3
    // _ 4 4 4 4 
    // 5 5 5 5 5

    // int n;
    // cout<<"Enter value: ";
    // cin>>n;


    // for(row=1; row<=n; row++){
    //!     for(col=1; col<=n-row; col++){
    //         cout<<"  ";
    //     }
    //  !   for(col=1; col<=row; col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // - - - - 1
    // - - - 1 2 
    // - - 1 2 3
    // - 1 2 3 4
    // 1 2 3 4 5

    // for(row=1; row<=5; row++){
    //!     for(col=1; col<=5 - row; col++){
    //         cout<<"  ";
    //     }
    //     for(col=1; col<=row; col++){
    // !        cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // - - - - A
    // - - - A B
    // - - A B C 
    // - A B C D
    // A B C D E

    // int n; 
    // cout<<"Enter Number OF Printing Pattern: ";
    // cin>>n;

    // for(row=1; row<=n; row++){
    //     // Space Print
    //     for(col=1; col<=n-row; col++){
    //         cout<<"  ";
    //     }
    //     // Charactor Print 
    //     for(col=1; col<=row; col++){
    //         !char name = 'A' + col -1;
    //         cout<<name<<" ";
    //     }
    //     cout<<endl; 
    // }

    //? First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    //                     1
    //                   2 1
    //                 3 2 1
    //               4 3 2 1
    //             5 4 3 2 1          


    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5-row; col++){
    //         cout<<"  ";
    //     }
    //   !  for(col=row; col>=1; col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    
// ?Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    //         A
    //       B B
    //     C C C
    //   D D D D
    // E E E E E

    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5-row; col++){
    //         cout<<"  ";
    //     }
    //     for(col=1; col<=row; col++){
    //     !    char name = 'A' + row - 1;
    //         cout<<name<<" ";
    //     }
    //     cout<<endl; 
    // }


//? Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    //          5
    //        5 4
    //      5 4 3
    //    5 4 3 2 
    //  5 4 3 2 1

    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5-row; col++){
    //         cout<<"  ";
    //     }
    //     for(col=1; col<=row; col++){
    //  !       int n = 5 - (col-1);
    //         cout<<n<<" ";
    //     }
    //     cout<<endl;
    // }

// ?Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    //          E
    //        E D
    //      E D C
    //    E D C B
    //  E D C B A

    // for(row=1; row<=5; row++){
    //     // space
    //     for(col=1; col<=5-row; col++)
    //         cout<<"  ";
    //     // Charactor
    //     for(col=1; col<=row; col++){
    // !        char name = 'E' - (col -1);
    //         cout<<name<<" ";
    //     }
    //     cout<<endl; 
    // }



}



int main(){
    HardPattern();
}