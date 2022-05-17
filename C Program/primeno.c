#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,i,flag=0;
    printf("Enter a Number :");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is primeNumber",n);
    }
    else
    {
        printf("%d is NOT PRIMENUMBER",n);
    }
    //return EXIT_SUCCESS;

    int j,k,limit;
    int prime=0;
    printf("ENTER A LIMIT : ");
    scanf("%d",&limit);
    for ( j = 2; j <=limit; j++)
    {
        prime=0;
        for ( k = j-1; k >1; k--)
        {
            if (j%k==0)
            {
                prime=1;
            }
        }
        if (prime==0)
        {
            printf("%d\n",j);
        } 
    }
    //return EXIT_SUCCESS;
}
