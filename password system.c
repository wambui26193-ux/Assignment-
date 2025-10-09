/*
Name:ANDLIANE KARANJA 
reg:CT100/G/26193/25
Description:number guesssing game
*/

 #include <stdio.h>

int main() {
    int password,pd=1234;
    
    do{
   printf("Enter password:");
   scanf("%d",&password);
   
   if(password!=pd)
   {
   printf("INCORRECT PASSWORD \n");
   }
   else
   {
   printf("ACCESS GRANTED \n");
   }
   }
    while(password!=pd);
    
    
    return 0;
    }
    
     