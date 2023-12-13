#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*>>>>>>>>>>Task 2<<<<<<<<<*/

int primeNumber(int number);

int main()
{
    int num;
    printf("Enter number to check if it's prime or not: ");
    scanf("%d", &num);

    if(primeNumber(num)){
        printf("\n%d is prime number \n", num);
    }else{
        printf("\n [%d] No, it's not a prime number: \n", num);
    }
    return 0;
}

int primeNumber(int number){
    if(number<=1){
        return 0;
    }
    for(int i=2; i*i<=number;i++){ //i=4 7/2=
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}
