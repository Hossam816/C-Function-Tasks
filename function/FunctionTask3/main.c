#include <stdio.h>
#include <stdlib.h>

int primeNumber(int number);
void showPrimeNumbers(int begining, int end);

int main()
{
    int begining,end;
    printf("Enter Start of the interval: ");
    scanf("%d", &begining);
    printf("Enter End of the interval: ");
    scanf("%d", &end);

    if(begining>end){
        printf("Invalid!");
    }else{
        showPrimeNumbers(begining,end);
    }


    return 0;



}

int primeNumber(int number){
    if(number < 0){
        return 0;
    }
    for(int i=2;i*i<=number;i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}

void showPrimeNumbers(int begining, int end){
    printf("The prime numbers between %d : %d are : ", begining, end);
    for(int i=begining;i<=end;i++){
        if(primeNumber(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
}
