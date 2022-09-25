//
//  main.cpp
//  Assignment 5
//
//  Created by Omar Siddiqui on 9/24/22.
// Project: Get user input, an integer, from "Input" file, and print a traingle, square, and diamond using that integer to the "Output" file 

#include <iostream>
#include <stdio.h>

char readLetter();
void printTriangle(char letter);
void printSquare(char letter);
void printDiamond(char letter);

int main(void) {
    char letter = readLetter();
    
    printTriangle(letter);
    printSquare(letter);
    printDiamond(letter);
    
    return 0;
}

char readLetter () {
    FILE * inputFile = fopen("Input.txt","r");
    char letter = ' ';
    if (inputFile == NULL) {
        printf("Could not open input file.\n");
        return -1;
        
    }
    fscanf(inputFile,"%c",&letter);
    fclose(inputFile);
    return letter;
    

}

void printTriangle(char letter) {
    FILE* outputFile = fopen("output.txt","w");
    
    fprintf(outputFile,"  %c\n",letter);
    fprintf(outputFile," %c%c%c\n",letter,letter,letter);
    fprintf(outputFile,"%c%c%c%c%c\n",letter,letter,letter,letter,letter);
    
    fclose(outputFile);
    
}

void printSquare(char letter) {
    FILE* outputFile = fopen("output.txt","a");
    
    fprintf(outputFile,"\n\n%c%c%c\n",letter,letter,letter);
    fprintf(outputFile,"%c%c%c\n",letter,letter,letter);
    fprintf(outputFile,"%c%c%c\n",letter,letter,letter);
    
    fclose(outputFile);
    
}

void printDiamond(char letter) {
    FILE* outputFile = fopen("output.txt","a");
    
    fprintf(outputFile,"\n\n      %c     \n",letter);
    fprintf(outputFile,"    %c    %c    \n",letter,letter);
    fprintf(outputFile,"  %c        %c\n",letter,letter);
    fprintf(outputFile,"%c            %c\n",letter,letter);
    fprintf(outputFile," %c          %c\n",letter,letter);
    fprintf(outputFile,"   %c      %c\n",letter,letter);
    fprintf(outputFile,"     %c   %c\n",letter,letter);
    fprintf(outputFile,"       %c\n",letter);
    
    fclose(outputFile);
    
}
