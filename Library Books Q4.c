/*Program to calculate library finerate and amount 
Author; Francis Mwiga*/
#include<stdio.h>

int main()
{
int bookid,duedate,returndate,daysoverdue,finerate,totalfine;
//Input ot the Book ID
    printf("Enter The Book ID: ");
    scanf("%d", &bookid);
//input of The Due date    
    printf("Enter The Due date: ");
    scanf("%d", &duedate);
 //Input of the Date book return   
    printf("Enter the Return Date: ");
    scanf("%d", &returndate);
 //calculation of daysoverdue  
daysoverdue=returndate-duedate;
    if (daysoverdue <=7){//days between 0-7
    finerate=20;
}    else if (daysoverdue <=14){//days between 8-14
    finerate=50;
}    else if (daysoverdue >=15){//days more than 15
    finerate=100;
}
//calculation of the total fine charged
totalfine=daysoverdue*finerate;
//Output of all information given Toger with the calculated finerates and fine amounts
    printf("Book ID:%d\n", bookid);
    printf("Due Date:%d\n", duedate);
    printf("Return Date:%d\n", returndate);
    printf("Days Overdue:%d\n", daysoverdue);
    printf("Finerate:%dKsh per day\n", finerate);
    printf("Fine Amount:%dKsh\n", totalfine);
    return 0;
}