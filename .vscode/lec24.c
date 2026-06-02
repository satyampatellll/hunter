//FINDING FACTORIAL OF A NUMBER USING RECURSION
// #include <stdio.h>
// int factorial(int n);
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Factorial of %d is %d\n", num, factorial(num));
//     return 0;
// }
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }


#include<stdio.h>
int sum(int arr[],int n)
{
    if(n==0){
        return 0;

    }
    return arr[n-1] + sum(arr, n-1);
}
int main(){
int arr[3]={3,4,2};
int n=3;
int data = sum(arr,n);
printf("%d",data);

}
