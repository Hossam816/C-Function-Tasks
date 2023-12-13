#include <stdio.h>
#include <stdlib.h>

int sumNaturalNumbers(int nNumber);


int main()
{
    int n,sum;
    printf("Enter Any Natural Number: ");
    scanf("%d", &n);

    if(n<0){
        printf("Error, Natural number must be positive number or zero!");
    }else{

    sum = sumNaturalNumbers(n);
    }

    printf("Sum of first %d Natural numbers: %d", n,sum);

    return 0;
}


int sumNaturalNumbers(int nNumber){
    if(nNumber==0){
        return 0;
    }
    int res = nNumber + sumNaturalNumbers(nNumber - 1);

    return res;
}
