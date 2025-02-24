//program to find compound interest 
/*
program to find compound interest 
Author: Peace Mueni Sammy 
Reg no :D33-2423-2023
Version 1
date:24/2/2025
*/
#include<stdio.h>
int main(){
//double principle;rate, time, compound interest;
total-amount;
int n;
printf("program to find compound interest,\n");
printf("Enter the given principle amount,\n");
scanf("%1f,"&principle);\\use of long float);
printf("Enter the annual rate of interest(in%);\n");
scanf("%1f,"&rate);
printf("Enter the given time period(in years)\n");
printf("Enter the number of times interest is compounded per year"\n);
scanf("%d,"&n);//converting the rate into decimal rate=rate/100;
calculating the total amount,total-amount=principle*pow((1+rate/n),(n*time));
calculating compound interest, compound-interest=total-amount - principle;
printf("The compound interest is:%2f\n,"compound-interest);
printf("total amount:%2f\n,"total-amount);
Return 0;
}