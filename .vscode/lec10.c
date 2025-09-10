#include<stdio.h>
int main(){
 for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
             printf("*");
        }
        for(int k=4;k>i;k--){
            printf(" ");
        }
        for(int p=4;p>i;p--){
            printf(" ");
        }
         for(int m=0;m<=i;m++){
            printf("*");
        }
        for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
             printf("*");
        }
        for(int k=4;k>i;k--){

            printf(" ");
        }
        for(int p=4;p>i;p--){

            printf(" ");
        }
         for(int m=0;m<=i;m++){
            printf("*");
        }
        
      printf("\n");
    }

#include<stdio.h>
int main(){
    int n=8;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){

            printf(" ");
            if(i==1 || i==n || j==1 || j==n){
                printf("*");
            
            }else{
                printf(" ");
            }
            }
        printf("\n");

    
    }

    return 0;
}