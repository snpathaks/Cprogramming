//Check the Number is even or odd ---------------------------------------------------
// #include<stdio.h>
// int main(){
//     int n ; 
//     scanf("%d" , &n);
//     if(n%2 == 0){
//         printf("%d is even\n" , n);
//     }else{
//         printf("%d is odd\n" , n);
//     }
// }
//--------------------------------OR---------------------------------------
// #include<stdio.h>
// int main(){
//     int n ;
//     scanf("%d" , &n);
//     if(n & 1){
//         printf("%d is odd\n" , n);

//     }else{
//         printf("%d is even\n" , n);
//     }
// }

//print onlythe prime numbers ---------------------------------------------------------
// #include<stdio.h>
// int main(){
//     int n , i ;
//     scanf("%d" , &n);
//     int x ;
//    for( x=2 ; x<=n ; x++){
//     int prime = 1 ;
//     for(i=2 ; i<=x/2 ; i++){
//         if(x%i ==0){
//             prime = 0 ;
//             break;
//         }
//     }
//     if(prime) printf("%d" , x);
//    }

// }

//Check if a number is prime or not---------------------------------------------
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, i, isPrime = 1;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     if (num <= 1) {
//         isPrime = 0;
//     } else {
//         for (i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//     }
    
//     if (isPrime) {
//         printf("%d is a prime number.\n", num);
//     } else {
//         printf("%d is not a prime number.\n", num);
//     }
    
//     return 0;
// }


// //Reverse an Array-----------------------------------------------------------------

// #include <stdio.h>

// int main() {
//     int num;
//     scanf("%d", &num);

//     int arr[num];

//     for(int i = 0; i < num; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Reverse the array
//     for(int i = 0; i < num / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[num - i - 1];
//         arr[num - i - 1] = temp;
//     }

//     // Print reversed array
//     for(int i = 0; i < num; i++) {
//         printf("%d ", *(arr + i));
//     }

//     return 0;
// }
