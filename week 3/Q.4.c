/* C program to find factorial of a number using recursion */
#include<stdio.h>
 int f1(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, f1(n));
    return 0;
}

 int f1(int n) {
    if (n>=1)
        return n*f1(n-1);
    else
        return 1;
}