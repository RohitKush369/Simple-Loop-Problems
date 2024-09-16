// write a program to calculate the sum of the first N natural numbers.
#include<stdio.h>
int main()
{
    int N;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        sum=sum+i;
    }
    printf("%d",sum);
return 0;
}
