#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,n,sum=0;
    printf("ENTER THE LIMIT : ");
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
        sum=sum+i;
    }
    printf("Sum  : %d",sum);
    return EXIT_SUCCESS;
}
