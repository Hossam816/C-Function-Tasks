#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10, *ptr1;
    ptr1=&num;

    int *ptr2 = &ptr1;

    printf("%d \n", &ptr1);

    printf("%d", ptr2);

    return 0;
}
