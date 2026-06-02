//WAP to find greater of three numbers.
/*#include <stdio.h>
int main() {
    int q,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&q,&b,&c); //& is used to get address of variable
    if(q>=b && q>=c)  // && is logical AND operator // cpmaring q with b and c
        printf("%d is greatest",q);
    else if(b>=q && b>=c)  // comparing b with q and c
        printf("%d is greatest",b);
    else
        printf("%d is greatest",c);
    return 0;
}*/


// WAP to check even or odd number
/*#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;

}*/

// WAP to print multiples of any number using do while loop 
/*#include <stdio.h>
int main() {
    int num, i = 1, multiple;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Multiples of %d are:\n", num);
    do {
        multiple = num * i;
        printf("%d\n", multiple);
        i++;
    } while (i <= 10); // Print first 10 multiples
    return 0;
}*/


//WAP TO FIND ADDITION OF ELEMENT IN AN ARRAY AND RETURN ITS INDEX NUMBER AND TARGET VALUE IS 11

#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 11;
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    for (int i = 0; i < size; i++) {         
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) { 
                printf("Index value: %d, %d\n", i, j);
                printf("Values: %d, %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}       


//remove duplicate elements from array in a single loop
#include <stdio.h>
int main() {
    int arr[]={1,2,2,3,4,4,5,6,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp[size];
    int j=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++]=arr[i];
        }
    }
}
    