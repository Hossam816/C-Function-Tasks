#include <stdio.h>
#include <stdlib.h>

#define maxStudents  50
#define maxNameLength  50


struct Student{
    char name[maxNameLength];
    int age;
};

int main()
{

    int studentNumber;
    printf("Enter Student Number: ");
    scanf("%d", &studentNumber);

    if(studentNumber<=0 /*||studentNumber>maxStudents*/){
        printf("Invalid. \n");
        return 1;
    }

   struct Student *std = (struct Student *)malloc(studentNumber * sizeof(struct Student));

   if(std==NULL){
    printf("Allocation Failed.\n");
    return 1;
   }


    for(int i = 0; i<studentNumber;i++){
        printf("Enter Student Name%d: ", i+1);
        scanf("%s", &std[i].name);

        printf("Enter Student Age %d: ", i+1);
        scanf("%d", &std[i].age);
    }


    printf("\nStudent Inforamtion: \n\n");
    for(int i=0; i<studentNumber;i++){
        printf("Student: %d\n",i+1);
        printf("Name: %s\n",std[i].name);
        printf("Age: %d\n",std[i].age);
        printf("\n");

    }


    /*Realloc Dynamic Memory*/

    int additionalStudents;
    printf("Enter Number Of Additional Students: ");
    scanf("%d", &additionalStudents);

    if(additionalStudents > 0){
        std = (struct Student *)realloc(std, (studentNumber+additionalStudents)*sizeof(struct Student));
        if(std == NULL){
            printf("Allocation Failed");
            return 1;
        }
        for(int i = 0;i<studentNumber + additionalStudents;i++){
            printf("Enter Student Name%d: ", i+1);
            scanf("%s", &std[i].name);

            printf("Enter Student Age %d: ", i+1);
            scanf("%d", &std[i].age);
        }
        studentNumber+=additionalStudents;
    }
    printf("\nThe updated Information About Students");
    for(int i =0;i<studentNumber;++i){
        printf("Student Number %d:\n", i+1);
        printf("Name: %s\n", std[i].name);
        printf("Age: %d\n", std[i].age);
        printf("\n");
    }


    free(std);

    return 0;
}
