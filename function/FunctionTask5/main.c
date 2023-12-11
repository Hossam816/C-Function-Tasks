#include <stdio.h>
#include <stdlib.h>

int factorOfNumber(int f){
    if(f == 1 || f ==0){
        return 1;
    }else{
        return f*factorOfNumber(f-1);
    }
}


int main()
{
    int factorNumber;
    printf("Enter Number: ");
    scanf("%d", &factorNumber);

    int res = factorOfNumber(factorNumber);
    printf("Facctorial of %d: %d \n", factorNumber,res);

    return 0;
}
