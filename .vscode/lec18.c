//2-D ARRAY
/*#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
};*/

//FINDING ADDITION OF 2-D ARRAY IN A ROW || maximum AND minimum ELEMENT IN A ROW
/*#include<stdio.h>
int main(){
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr1[i][j];
        }
        printf("%d",sum);
    }
    return 0;
};*/



// 2-D ARRAY maximum AND minimum ELEMENT IN A COLUMN
/*#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr1[9];
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[k]=arr[j][i];
            k++;
        }
    }
    int max=arr1[0];
    int min=arr1[0];
    for(int i=0;i<9;i++){
        if(arr1[i]>max){
            max=arr1[i];
        }
        if(arr1[i]<min){
            min=arr1[i];
        }
    }
    printf("Maximum element in a column: %d\n",max);
    printf("Minimum element in a column: %d\n",min);
    return 0;
}*/



//CHANGING ROWS TO COLUMNS AND COLUMNS TO ROWS
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    return 0;
}
