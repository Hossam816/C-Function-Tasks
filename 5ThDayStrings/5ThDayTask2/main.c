#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firstString[50];

    printf("Enter your String: ");
    scanf("%s", firstString);

    printf("\n%s \n\n", firstString);
    printf("String Length is = %d ",strlen(firstString));


    return 0;
}
