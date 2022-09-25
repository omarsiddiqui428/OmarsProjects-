//
//  main.cpp
//  Calculator program
//
//  Created by Omar Siddiqui on 9/24/22.
//

#include <iostream>
// Operation Functions
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);


int main(void){
    int operation = 0;
    double num1 = 0;
    double num2 = 0;
    
    // getting user operation preference
    printf("Enter what operation you want to perform:\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n");
    scanf("%d",&operation);
    
    // getting user first number
    printf("Enter your first number: ");
    scanf("%lf",&num1);
    
    // getting user second number
    printf("Enter your second number: ");
    scanf("%lf",&num2);
    
    switch(operation){
        case 1:
            add(num1,num2);
            break;
            
        case 2:
            subtract(num1,num2);
            break;
        
        case 3:
            multiply(num1,num2);
            break;
            
        case 4:
            divide(num1,num2);
            break;
            
        default:
            printf("Not a valid operation. Program closing...");
            break;
    }
    
}

double add(double num1, double num2){
    double sum = num1 + num2;
    printf("\n%.2lf + %.2lf = %.2lf\n\n", num1, num2, sum);
    return 0;
}
double subtract(double num1, double num2){
    double sum = num1 - num2;
    printf("\n%.2lf - %.2lf = %.2lf\n\n", num1, num2, sum);
    return 0;
}
double multiply(double num1, double num2){
    double sum = num1 * num2;
    printf("\n%.2lf * %.2lf = %.2lf\n\n", num1, num2, sum);
    return 0;
}
double divide(double num1, double num2){
    double sum = num1 / num2;
    printf("\n%.2lf / %.2lf = %.2lf\n\n", num1, num2, sum);
    return 0;
}

