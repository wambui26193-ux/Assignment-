/*
name:ANDLIANE KARANJA
reg:CT100/G/26193/25
description:c program to grant or deny loan
*/

#include <stdio.h>

int main (){
 int age;
 float annualincome;
 printf("enter your age:");
 scanf("%d",&age);
 
 printf("\nenter your annualincome:ksh");
 scanf("%f",&annualincome);
 
 if(age>=21&& annualincome>=2100){
 printf("congratulations you qualify for the loan");
 }
 
 else{
   printf("unfortunately,we are unable to offer the loan this time");
 
 }
 
return 0;}