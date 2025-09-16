//ARRAY CONCEPT:-
#include<stdio.h>
int main(){
    int arr[5]={4,5,6,3,3,};
    //printf("%d",arr[2]);
        for (int i=3;i>=0;i--){
         printf("%d",arr[i]);
        }


    return 0;
}


#include<stdio.h>
int main(){
    int arr[5]={1,1,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
        printf("%d",arr[i]);
    }   




    return 0;
}


#include<stdio.h>
 int main(){
    int arr[5]={3,12,52,34,5};
    int max=arr[0];
    for (int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
            printf("%d,",arr[i]);
        }

    }
    return 0;
 }


 

 
