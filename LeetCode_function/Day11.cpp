    #include<iostream>
    using namespace std;

    bool Prime(int n){
        if( n < 2){
            return 0;
        }
        for ( int i = 2; i<n; i++) {
            if ( n % i == 0){
                return 0;
            }
        }
        return 1;
    }

    int factorial(int n) {
        int ans = 1; 
        for ( int i  = 1; i < n; i++)
        {
            ans *=i;
        }
        return ans;
    }

    int Findcube(int n ) {
        return n * n * n;
    }
    
    int Reverse(int n) {
        int ans=0 ,rem;
        // Constraints: -5000<=n<=5000
        while ( n )
        {
            rem = n % 10;
            n/=10;
            if( ans  >= 5000 || ans <= -5000) return 0;
            ans = ans * 10 + rem;
        }
        return ans;
    }
    
    void TreeSwap(int &a, int &b, int &c ) 
    {
        int o = a;
        a = b;
        b = c ;
        c = o;
    }

    void swaping(int &a, int &b) 
    {
        if(b >= 100000 || a<= -10000) return;
        swap(a,b);
        // swap(b,a);

    }
    
    void Print(int n ){
        for( int i =1; i<=n;  i++){
            cout<<"Hello World"<<i;
        }
    }
    
   int  Combination(int n ,int r){


       //           5!
       // nCr = ----------
       //       2!⋅(5−2)!

       int oth = (n-r);
       int ans=n, ans1=r, ans2=oth;

       for (int i =n-1; i>=1; i--){
         ans *= i;
       }
       for (int i =r-1; i>=1; i--){
         ans1 *= i;
       }
       for (int i =oth-1; i>=1; i--){
         ans2 *= i;
       }
 
       return ans/(ans1*ans2);

   }
    
    
    int main (){
        

        // cout<<Prime(a)<<endl;
        // cout<<Prime(b)<<endl;
        // cout<<factorial(a)<<endl;
        // cout<<factorial(b)<<endl;
        // cout<<Prime(a-b)<<endl;
        // cout<<factorial(a-b)<<endl;

        //? Practic Questions
        // Find the cube of a number using Function. ✅

        // cout<<Findcube(a); 

        //? 2: Reverse a number n using Function, Constraints: -5000<=n<=5000

        // cout<<Reverse(a);

        //? 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

        // int a,b;  
        // cout<<"Enter Your Number A,B,C: ";
        // cin>>a>>b;
        // TreeSwap(a,b,c);
        // cout<<a<<b<<c<<endl;

        //? 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 

        // swaping(a,b);
        // cout<<a<<b;

        //? 5: Print “Hello Coder Army” n times using Function.

        // int n;
        // cin>>n;
        // Print(n);

        //? 6: Given two numbers n, r. Find nCr (Combination). Use Function here.

        int n,r;
        cout<<"Enter Your N , R Number: ";
        cin>>n>>r;

        cout<<Combination(n,r);


    }