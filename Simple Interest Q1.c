/*Program to calculate simple interest
Author: Francis Mwiga Kimani*/
#include <stdio.h>
int main() {
  float principal,rate,time,simple_interest;
  // input of the principal amount 
  printf("Enter the principal amount: ");
  scanf("%f", &principal);
  // input of the Rate 
  printf("Enter the rate in percent: ");
  scanf("%f", &rate);
  // input of the time
  printf("Enter the Time in Years: ");
  scanf("%f", &time);
  //calculation of the simple interest using the formula given
  simple_interest=(principal*rate*time)/100;
  //output the calculated interest in kSh
  printf("simple interest is:%.3fKsh", simple_interest);
  return 0;
}