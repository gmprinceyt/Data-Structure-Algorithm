//? Question 1 : Write a Java method to compute the average of three numbers

// function computeAvgNumber(a,b,c) {
//     let sum = a + b + c;
//     return Math.floor(sum/3);
// }

// console.log(computeAvgNumber(50,200 ,66))

/* Question 2 : Write a method named isEven that accepts an int argument. The method should return true if the argument is even, or false otherwise. Also write a program to test your
method*/

// function isEven(value){
//     if (value%2 === 0){
//         return true;
//     }
//     return false;
// }

// console.log(isEven(11));

// Question 3 : Write a Java program to check if a number is a palindrome in Java? ( 121 is a
// palindrome, 321 is not)
// A number is called a palindrome if the number is equal to the reverse of a number e.g., 121 is a
// palindrome because the reverse of 121 is 121 itself. On the other hand, 321 is not a
// palindrome because the reverse of 321 is 123, which is not equal to 321.

// function reverse(value){
//     let num = value.toString();
//     let newnum = '';
//     for (let i = num.length-1; i >= 0 ; i--){
//         let lastEl = num.charAt(i);
//         newnum += lastEl;
//     }

//     return parseInt(newnum);
// }

// function checkPalindrome(value ){
//     let resNum = reverse(value);
//     if (resNum === value){
//         return true;
//     }
//     return false;
// }
// console.log(checkPalindrome(656));

// Question 4 : READ & CODE EXERCISE
// Search about(Google) & use the following methods of the Math class in Java:
// a. Math.min( )
// b. Math.max( )
// c. Math.sqrt( )
// d. Math.pow( )
// e. Math.avg( )
// f. Math.abs( )

// console.log(Math.min(6,5))
// console.log(Math.max(6,5))
// console.log(Math.sqrt(5))
// console.log(Math.pow(2,3 ))
// console.log(Math.abs(-5))

// Question 5 :
// Write a Java method to compute the sum of the digits in an integer.
// (Hint : Approach this question in the following way :
// a. Take a variable sum = 0
// b. Find the last digit of the number
// c. Add it to the sum
// d. Repeat a & b until the number becomes 0 );

// function sumofNum(value) {

//     let val = value; 

//     let rem=0,sum=0;
//     while( val !== 0){
//         rem = val%10;
//         sum += rem;
//         val= Math.floor(val/10);  
//     }

//     return sum;
// }

// console.log(sumofNum(255))