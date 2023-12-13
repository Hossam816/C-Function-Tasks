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

    int length1 =  strlen(firstName);
    int length2 = strlen(lastName);

    if(length1 == length2 ){
        printf("They Are Equal");
    }else if(length1 < length2) {
        printf("Length 2 is Bigger Than Length 1");
    }else{
        printf("Length 1 is Bigger Than Length 2");

    }

    return 0;
}
