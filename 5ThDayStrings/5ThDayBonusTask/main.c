#include <stdio.h>
#include <stdlib.h>

struct Distance {
    int feet;
    int inch;
};


int main()
{
    struct Distance distance1,distance2;
    //First Distance
    printf("Enter The First Distance: ");
    printf("\nFeet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inch);

    //Second Distance
    printf("Enter The Second Distance: ");
    printf("\nFeet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inch);

    printf("\nThe First Distance \n Feet = %d \n Inchs = %d \n", distance1.feet,distance1.inch);
    printf("\nThe Second Distance \n Feet = %d \n Inchs = %d", distance2.feet,distance2.inch);


    return 0;
}
