/*
NAME:ANDLIANE KARANJA
REG:CT100/G/26193/25
DESCRIPTION: 1D array to store revenue for a week
*/

#include <stdio.h>

int main() {
 int revenue[7]={10,50,30,15,22,41,30};
 int i,total=0;
 float average;
 
 for(i=0;i<7;i++){
 
 printf("Day %d:%d \n",i+1,revenue[i]);
 total=total+revenue[i];
 };
 average=total/7;
 
 printf("The total is %d \n",total);
 printf("The average is %.2f",average);
 return 0;}



