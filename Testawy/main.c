#include <stdio.h>
#include <stdlib.h>


#define CITY_COUNT 2
#define DAYS_IN_WEEK 7

int main()

    /*>>>>>>>>>>Task 1<<<<<<<<<<*/

{
   /* int size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    int firstArray[size];

    for(int i=0;i<size;i++){
            printf("Enter array element: ");
            scanf("%d", &firstArray[i]);
        }

    for(int i=0;i<size;i++){
        printf("%d ", firstArray[i]);
    }
    printf("\n");
*/

    /*>>>>>>>>>>Task 2<<<<<<<<<<*/
/*
    int size;
    float sum = 0.0, average;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int mainArray[size];

    for(int i=0;i<size;i++){
        printf("Enter array elements: ");
        scanf("%d", &mainArray[i]);
        sum+=mainArray[i];
    }
    average = sum/size;

    printf("Array Elements: ");
    for(int i=0;i<size;i++){
        printf("%d ", mainArray[i]);
    }

    printf("\n Average of the array elements is : %.2f\n", average);
*/
        /*>>>>>>>>>>Task 3<<<<<<<<<<*/
  /*  int size;
    printf("Array size = ");
    scanf("%d", &size);

    int mainArray[size];

    for(int i=0;i<size;i++){
        printf("Enter Array Elements: ");
        scanf("%d", &mainArray[i]);
    }
    int greatestElement = mainArray[0];

    //find the greatest number
    for(int i=1;i<size;i++){
        if(mainArray[i] > greatestElement){
            greatestElement = mainArray[i];
        }
    }

    printf("Array Elements: ");

    for(int i=0;i<size;i++){
        printf("%d ", mainArray[i]);
    }


    printf("\n The Greatest Element is: %d \n", greatestElement);
*/
    /*>>>>>>>>>>Task 4<<<<<<<<<<*/
    /*int days;
    printf("How many days you want to store the Temp? ");
    scanf("%d", &days);
    int temperatures[2][days];

    // Input temperatures for two cities for a week
    printf("Enter temperatures for two cities for each day of the week:\n");
    for (int i = 0; i < 2; i++) {
        printf("For city %d:\n", i + 1);
        for (int j = 0; j < days; j++) {
            printf("Enter temperature for day %d: ", j + 1);
            scanf("%d", &temperatures[i][j]);
        }
    }

    // Displaying the temperatures for two cities
    printf("\nTemperatures for two cities for each day:\n");
    for (int i = 0; i < 2; i++) {
        printf("For city %d:\n", i + 1);
        for (int j = 0; j < days; j++) {
            printf("%d\n", temperatures[i][j]);
        }
        printf("\n");
    }
    */

    /*>>>>>>>>>>Task 5<<<<<<<<<<*/
    /*int colSize, rowSize, sum= 0;

    printf("Column Size = ");
    scanf("%d", &colSize);
    printf("Row Size = ");
    scanf("%d", &rowSize);

    int mainArray[rowSize][colSize];

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            printf("Number poistion (%d,%d): ", j+1, i+1);
            scanf("%d", &mainArray[i][j]);

            sum +=mainArray[i][j];
        }
    }

    //display matrix element
    for(int i=0;i<rowSize;i++ ){
        for(int j=0;j<colSize;j++){
            printf("%d\n", mainArray[i][j]);
        }
        printf("\n");
    }

    printf("\nThe resultof all numbers is: %d\n", sum);

*/

    /*>>>>>>>>>>Task 6<<<<<<<<<<*/

    /*int cols = 2, rows = 2;
    int mat1[rows][cols], mat2[rows][cols], sumMat3[rows][cols];

    //first matrix
    for(int i = 0; i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Matrix 1 Element (%d, %d): ", i+1,j+1);
            scanf("%d", &mat1[i][j]);
        }
    }
    //second matrix
    for(int i = 0; i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Matrix 2 Element (%d, %d): ",i+1,j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    //sum matrix
    for(int i = 0; i<rows;i++){
        for(int j=0;j<cols;j++){
            sumMat3[i][j]=mat1[i][j] + mat2[i][j];

        }
    }
    //display first Matrix
    for(int i = 0; i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    //display second matrix
    for(int i = 0; i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    //display Sum Matrix
    printf("Matrix 3 is: \n");
    for(int i = 0; i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ", sumMat3[i][j]);
        }
        printf("\n");
    }


*/


        /*>>>>>>>>>>Task 7<<<<<<<<<<*/



    int cols = 2, rows = 2;
    int mat1[rows][cols], mat2[rows][cols], sumMat3[rows][cols];

    //first matrix
    for(int i = 0; i < rows ;i++){
        for(int j=0; j < cols ; j++){
            printf("Matrix 1 Element: ");
            scanf("%d", &mat1[i][j]);
        }
    }
    //second matrix
    for(int i = 0; i < rows ; i++){
        for(int j=0; j < cols ;j++){
            printf("Matrix 2 Element: ");
            scanf("%d", &mat2[i][j]);
        }
    }
    //sum matrix
    for(int i = 0; i < rows ;i++){
        for(int j=0;j < cols ;j++){
            sumMat3[i][j]=mat1[i][j] * mat2[i][j];
        }
    }
    //display first Matrix
    for(int i = 0; i < rows ;i++){
        for(int j=0; j < cols ;j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    //display second matrix
    for(int i = 0; i < rows ;i++){
        for(int j=0; j < cols ; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    //display Sum Matrix
    printf("Matrix 3 is: \n");
    for(int i = 0; i < rows ;i++){
        for(int j=0;j < cols ;j++){
            printf("%d ", sumMat3[i][j]);
        }
        printf("\n");
    }









    return 0;
}
