//3.SHIFTING PRINT

#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int n=arr[0];
    for (int i=0;i<5;i++){
        arr[i]=arr[i+1];
    }
arr[4]=n;
}




//SHIFTING PRINT
#include<stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
    printf("Array after shifting left by one position:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}