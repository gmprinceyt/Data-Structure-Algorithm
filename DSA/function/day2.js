import readlineSync from "readline-sync";

let n = readlineSync.question("Enter Your Number: ");

//? Question 1.

// function findProduct(a,b){
//     return a*b;
// }

// let ans = findProduct(2,2);
// console.log(ans)

// //? Question 2.

// function factorial(n) {
//   if (n < 2) {
//     return 1;
//   }

//   let factorial = 1;
//   for (let i = 2; i <= n; i++) {
//     factorial *= i;
//   }

//   return factorial;
// }

// //? Question 3.

// function binomialCoefficient(n ,r){
//     let BC = factorial(n)/(factorial(r)*factorial(n-r));
//     return BC;
// }

// let result = binomialCoefficient(5,2); //10

//? Question 3.

// function PrimeNumber (n){
//     for (let i = 2; i < Math.sqrt(n); i++){
//         if (n%i == 0 ){
//             return false;
//         }
//     }
//     return true;
// }

// let ans = PrimeNumber(n);

// ? Question 4.

// function PrimeInARange(n){
//     if (n < 2){
//         return;
//     }
//     function PrimeNumber(i){
//         for (let j = 2; j <= Math.sqrt(i); j++){
//             if (i%j === 0){
//                 return false;
//             }
//         }
//         return true;
//     }

//     let prime = [];
//     for ( let i = 2; i <= n; i++){
//        if(PrimeNumber(i)){
//         prime.push(i)
//        }
//     }
//     return prime;

// }
// let result = PrimeInARange(n);

//? Qesstion 4. Binary To decimal

// function BinaryToDecimal(binaryNumber) {
//   // 101
//   let rem = 0,
//     decimal = 0,
//     count = 0,
//     val = binaryNumber;
//   while (val !== 0) {
//     rem = val % 10;
//     decimal += rem*Math.pow(2, count);
//     count++;
//     val = Math.floor(val / 10);
//   }
//   return decimal;
// }

// console.log(BinaryToDecimal(n));
//? Qesstion 4. Decimal to binary

function reverse(val){
    let num = '';
    for (let i = val.length-1; i >= 0 ; i--){
        num += val[i];
    }
    return num
}

function decimalToBinary(decimal) {
    let val = decimal,ans=0,rem=0
    while (val !== 0){
        rem += `${val%2}`;
        console.log(val, rem)
        val = val/2;
    };

    return reverse(rem);
}

console.log(decimalToBinary(n))