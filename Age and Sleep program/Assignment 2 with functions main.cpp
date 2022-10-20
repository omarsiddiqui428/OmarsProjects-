//
//  main.cpp
//  UmassD assignment 2
//
//  Created by Omar Siddiqui on 9/16/22.
//

#include <iostream>

#include <stdio.h>

int userAgeDays(int userAgeYears){
    return userAgeYears * 365;
}

int main(void) {
    int userAgeYears;
   int userDailySleep;
   
   printf("Enter your age in years: ");
   scanf("%d", &userAgeYears);
    
   printf("Enter the average number of hours you sleep a day: ");
   scanf("%d", &userDailySleep);
   
   printf("You are %d days old.\n", userAgeDays(userAgeYears));
   
   printf("You are %d minutes old.\n", userAgeDays(userAgeYears) * 24 * 60);
    // 24 hours/day, 60 minutes/hour
    
    printf("You are %d seconds old.\n", userAgeDays(userAgeYears) * 24 * 60 * 60);
    // User age in seconds, 60 second per minute
    
    printf("You have sneezed approximately %d times in your life.\n",userAgeDays(userAgeYears) * 4);
    //average person sneezes 4 times per day
    
    printf("You have expended approximately %d calories in your life.\nThis is equivalent to approximately %d bagels.\n",userAgeDays(userAgeYears) * 2000,userAgeDays(userAgeYears) * 2000 / 245);
    // people expend approx 2000 calories per day
    // around 245 calories per bagel
    
    printf("Based on your daily sleep hours, you have slept %d hours in your life.\nBased on 8 recommended hours of sleep per day,\nyou are %d hours short on sleep.\nSleep is important for your health!\n", userAgeDays(userAgeYears) * userDailySleep,userAgeDays(userAgeYears) * 8 - userAgeDays(userAgeYears) * userDailySleep);
    //user ideal sleep hours based on recommended 8 hours per day
    
   return 0;
}
