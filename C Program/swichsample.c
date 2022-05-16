#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int choice;
    re:
    printf("1-Porotta\n2-Biriyani\n3-FriedRice\n4-Mandhi\nEnter Your Choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("YOU Have selected Porotta");
        break;
        case 2:
        printf("you have selected Biriyani");
        break;
        case 3:
        printf("You Have Selected FriedRice");
        break;
        case 4:
        printf("You Have Selected Mandhi");
        break;
        default:
        printf("\nWRONG CHOICE!!!\nENTER AGAIN\n\n");
        goto re;
        break;
    }
    return EXIT_SUCCESS;
}
