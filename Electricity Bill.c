//Program for Electricity Bill Calculator 
/*Author Francis Mwiga kimani 
ReG:CT101/G/22131/24*/
#include <stdio.h>
int main() {
 int CustomerID;
 char CustomerName;
 float UnitConsumed;
 //Input data by the user 
  printf("Enter your CustomerID:");
  scanf("%d",&CustomerID);
  printf("Enter CustomerName:");
  scanf("%s",&CustomerName);
  printf("Enter the UnitConsumed:");
  scanf("%f",&UnitConsumed);
  //Conditions 
  double ChargesPerUnit;
  if(UnitConsumed<199){
  printf("ChargesPerUnit is Ksh 1.20\n",ChargesPerUnit);
  }
  else if(UnitConsumed<=400){
  printf("ChargesPerUnit is Ksh 1.50\n",&ChargesPerUnit);
  }
  else if(UnitConsumed <=600){
  printf("ChargesPerUnit is Ksh 1.80\n",&ChargesPerUnit);
  }
  else if(UnitConsumed > 601){
  printf("ChargesPerUnit is Ksh 2.00\n",&ChargesPerUnit);
  }
  //Calculation of the total bill
  float TotalBill=UnitConsumed*ChargesPerUnit;
  printf("TotalBill is:%.1f");
 return 0;
 }
 