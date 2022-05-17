#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,n;
    printf("Enter The Limit : ");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        if (i%2==0)
        {
            printf("%d\t",i);
        }
    }
    return EXIT_SUCCESS;
}