#include <stdio.h>
int add(int a,int b);//function declaration
int main()
{
    int result= add(10,30);
    printf("result=%d",result);
    return 0;

}
int add (int a,int b)
{
    int c=a+b;
    return c;
}
