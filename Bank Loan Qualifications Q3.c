//Program to determine Qualifications of A bank Loan
//Author Francis Mwiga
#include<stdio.h>

int main(){
int Age,income;
// input of the Age of the client
printf("Enter the Age: ");
scanf("%d", &Age);
// input of the Annual Income of the client
printf("Enter the Annual Income: ");
scanf("%d", &income);
// Function that Determine the Qualifications 
if (Age>=21 && income>=2100){
 printf("Congratulations you qualify for a loan\n");//Output statement if the client is Qualified 
} else {
printf("Unfortunately we are unable to offer you a loan at this time\n");//Output statement if client is illegible
}
    return 0;
}