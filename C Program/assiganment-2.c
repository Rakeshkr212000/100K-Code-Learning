#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float mark;
    printf("ENTER YOUR MARK: ");
    scanf("%f",&mark);
    if (50<=mark)
    {
        printf("PASSED");
    }
    else
    {
        printf("Failed");
    }
    //return EXIT_SUCCESS;

    float totalmark;
    printf("\nENter YOUR TOTAL MARK PERCENTAGE: ");
    scanf("%f",&totalmark);
    if (90<=totalmark)
    {
        printf("A-Grade");
    }
    else if (80<=totalmark)
    {
        printf("B-Grade");
    }
    else if (70<=totalmark)
    {
        printf("C-Grade");
    }
    else if (60<=totalmark)
    {
        printf("D-Grade");
    }
    else if (50<=totalmark)
    {
        printf("E-Grade");
    }
    else
    {
        printf("Failed");
    }
    //return EXIT_SUCCESS;

    int choice;
    printf("\nENTER A NUMBER from  1 - 7 : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;
    default:
    printf("Invalid Entry");
    break;
    }
    //return EXIT_SUCCESS;
}
