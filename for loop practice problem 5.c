// write a program to Print a right-angled triangle pattern of stars with N rows.
#include<stdio.h>
int main()
{
    int N;
    printf("Enter number of rows:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}
