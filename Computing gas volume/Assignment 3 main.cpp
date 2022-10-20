//
//  main.cpp
//  Assignment 3
//
//  Created by Omar Siddiqui on 9/16/22.
//

#include <iostream>

#include <stdio.h>

const double GAS_CONST = 8.3144621;

double ComputeGasVolume(double gasPressure,double gasTemperature, double gasMoles) {
   return (gasMoles * GAS_CONST * gasTemperature) / gasPressure;
   
}

int main(void) {
   double gasPressure;
   double gasMoles;
   double gasTemperature;
   double gasVolume;

   scanf("%lf", &gasPressure);
   scanf("%lf", &gasMoles);
   scanf("%lf", &gasTemperature);

   gasVolume = ComputeGasVolume(gasPressure, gasTemperature, gasMoles);
   printf("Gas volume: %lf m^3\n", gasVolume);

   return 0;
}
