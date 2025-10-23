/* 
NAME:ANDLIANE KARANJA 
REG NO:CT100/G/26193/25
Description: calculate the fare used 
*/
#include <stdio.h>
float CalculateFare(float distance){
float Totalfare;
Totalfare= distance * 50;
return Totalfare;
}


int main (){
float kilometers;

printf("Enter the distance travelled:");
scanf("%f",&kilometers);

   float TotalFare = CalculateFare(kilometers);
  printf("Totalfare is Ksh.%.2f", TotalFare);
 
 return 0;
 
 } 