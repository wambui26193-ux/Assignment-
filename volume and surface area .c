/*
name:ANDLIANE KARANJA 
reg:CT100/G/26193/25
description:c program to calculate volume and surface area
*/

#include <stdio.h>

int main (){
 float pi,radius,height,volume,area;
 printf("enter pi:");
 scanf("%f",&pi);
 
 printf("\n enter radius:");
 scanf("%f",&radius);
 
 printf("\n enter height:");
 scanf("%f",&height); 
 
 volume =pi*radius*radius*height;
 
 area = 2*pi*radius*radius+2*pi*radius*height;
 
 printf("\n volume is cm³ %.3f",volume);
 
printf("\n area is cm² %.3f",area);
























return 0;}