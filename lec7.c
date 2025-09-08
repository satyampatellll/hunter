 #include <stdio.h>
int main() {
    int n=6;
    int t1=0, t2=1, nextTerm;
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for(int i=1; i<=n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", nextTerm);
    }
    return 0;
}










