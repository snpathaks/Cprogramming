// #include<stdio.h>
// int main(){
//     printf("hello world");
//     return 0 ;
// }

// Sum of Numbers of size  by taking input from user------------------
// #include<stdio.h>
// #include <stdlib.h>
// int main (){
//     int n;
//     printf("Enter the size of array : ");
//     scanf("%d" , &n);
//     int *arr = (int*)malloc(n * sizeof(int));
//     printf("Enter the elements in an array: ");
//     int i;
//     for( i=0 ; i<n ; i++){
//         scanf("%d" , &arr[i]);
//     }
//     for( i=0 ; i<n ; i++){
//          printf("%d " , arr[i]);
//     }
//     free(arr);
//     return 0 ;
// }

//Factorial of a number --------------------------------------------------------
// #include<stdio.h>
// int main(){
//     int n ;
//     long long fact = 1;
//     scanf("%d" , &n);
//     int i;
//     for( i=1; i<=n ; i++){
//         fact = fact*i;
//     }
//     printf("factorial of %d is %lld" , n , fact);
//     return 0 ;

// }

//Problem: Predict output of increment/decrement mix--------------------------
// #include<stdio.h>
// int main(){
//       int i=1 , j=1 , k=1;
//       int m = i++||++j && ++k  ;
//       printf("%d %d %d %d\n" ,i,j,k,m);
//       return 0 ;
// }

//Problem: Demonstrate all bitwise operators--------------------------------------

// #include<stdio.h>
// int main(){
//     int a = 5 , b =2;
//     printf("Bitwise AND of %d and %d is %d\n" , a, b,a&b);
//     printf("Bitwise OR of %d and %d is %d\n" , a, b,a|b);
//     printf("Bitwise XOR of %d and %d is %d\n" , a, b,a^b);
//     printf("Bitwise NOT of %d and %d is %d and %d\n" , a, b,~a , ~b);
//     printf("Bitwise LEFT SHIFT of %d and %d is %d\n" , a, b,a<<b);
//     printf("Bitwise LEFT SHIFT of %d and %d is %d\n" , a, b,a<<b);
//     printf("Bitwise RIGHT SHIFT of %d and %d is %d\n" , a, b,a>>b);

// }

//Problem: Check if number is even/odd without %.---------------------------------

// #include<stdio.h>
// int main(){
//     int n ; 
//     printf("Enter a number : ");
//     scanf("%d" , &n);
//     if(n & 1){
//         printf("%d is odd\n" , n);
//     }else{
//         printf("%d is even\n" , n);
//     }
// }

//Problem: Check if a number is power of 2 or not.---------------------------------
// #include<stdio.h>
// int main(){
//     int n ; 
//     printf("Enter a number : ");
//     scanf("%d" , &n);
//     if(n && !(n & (n-1))){
//         printf("%d is a power of 2\n" , n);
//     }else{
//         printf("%d is not a power of 2\n" , n);
//     }
// }

//Set/Clear/Toggle Bit:Problem: Toggle 2nd bit (0-indexed) of a number----------------------
// #include<stdio.h>
// int main(){
//     int n ; 
//     printf("Enter a number :");
//     scanf("%d" , &n);
//     n = n^(1<<2);
//     printf("Number after toggling 2nd bit is %d\n" , n);
//     return 0;
    
// }

//Problem: Sum of even numbers 1 to N using %.----------------------------------------
// #include<stdio.h>
// int main(){
//     int n ;
//     scanf("%d" , &n);
//     int sum = 0 ;
//     int i;
//     for( i=1 ; i<=n ; i++){
//         if(i%2 ==0){
//             sum += i;
//         }
//     }
//     printf("Sum of even numbers from 1 to %d is %d\n" , n , sum);
//     return 0;
// }

//Problem: Use short-circuit to avoid division by zero.-------------------------------
// #include <stdio.h>
// int main() {
//     int x = 0, y = 5;
//     if (x != 0 && y / x > 2) {
//         printf("Safe\n");
//     } else {
//         printf("Not safe or false\n");
//     }
//     return 0;
// }

//Problem: Find max of three numbers using ternary.----------------------------------
// #include <stdio.h>
// int main() {
//     int a = 10, b = 20, c = 15;
//     int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
//     printf("Max: %d\n", max);
//     return 0;
// }


//Use of break and continue--------------------------------------
// #include<stdio.h>
// int main(){
//     int i;
//     for( i=1 ; i<=10 ; i++){
//         if(i == 8)
//            break;
//         if(i%2 == 0)
//            continue;
//         printf("%d " , i);

//     }
// }


//Type casting problem: Convert float to int without using (int)-----------------------------
// #include<stdio.h>
// int main(){
//     float f = 3.14;
//     int i = f; // Implicit type casting
//     printf("Integer value: %d\n", i);
//     return 0;
// } 

//-------------------------------------------------------------
// #include<stdio.h>
// int main(){
//     int i = 10 ; 
//     float f = 3.14f;
//     float result = i+f;
//     printf("%.2f\n", result);

// }

//Division-----------------------------------------------------
// #include<stdio.h>
// int main(){
//     int a , b ; 
//     printf("Enter the numbers :");
//     scanf("%d %d" , &a , &b);
//     float res = (float)a/b;
//     printf("Result of division is %.2f\n" , res);

// }






