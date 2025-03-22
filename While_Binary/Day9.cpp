#include <iostream>
using namespace std;

void WhileLoops()
{
    // int n;
    // cout << "Enter Your Number: ";
    // cin >> n;

    // int i=2;
    // // find a factor with n number given by user
    // while(i<=n){
    //     if(n%i==0){
    //         cout<<i<<endl;;
    //     }
    //     i++;
    // }

    // Even number

    // int i =1;
    // while(i<=n){
    //     if(i%2==0){
    //         cout<<"Even "<<i<<endl;
    //     }
    //     i++;
    // }

    // sum of n natural number
    //     int i = 1;
    //     int sum = 0;
    //     do
    //     {
    //         sum += i;
    //         i++;
    //         cout<<sum<<endl;
    //     } while (i <= n);

    // break and continue
    // for(int i = 1; i<=n; i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
}

void PracticQuestion()
{
    // ?1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

    // int n;
    // cout<<"Enter Your Number: ";
    // cin>>n;

    // // Using While loops

    // cout<<"here Even Number Using While: ";
    // int i =1;
    // while(i<=n){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }
    // cout<<endl;
    // // Using Do-while loops
    // cout<<"Here Even Number Using Do-while: ";
    // i=1;
    // do{
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }
    // while(i<=n);

    //? 2: Find the factorial of a number n using a while loop and do a while loop.

    // int n;
    // cout << "Enter Your Number: ";
    // cin >> n;

    // // Using while loops
    // int i = 1;
    // cout <<"Here is ${n} factorial Number Using While : ";

    // while (i <= n)
    // {
    //     if (n % i == 0)
    //         cout << i << " ";
    //     i++;
    // }
    //  cout<<endl;

    // // Using Do-while loop
    // i = 1;
    // cout <<"Here Is ${n} factorial NUmber Using Do-while : ";

    // do
    // {
    //     if (n % i == 0)
    //         cout << i << " ";
    //     i++;
    // } while (i <= n);

    // ? 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

    // int n;
    // cout<<"Enter Your Number: ";
    // cin>>n;

    // cout<<"Here N Number which are Not Divisible By 3 And 5: ";
    // for(int i =1; i<=n; i++){
    //     if(i%3!=0 && i%5!=0){
    //         cout<<i<<" ";
    //     }
    // }

    //? 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

    // int n;
    // cout<<"Enter Your Number: ";
    // cin>>n;

    /* switch (n)

    {
    case 1:cout<<"Jan"; break;

    case 2:cout<<"Feb";break;

    case 3:cout<<"March";break;

    case 4:cout<<"Apr";break;

    case 5:cout<<"May";break;

    case 6:cout<<"June";break;

    case 7:cout<<"Jul";break;

    case 8:cout<<"Aug";break;

    case 9:cout<<"Sep";break;

    case 10:cout<<"Oct";break;

    case 11:cout<<"Num";break;

    case 12:cout<<"Dec";break;

    default:
        cout<<"Enter Value Between 1 TO 12 👍";
        break;
    }
*/

    //? 5 : Print all the Capital and small letters using a while loop.It means A - Z, then a - z.

    // // A - Z;
    // cout<<"Capital Letter: ";
    // char C = 'A';
    // while(C <= 'Z'){
    //     cout<<C<<" ";
    //     C++;
    // }
    // cout<<endl;


    // cout<<"Small Letter: ";
    // // a-z;
    // char s = 'a';
    // while(s<='z'){
    //     cout<<s<<" ";
    //     s++;
    // }

    //? 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

    // int n ,i=2; 
    // cout<<"Enter Your Nunber: ";
    // cin>>n;
    // bool prime = true;
    
    // while(i<=n)
    // {
    //     if(n%i == 0){
    //         prime= false;
    //         break;
    //     }
    //     i++;
    // }

    // if(prime) cout<<n <<" is Prime Number: ";
    // else cout<<n<<" Not  Prime";
}

int main()
{
    WhileLoops();
    PracticQuestion();
}