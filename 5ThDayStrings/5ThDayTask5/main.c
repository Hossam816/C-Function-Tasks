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

    printf(" \nBefore Copying First Name = %s\n", firstName);

    strcat(firstName, lastName);

    printf(" \nAfter Copying First Name = %s\n", firstName);

    return 0;
}
