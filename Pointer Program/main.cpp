//
//  main.cpp
//  Week 9 project
//
//  Created by Omar Siddiqui on 10/20/22.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//Function Prototypes
void addInt(int** intPtr, int* intCount);
void addDbl(double** dblPtr, int* dblCount);
void addChr(char** chrPtr, int* chrCount);

void printInts(int* intPtr, int intCount);
void printDbls(double* dblPtr, int* dblCount);
void printChrs(char** chrPtr, int chrCount);

//Function to add a value to the int pointer and increment the amount of values in the pointer
void addInt(int** intPtr, int* intCount){
    int value;
    printf("Enter your value: ");
    scanf("%d%*c", &value);

    //Dereference and increment our intCount
    (*intCount)++;
    //Dereference and reallocate memory to our intPtr
    (*intPtr) = realloc((*intPtr), sizeof(int) * (*intCount));
    //Store the entered value into the proper position of our intPtr
    (*intPtr)[(*intCount) - 1] = value;
}


void addDbl(double** dblPtr, int* dblCount){
    double value;
    printf("Enter your value: ");
    scanf("%lf%*c",&value);
    
    (*dblCount)++;
    (*dblPtr) = realloc((*dbl Ptr),sizeof(double) * (*dblCount));
    (*dblPtr)[(*dblCount) - 1] = value;
    
}


void addChr(char** chrPtr, int* chrCount){
    char value;
    printf("Enter your value: ");
    scanf("%c%*c",&value);
    
    (*chrCount)++;
    (*chrPtr) = realloc((*chrPtr),sizeof(char) * (*chrCount));
    (*chrPtr)[(*chrCount) - 1] = value;
}

//Print our integer pointer
void printInts(int *intPtr, int intCount){
    int i = 0;

    printf("\nInts: ");
    for (i = 0; i < intCount; i++){
        printf("%d ", intPtr[i]);
    }
}

//Print our double pointer
void printDbls(double *dblPtr, int dblCount){
    int i= 0;
    printf("\nDbls: ");
    for (i = 0; i < dblCount; i ++) {
        printf("%.2lf",dblPtr[i]);
    }
}

//Print our character pointer
void printChrs(char *chrPtr, int chrCount){
    int i = 0;
    printf("\nChrs: ");
    for (i = 0; i < chrCount; i ++) {
        printf("%c ", chrPtr[i]);
    }
}


int main(){
    //Keep track of the number of each type entered as well as the user's choice for each iteration of the main loop
    int intCount = 0, dblCount = 0, chrCount = 0, userChoice = 0;

    //Create our pointers initially with no memory allocated to them
    int* intPtr = (int *)malloc(sizeof(int) * 0);
    double* dblPtr =(double*)malloc(sizeof(double) * 0);
    char* chrPtr = (char*)malloc(sizeof(char) * 0);

    //Loop until the user chooses to exit
    while (userChoice != 4){
        //Retrieve input from user
        printf("\nWhich value will you add?\n1. Integer\n2. Double\n3. Character\n4. Exit\n");
        scanf("%d%*c", &userChoice);

        //Call different functions based on the user's choice
        switch (userChoice){
        case 1:
            //Add an integer to the int pointer
            addInt(&intPtr, &intCount);
            break;
        case 2:
            //Add a double to the dbl pointer
            addDbl(&dblPtr, &dblCount);
            break;
        case 3:
            addChr(&chrPtr, &chrCount);
            break;
        default:
            printf("\nProgram Complete!\n");
            break;
        }

        //Print all three pointers at the end of every iteration
        printInts(intPtr, intCount);
        printDbls(dblPtr,dblCount);
        printChrs(chrPtr,chrCount);
        printf("\n");
    }

    free(intPtr);
    free(dblPtr);
    free(chrPtr);
    getchar();

    return 0;
}

