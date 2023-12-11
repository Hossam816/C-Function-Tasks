#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double squareRootFn(double number);

int main()
{
    double num1;
    printf("Enter the number: ");
    scanf("%lf", &num1);

    if(num1>0){
        double res = squareRootFn(num1);
        printf("square of %.2lf is %.2lf \n", num1, res);
    }else{

        printf("There is no square root for negative numbers!");
    }

    return 0;
}

double squareRootFn(double number){
return sqrt(number);
}

