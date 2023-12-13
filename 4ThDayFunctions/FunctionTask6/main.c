#include <stdio.h>
#include <stdlib.h>

int powerNumbers(int base, int powerNumber){
    int res = 1;

    if(powerNumber >=0){
        for(int i=0; i<powerNumber; i++){
            res *=base;
        }
    }else{
        //if the user enter negative number
        for(int i=0; i>powerNumber;i++){
            res/=base;
        }
    }
    return res;
}

int main()
{
    int base, power;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the Power number: ");
    scanf("%d", &power);

    int res = powerNumbers(base, power);
    printf("%d ^ %d is : %d", base, power, res);

    return 0;
}
