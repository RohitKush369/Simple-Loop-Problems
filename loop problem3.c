#include<stdio.h>
int main()
{
    int x;
    x=1;
    int sum;
    sum=0;
    loop:if(x<6)
    {
        sum+=x;
        x++;
        goto loop;
    }
    printf("%d",sum);
}
