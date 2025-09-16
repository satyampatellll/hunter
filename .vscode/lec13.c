// 1.ADDITION OF 2 NO.IS 7


#include<stdio.h>
int main(){
    int arr[7]={1,3,4,6,-5,5,1};
    int k=7;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(arr[i]+ arr[j]==7){
                printf("%d, %d",i,j);
                break;
            }
        }
    }
    return 0;
}



//2.PALIMDRONE


#include<stdio.h>
int main(){
int arr[5]={1,2,3,2,1};
int check=1;
for(int i=0;i<5/2;i++){
     if (arr[i]!=arr[5-1-i]){
        check=0;
        break;
    }
    
}
    return 0;
}




//3.SHIFTING PRINT

#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int n=arr[0];
    for (i=0;i<5;i++){
        arr[i]=arr[i+1];
    }
arr[4]=n;
}



SHIFTING PRINT
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