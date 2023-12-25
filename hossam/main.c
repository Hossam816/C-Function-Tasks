
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 0;
    size_t bytes_of_x = sizeof(x);

    int *x_ptr;

    x_ptr = (int *)malloc(4);

    *x_ptr = 5;

    printf("%d\n", *x_ptr);

    struct Person
    {
        char name[50];
        unsigned int age;
    };
    struct Person *p;

    p = (struct Person *)malloc(sizeof(p) * 2);

    strcpy(p->name, "alasklany");
    p->age = 33;
    p++;
    strcpy(p->name, "hossam");
    p->age = 20;

    return 0;
}