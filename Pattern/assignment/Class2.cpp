#include<iostream>
using namespace std;


int main (){

    int n;
    cout << "Enter Your Number: ";
    cin >> n;
    
    //? 1. Solid Squere Pattern
    // for (int i = 0; i < n; i++ ){
    //     for (int j = 0; j < n; j++){
    //         cout << " * ";
    //     };
    //     cout << endl;
    // };


    //? 2. Hollow Pattern
    // for (int row = 0; row < n; row++){
    //     for (int col = 0; col < n; col++){
    //         if (col==0 || col==n-1 || row==0 || row==n-1){
    //             cout << " * ";
    //         }else {
    //             cout << "   ";
    //         }
    //     };
    //     cout << endl;
    // }

    //? 3. Helf Pyramid
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j <= i; j++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }
    
    //? 4. inverted Helf Pyramid
    // for (int i = n; i > 0; i--){
    //     for (int j = 0; j < i; j++){
    //         cout << " * ";
    //     }
    //     cout <<; endl;
    // };

    //? 5. Numeric Helf Pyramid
    // for (int i = 0; i < n; i++){
    //     for (int j = 1; j <= i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    //? 6. Numeric Inverted Helf Pyramid

    // for (int i = n; i > 0; i--){
    //     for (int j = 1; j <= i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    //? 7. full triangle Pyramid

    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n-1-i; j++){
    //         cout<<"  ";
    //     }
    //     for (int j = 0; j <= i; j++){
    //         cout<<"* ";
    //     }
    //     for (int j = 1; j <= i; j++){
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // };

    //? 7. full inverted triangle Pyramid

    // for (int i = n; i > 0; i--){
    //     for (int j = 0; j < n-i; j++){
    //         cout<<"  ";
    //     }
    //     for (int j = 0; j <  i; j++){
    //         cout<<"* ";
    //     }
    //     for (int j = 1; j <  i; j++){
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // };
   
   return 0;
}