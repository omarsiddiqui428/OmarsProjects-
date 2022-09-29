//
//  main.cpp
//  Dice Statistics Project
//
//  Created by Omar Siddiqui on 9/28/22.
//

#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printHistogram(int numTwos, int numThrees, int numFours, int numFives, int numSixes, int numSevens, int numEights, int numNines, int numTens, int numEllevens, int numTwelves) {
    
    int i = 0;
    printf("\nDice Roll Histogram: \n\n");
    printf("2: ");
    for (i = 0; i < numTwos; i++){
        printf("*");
    }
    printf("\n");
    printf("3: ");
    for (i = 0; i < numThrees; i++){
        printf("*");
    }
    printf("\n");
    printf("4: ");
    for (i = 0; i < numFours; i++){
        printf("*");
    }
    printf("\n");
    printf("5: ");
    for (i = 0; i < numFives; i++){
        printf("*");
    }
    printf("\n");
    printf("6: ");
    for (i = 0; i < numSixes; i++){
        printf("*");
    }
    printf("\n");
    printf("7: ");
    for (i = 0; i < numSevens; i++){
        printf("*");
    }
    printf("\n");
    printf("8: ");
    for (i = 0; i < numEights; i++){
        printf("*");
    }
    printf("\n");
    printf("9: ");
    for (i = 0; i < numNines; i++){
        printf("*");
    }
    printf("\n");
    printf("10: ");
    for (i = 0; i < numTens; i++){
        printf("*");
    }
    printf("\n");
    printf("11: ");
    for (i = 0; i < numEllevens; i++){
        printf("*");
    }
    printf("\n");
    printf("12: ");
    for (i = 0; i < numTwelves; i++){
        printf("*");
    } printf("\n");
}

int main(void){
    int i;           // Loop counter iterates numRolls times
    int numRolls;    // User defined number of rolls
    int numTwos = 0;     // Tracks number of 2s found
    int numThrees = 0;   // Tracks number of 3s found
    int numFours = 0;    // Tracks number of 4s found
    int numFives = 0;    // Tracks number of 5s found
    int numSixes = 0;    // Tracks number of 6s found
    int numSevens = 0;   // Tracks number of 7s found
    int numEights = 0;   // Tracks number of 8s found
    int numNines = 0;    // Tracks number of 9s found
    int numTens = 0;     // Tracks number of 10s found
    int numEllevens = 0; // Tracks number of 11s found
    int numTwelves = 0;  // Tracks number of 12s found
    int die1;        // Dice values
    int die2;        // Dice values
    int rollTotal;   // Sum of dice values
    

    
    while (numRolls >= 1) {
        printf("Enter number of rolls: 0 will end program and print results\n");
        scanf("%d", &numRolls);
        srand(time(0));
        
        if (numRolls >= 1) {
            // Roll dice numRoll times
            for (i = 0; i < numRolls; ++i) {
                die1 = rand() % 6 + 1;
                die2 = rand() % 6 + 1;
                rollTotal = die1 + die2;
                
                // Count number of sixes and sevens
                
                if (rollTotal == 2) {
                    numTwos = numTwos + 1;
                }
                else if (rollTotal == 3) {
                    numThrees = numThrees + 1;
                }
                else if (rollTotal == 4) {
                    numFours = numFours + 1;
                }
                else if (rollTotal == 5) {
                    numFives = numFives + 1;
                }
                else if (rollTotal == 6) {
                    numSixes = numSixes + 1;
                }
                else if (rollTotal == 7) {
                    numSevens = numSevens + 1;
                }
                else if (rollTotal == 8) {
                    numEights = numEights + 1;
                }
                else if (rollTotal == 9) {
                    numNines = numNines + 1;
                }
                else if (rollTotal == 10) {
                    numTens = numTens + 1;
                }
                else if (rollTotal == 11) {
                    numEllevens = numEllevens + 1;
                }
                else if (rollTotal == 12) {
                    numTwelves = numTwelves + 1;
                }
                
                printf("\nRoll %d is %d (%d+%d)", i + 1, rollTotal, die1, die2);
            }
            
            // Print statistics on dice rolls
            printf("\n\nDice roll statistics: \n");
            printf("2s: %d\n",numTwos);
            printf("3s: %d\n",numThrees);
            printf("4s: %d\n",numFours);
            printf("5s: %d\n",numFives);
            printf("6s: %d\n",numSixes);
            printf("7s: %d\n",numSevens);
            printf("8s: %d\n",numEights);
            printf("9s: %d\n",numNines);
            printf("10s: %d\n",numTens);
            printf("11s: %d\n",numEllevens);
            printf("12s: %d\n",numTwelves);
        }
        else {
            printf("\n");
        }
        
    }
    printf("\n\nDice roll statistics: \n");
    printf("2s: %d\n",numTwos);
    printf("3s: %d\n",numThrees);
    printf("4s: %d\n",numFours);
    printf("5s: %d\n",numFives);
    printf("6s: %d\n",numSixes);
    printf("7s: %d\n",numSevens);
    printf("8s: %d\n",numEights);
    printf("9s: %d\n",numNines);
    printf("10s: %d\n",numTens);
    printf("11s: %d\n",numEllevens);
    printf("12s: %d\n",numTwelves);
    printHistogram(numTwos,numThrees,numFours,numFives,numSixes,numSevens,numEights,numNines,numTens,numEllevens,numTwelves);
    return 0;
}



