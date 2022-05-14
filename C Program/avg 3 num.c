#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float a,b,c,avg;
    printf("Enter the numbers : ");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("average Number of three Numbers : %f",avg);
    return EXIT_SUCCESS;
}