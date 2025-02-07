// reverse the number
#include <stdio.h>
int main()
{
    int num=3,power=2,answer=1;
    while(power>0)
    {
        answer=answer*num;
        power--;

    }
    printf("%d", answer);
    return 0;
}
