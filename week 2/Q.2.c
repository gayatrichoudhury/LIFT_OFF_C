//write a C program to print the sum of all the even elements and even position elements
//in an array.
#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
          if (a[i]%2==0)
            sum=sum+a[i];
      }
      printf("total sum of even number is: %d",sum);
      return 0;
}