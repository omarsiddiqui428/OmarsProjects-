//
//  main.cpp
//  Vertical Number program
//
//  Created by Omar Siddiqui on 10/7/22.
//

#include <iostream>
// Printing a number vertically

int vertical (int n); // recirsive function will be called in the main
int main (void) {
    int num;
    
    
    printf("Please enter a number: "); // getting user input
    scanf("%d",&num); // assigning user input with num
    
    vertical(num); // user input will be fed into the vertical function as n
    
    return 0;
}

int vertical (int n){ // defining the actual function
    
    if (n == 0) { // base case, if no remainder left, then exit the program
        return 0;
    }
    else {
        int rightMost = n % 10; // isolating right most digit
        vertical(n / 10); // knocking the right most digit off num and inputting that number through the vertical function
        printf("%d\n", rightMost);
        
        return 0;
    }
    
}
