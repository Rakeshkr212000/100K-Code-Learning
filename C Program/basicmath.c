#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num1,num2,result,choice;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    re:
    printf("1-Addition\n2-substraction\n3-multiplication\n4-division\nEnter your choice: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        result=num1+num2;
        printf("Reslut = %d",result);
    }
    else if (choice==2)
    {
        result=num1-num2;
        printf("Reslut = %d",result);
    }
    else if (choice==3)
    {
        result=num1*num2;
        printf("Reslut = %d",result);
    }
    else if (choice==4)
    {
        result=num1/num2;
        printf("Reslut = %d",result);
    }
    else
    {
        printf("WORNG CHOICE!!!\ntype again\n\n");
        goto re;
    }
    return EXIT_SUCCESS;
}