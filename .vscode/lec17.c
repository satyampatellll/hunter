// #include<stdio.h>
// int main(){
//     int x=100;
//     int y=200;
// int sum;
//     sum = x + y;
//     printf("The sum is %d", sum);
//     return 0;
// }

// #include<stdio.h>
// int sum(int *x, int *y){
//     *x=50;
//     *y=50;
//     int c=(*x)+(*y);
//     return c;
// };

// int main(){
//     int x=10;
//     int y=20;
//     int z=sum(&x,&y);
// printf("The sum is %d", z);
// printf("%d", x+y);
//     return 0;
// };


// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *p=arr;
//     for(int i=0;i<5;i++){
//         printf("%d\n", *(p+i));
//     }
//     return 0;
// };


// #include<stdio.h>
// int main(){
//     int a,b;
//     a=10;
//     b=20;
//     int *p1=&a;
//     int *p2=&b;
//     printf("%d""%d",*p1,*p2);
//     return 0;

// };

//  #include<stdio.h>
//  int main(){
//     int swap(int *x, int *y){
//         int temp;
//         temp=*x;
//         *x=*y;
//         *y=temp;
//         return 0;
//     };
//     int a=10;
//     int b=20;
//     swap(&a,&b);
//     printf("%d %d",a,b);
//     return 0;
// };


// #include<stdio.h>
// int main(){
//     int a=5;
//     int b=6;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d %d",a,b);
//     return 0;
// };


// #include<stdio.h>
// int main(){
//     int x=10;
//     int *p=&x;
//     int **q=&p;
//     printf("%d",**q);
//     return 0;
// };



#include<stdio.h>
int main(){
    int arr[3]={{1,2,3}};
    int arr[3]={{4,5,6}};
    int *p1=arr1;
    int *p2=arr2;
    int flag=1;
    for(int i=0;i<3;i++){
        if(*(p1+i)!=*(p2+i)){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("true");
    }
    else{
        printf("false");
    }
    printf("\n");
    return 0;
};