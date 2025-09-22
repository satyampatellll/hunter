// #include <stdio.h>

// int main() {
//     int n, i, mid;
    
//     // Input size of array
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Input elements
//     printf("Enter %d elements: ", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Split into two sub-arrays (first half, second half)
//     mid = n / 2;
//     int sum1 = 0, sum2 = 0;

//     for (i = 0; i < mid; i++) {
//         sum1 += arr[i];
//     }
//     for (i = mid; i < n; i++) {
//         sum2 += arr[i];
//     }

//     // Compare sums
//     printf("Sum of first sub-array = %d\n", sum1);
//     printf("Sum of second sub-array = %d\n", sum2);

//     if (sum1 > sum2) {
//         printf("First sub-array has greater sum.\n");
//     } else if (sum2 > sum1) {
//         printf("Second sub-array has greater sum.\n");
//     } else {
//         printf("Both sub-arrays have equal sum.\n");
//     }

//     return 0;
// }




//COMPARING TWO NUMBERS AND FINDING THE GRESTER NUMBER 
// #include<stdio.h>
// int main(){
//     int arr[5]={-6,4,3,-4};
//     int maxSum =0;
//     for (int i=0;i<5;i++){
//         int curSum=0;
//         for (int j=i;j<5;j++){
//             curSum= curSum+arr[j];
//             if(curSum>maxSum){
//                 maxSum=curSum;
            
//             }
//         }
//     }
//     printf("%d",maxSum);
// }

        
// #include<stdio.h>
// int main(){
//     int arr[5]={-6,4,3,-4};
//     int maxSum =0;
//     for (int i=0;i<5;i++){
//         int curSum=0;
//         for (int j=i;j<5;j++){
//             curSum= curSum+arr[j];
//             if(curSum>maxSum){
//                 maxSum=curSum;

//             }
//             if(curSum<0){
//                 curSum=0;
//             }
//         }   
//     }
//     printf("%d",maxSum);
// }

  

// #include<stdio.h>
// int main(){
//     int a[3]={1,2,3};
//     int b[3]={4,5,6};
//     for(int i=0;i<3;i++){
//         printf("%d ",a[i]);
//     }
//     for(int i=0;i<3;i++){
//         printf("%d ",b[i]);
//     }
//     for(int i=0;i<3;i++){
//         c[i]=a[i]+b[i];
//     }
//     for(int i=0;i<3;i++){
//         printf("%d ",c[i]);
//     }
//     return 0;
// }


#include<stdio.h>
 int main(){
    arr[5]={-1,-2,3,-4,-5};
    int k=3;
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<k;i++){
        int temp=arr[0];
        for(int j=0;j<5-1;j++){
            arr[j]=arr[j+1];
        }
        arr[5-1]=temp;
    }
   for(int i=0;i<5;i++){
       printf("%d ",arr[i]);
   }
   return 0;
}