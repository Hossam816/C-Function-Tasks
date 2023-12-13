#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firstName[50], lastName[50];

    printf("Enter Your First Name: ");
    scanf("%s", firstName);

    printf("Enter Your Last Name: ");
    scanf("%s", lastName);

    printf(" \nBefore Copying First Name = %s, And Last Name = %s \n", firstName,lastName);

    strcpy(firstName, lastName);

    printf(" \nAfter Copying First Name = %s, And Last Name = %s \n", firstName,lastName);

    return 0;
}
