/*Program to calculate Compound interest
Author: Francis Mwiga Kimani*/
#include <stdio.h>
int main() {
  float principal,rate,time,Compound_interest,compounded_times;
  // input of the principal amount
  printf("Enter the principal amount: ");
  scanf("%f", &principal);
  // input of the rate
  printf("Enter the rate in percent: ");
  scanf("%f", &rate);
  //input of time in years
  printf("Enter the Time in Years: ");
  scanf("%f", &time);
  // input of the number of times compounded 
  printf("Enter the Number of times Compounded per Year: ");
  scanf("%f", &compounded_times);
  //Calculation of the compound intrest using the formula given
  Compound_interest=principal * pow (1+((rate/100)/compounded_times),compounded_times*time);
  //output the calculated interest in kSh
  printf("Final Amount:%.3f", Compound_interest);
  return 0;
}