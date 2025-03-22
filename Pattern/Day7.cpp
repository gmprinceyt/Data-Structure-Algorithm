#include<iostream>
using namespace std;


void HardPattern2(){
                                    //         * 
                                    //       * * * 
                                    //     * * * * * 
                                    //   * * * * * * *
                                    // * * * * * * * * * 
    int row,col;

    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5-row; col++){
    //         cout<<"  ";
    //     }
    //     for(col=1; col<=row*2-1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

                                //           1 
                                //         1 2 1 
                                //       1 2 3 2 1
                                //     1 2 3 4 3 2 1
                                //   1 2 3 4 5 4 3 2 1

    // for(row=1; row<=5; row++){
    //     for(col=1;col<=5-row; col++){
    //         cout<<"  ";
    //     }
    //     for(col=1; col<=row; col++){
    //         cout<<col<<" ";
    //     }
    //     for(col=row; col>1; col--){
    //         cout<<col - 1<<" ";
    //     }
    //     cout<<endl;
    // }
                        //   * * * * * * * * * 
                        //     * * * * * * * 
                        //       * * * * * 
                        //         * * * 
                        //           * 
                            
    // for(row=5; row>=1; row--){
    //     // space print
    //     for(col=1; col<=5-row; col++)
    //     cout<<"  ";

    //     // * Print
    //     for(col=1; col<=row*2-1; col++)
    //     cout<<"* ";
    //     cout<<endl;
    // }

                                        // * * * * * * * *
                                        // * * *     * * *
                                        // * *         * *
                                        // *             *
                                        // * *         * * 
                                        // * * *     * * * 
                                        // * * * * * * * * 
    // int n=4; 

    // for(row=1; row<=n; row++){
    //     // left * print 
    //     for(col=4; col>=row; col--)
    //         cout<<"* ";
    //     // space 
    //     for(col=1; col<= 2* (row -1); col++){
    //         cout<<"  ";
    //     }
    //     //right * print 
    //     for(col=4; col>=row; col--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(row=n-1; row>=1; row--0)0{
    //     // left * print 
    //     for(col=4; col>=row; col--)
    //         cout<<"* ";
    //     // space 
    //     for(col=1; col<= 2* (row -1); col++){
    //         cout<<"  ";
    //     }
    //     //right * print 
    //     for(col=4; col>=row; col--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //? Sir Approach 
    // int n; 
    // cout<<"Enter Your Number: ";
    // cin>>n;

    // for(row=n;row>=1; row--){
    //     // left * print 
    //     for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     // middile space print
    //     for(col=1; col<=2*n-(2*row); col++){
    //         cout<<"  ";
    //     }
    //     // right * print 
    //     for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }
    // for(row=1; row<=n; row++){
    //     //left * print 
    //     for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     // middle space 
    //     for(col=1; col<=2*n-(2*row); col++){
    //         cout<<"  ";
    //     }
    //     // right * print
    //     for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }
}

void PracticQuestion(){

                                    // *                     * 
                                    // * *                 * *
                                    // * * *             * * *
                                    // * * * *         * * * *
                                    // * * * * *     * * * * *
                                    // * * * * * * * * * * * *
                                    // * * * * *     * * * * *
                                    // * * * *         * * * *
                                    // * * *             * * *
                                    // * *                 * *
                                    // *                     * 
    int row,col ,n ; 
    cout<<"Enter your Number: ";
    cin>>n;

    /*
      ?  space famula
      2*n-(2*row)
      2*(row-1)
   */ 
    // for(row=1; row<=n; row++){
    //     // * print 
    //     for(col=1; col<=row; col++)
    //     cout<<"* ";
    //     // space print
    //     for(col=1; col<=2*n - (2*row); col++)
    //     cout<<"  "; 
    //     // * print
    //     for(col=1; col<=row; col++)
    //     cout<<"* ";
    //     cout<<endl;
    // }
    // for(row=n-1; row>=1; row--){
    //     // * print 
    //     for(col=1; col<=row; col++)
    //     cout<<"* ";
    //     // space print
    //     for(col=1; col<=2*n - (2*row); col++)
    //     cout<<"  "; 
    //     // * print
    //     for(col=1; col<=row; col++)
    //     cout<<"* ";
    //     cout<<endl;
    // };

                                        //          * 
                                        //        *  *
                                        //      *  *  *
                                        //    *  *  *  *
                                        //  *  *  *  *  *

    // for(row=1; row<=n;row++){
    //     // space
    //     for(col=1; col<=n-row; col++){
    //         cout<<" ";
    //     }
    //     // Print * 
    //     for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

                                        //         1        
                                        //        1 2       
                                        //       1 2 3      
                                        //      1 2 3 4     
                                        //     1 2 3 4 5    
                                        //    1 2 3 4 5 6   
                                        //   1 2 3 4 5 6 7  
                                        //  1 2 3 4 5 6 7 8 
                                        // 1 2 3 4 5 6 7 8 9 

    // for(row=1; row<=n; row++){
    //     // space 
    //     for(col=1; col<=n-row; col++){
    //         cout<<" ";
    //     }
    //     // print col row(times)
    //     for(col=1; col<=row; col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl; 
    // }


                            //        A
                            //      A B A
                            //     A B C B A
                            //   A B C D C B A
                            // A B C D E D C B A
    


    // for(row=1; row<=n; row++){
    //     // space 
    //     for(col=1; col<=n-row; col++){
    //         cout<<"  "; 
    //     }
    //     // print A to n  row(times)
    //     for(col=1; col<=row; col++){
    //         char name = 'A' + col-1;
    //         cout<<name<<" ";
    //     }
    //     // print n to A row-- times
    //     for(col=row-1; col>=1; col--){
    //         char name = 'A' + col-1;
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

                                    //          * 
                                    //        *  *
                                    //      *  *  *
                                    //    *  *  *  *
                                    //  *  *  *  *  *


    // for(row=1; row<=n ; row++){
    //     // space
    //     for(col=1; col<=n-row; col++)
    //     cout<<" ";
    //     // print *
    //     for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(row=n; row>=1; row--){
    //     // space
    //     for(col=1; col<=n-row; col++)
    //     cout<<" ";
    //     // print *
    //     for(col=1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

}

int main(){
    HardPattern2();
    PracticQuestion();
}