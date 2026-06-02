/*#include<stdio.h>
int main()
{
    int arr[5]={4,5,3,5,4};
    int xor=0;
    for(int i=0;i<5;i++){
        xor = xor^arr[i];
    }
printf("%d",xor);
}*/


//FIND A MISSING NUMBER IN AN ARRAY USING XOR OPERATION
#include<stdio.h>
int main()

{
    int n=5;
    int arr[4]={7,8,9,11};
    int xor1=0;
    int xor2=0;
    for(int i=7;i<=11;i++){
        xor1 = xor1^i;
    }
    for(int i=0;i<4;i++){
        xor2 = xor2^arr[i];
    }
    int missing_number = xor1^xor2;
    printf("The missing number is: %d",missing_number);
}

