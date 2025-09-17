// #include<stdio.h>
// maxArraySum(int arr[], int n, int k){
//     int maxSum-0;
//     //int arr[7]=f-1,2,4,5,-4,3,-7);
// for (int i=0;i<=n-k; 1++){
//     int currSum=0;
//     for(int j=1; j<i+k;j++) {
//     currSum=currSum+arr[j];
//     }
// }
// if (currSum>maxSum) {
// maxSum=currSum;
//     return 0;
// }



#include <stdio.h>

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], target);
                return 0;  // Exit after finding first pair
            }
        }
    }

    printf("No pair found!\n");
    return 0;
}