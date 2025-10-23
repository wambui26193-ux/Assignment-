/*  
NAME:ANDLIANE KARANJA 
REG NO:CT100/G/26193/25
Description: calculating electricity bill
*/
#include <stdio.h>

float ElectricBill(int units){
float bill;

  if(units<=100){
  bill=units * 10;}
  
  else if(units <=200){
  bill=(100*10)+ ((units-100)*15);
  } 
  
  else{
  bill=(100*10)+ (100*15) + ((units-200) *20);
  }
  
  return bill;

}
int main(){
int units;
printf("Enter the number of units consumed;\n");
scanf("%d",&units);

printf(" Total bill= KES%.2f",ElectricBill(units));

  
 
 return 0;
 
 } 