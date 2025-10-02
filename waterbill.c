/* mame:ANDLIANE KARANJA 
reg no:CT100/G/26193/25
Description:c program to calculate water bill 
*/

#include <stdio.h>

int main(){ 
float units,water_bill,Total_water_bill;
 
 printf("Enter the water units consumed: ");
 scanf("%f",&units);
 
 if(units <=30){
 water_bill = units * 20;
   }
   else if(units>=31 && units<=60){
   water_bill = units *25;
   }
   
   else{water_bill = units * 30;
   }
   
   Total_water_bill = water_bill;
   printf("The total water bill is ksh.%.2f",Total_water_bill);

return 0;
}