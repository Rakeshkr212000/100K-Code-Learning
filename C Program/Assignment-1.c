#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char name[20];
    printf("Enter Your Name :");
    scanf("%s",&name);
    printf("Your NAME is %s  \n\n",name);
    //return EXIT_SUCCESS;

    int num1;
    float num2,sum;
    printf("Enter Two numbers : ");
    scanf("%d%f",&num1,&num2);
    sum=num1+num2;
    printf("the SUM of two numbers :%f",sum);
    //return EXIT_SUCCESS;

    int p;
    float  r,n,si;
    printf("\n\nEnter the amount : ");
    scanf("%d",&p);
    printf("Enter the Interest Rate : ");
    scanf("%f",&r);
    printf("Enter the Numbers  of years :");
    scanf("%f",&n);
    si=(p*r*n)/100;
    printf("the simple Interest = %f",si);
    //return EXIT_SUCCESS;
    
}
