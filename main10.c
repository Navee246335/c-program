#include <stdio.h>
int add();
int main()
{
    int result = add();
    printf("result=%d",result);
    return 0;
}
int add()
{
    int a=10,b=5;
    int c=a+b;
    return c;
}