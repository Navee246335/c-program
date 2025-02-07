// to print the digits
#include <stdio.h>
int main()
{
    int n,count=0;
    printf("enter n");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d",n%10);
        n=n/10;
        count++;
    }
      printf("no of digits = %d",count);
      return 0;
}