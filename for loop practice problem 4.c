//  write a program to Print the multiplication table for a given integer N.
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number:");
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
       printf("%d\n",N*i);
    }
return 0;
}
