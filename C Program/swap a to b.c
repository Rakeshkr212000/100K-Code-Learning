#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,temp;
    printf("Enter 2 Numbers for SWAP : ");
    scanf("%d%d",&a,&b);
    printf("BEFORE SWAP : a=%d b=%d",a,b );
    temp=a;
    a=b;
    b=temp;
    printf("\n AFTER SWAP : a:%d b:%d",a,b);
    return EXIT_SUCCESS;

}