/*#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for (int i=0; i<6; i++){
        int temp = 0;

        for (int j=i+1;j<5;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            
        
    
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d largest number",arr[5-n]);
    return 0;
            }
        }
    }
}*/

//sorting the array in acending array
/*#include<iostream>
using namespace std;
int main(){
    int arr[]={-3,2,4,-7,-1,5};
    int negat[3];
    int posi[4];
    int ans[7];
    int j=0,k=0; 
    for (int i=0;i<7;i++){
        if(arr[i]<0){
            negat[i]=arr[i];
        }else{
            int k=0;
            posi[k]=arr[i];
            k++;
        }
    }
    int index=0;
    for(int i=0;i<3;i++){
        ans[index]=negat[i];
        index++;
    }
    for(int j=0;j<4;j++){
        ans[index]=posi[j];
        index+=1;
    }
}*/

//MULTIPLICATION OF TWO ARRAYS
#include<iostream>
using namespace std;
int main(){
    int arr1 []={1,2,3};
    int arr2 []={4,5,6};
    int ans[3];
    for(int i=0;i<3;i++){
        ans[i]=arr1[i]*arr2[i];
    }
    for(int i=0;i<3;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}