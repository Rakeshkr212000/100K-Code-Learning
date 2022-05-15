#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num1,num2,num3;
    printf("Enter three Numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1==num2||num1==num3||num2==num3)
    {
        printf("CAN YOU TYPE DIFFERENT NUMBERS");
    }
    else if (num1>num2&&num1>num3)
    {
        printf("The Number-1 %d is greater",num1);
    }
    else if (num2>num1&&num2>num3)
    {
        printf("The Number-2 %d is greater",num2);
    }
    else
    {
        printf("The Number-3 %d is greater",num3);
    }
        
    return EXIT_SUCCESS;
}
