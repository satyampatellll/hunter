#include<stdio.h>
int main() {

    for (int i=0;i<2;i++){
       // printf("*")
        for (int j=0;j<3;j++){
            printf("*");
        }
    }



    return 0;
}


//INCRIMENRT RIGHT SIDE SPACE 
# include<stdio.h>
int main(){
for(int i=0;i<3;i++){
    for(int j=0;j<=i;j++){
        printf("*");

    }
    printf("\n");
}


    return 0;

}



//decriment 
# include<stdio.h>
int main(){
    for (int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            printf("*");


        }
        printf("\n");
    }

    return 0;
}

//FOR DECRIMENT LOWER TRIANGLE
#include<stdio.h>
int main(){
    for (int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
       
        for(int k=3;k>i;k--){
        printf("*");

        }
        printf("\n");
    }

    return 0;
}
