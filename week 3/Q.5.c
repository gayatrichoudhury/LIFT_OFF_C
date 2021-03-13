#include<stdio.h>


int isPal(int );


int n;

int main()
{
    
    int palindrome;
    printf("\nEnter a number to check for Palindrome: ");
    scanf("%d", &n);
    palindrome = isPal(n);
    if(palindrome == 1)
        printf("\n%d is palindrome\n", n);
    else
        printf("\n%d is not palindrome\n", n);

    
    return 0;
}

int isPal(int aj)
{
    static int sum = 0;
    if(aj != 0)
    {
        sum = sum *10 + aj%10;
        isPal(aj/10);   
    }
    else if(sum == n)
        return 1;
    else
        return 0;
}





