//
//  main.cpp
//  Array program
//
//  Created by Omar Siddiqui on 10/15/22.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Defined Macros
#define arraySize 10
#define MIN 1
#define MAX 100

//Functions
void fillArrays(int arr1[arraySize], int arr2[arraySize]);
void mergeArrays(int arr1[arraySize], int arr2[arraySize]);

//Main
int main() {
    int array1[arraySize], array2[arraySize];
    srand(time(0));
    
    fillArrays(array1, array2);
    getchar();
    
    return 0;
}

void fillArrays(int arr1[arraySize], int arr2[arraySize]) {
    
    int i = 0;
    printf("Array 1: ");
    // fill first array
    for (i = 0; i < arraySize; i++){
        arr1[i] = (rand() % MAX) + MIN;
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (i = 0; i < arraySize; i++){
        arr2[i] = (rand() % MAX) + MIN;
        printf("%d ", arr2[i]);
        
        mergeArrays(arr1, arr2);
    }
}
    
void mergeArrays(int arr1[arraySize], int arr2[arraySize]) {
        int i = 0, arr3[arraySize * 2];
        
        for (i = 0; i < arraySize; i++) {
            arr3[i] = arr1[i];
            arr3[arraySize + i] = arr2[i];
        }
        printf("\nArray 3: ");
        for (i = 0; i < 2 * arraySize; i++) {
            printf("%d ", arr3[i]);
        }
    }


