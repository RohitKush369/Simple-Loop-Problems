//write a program to Compute the factorial of a given positive integer N.
#include<stdio.h>
int main()
{
    int N;
    int factorial=1;
    printf("Enter a number:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
      factorial=factorial*i;

    }
    printf("%d",factorial);
}
