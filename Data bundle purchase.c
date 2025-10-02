/* 
name:ANDLIANE KARANJA 
Reg no:CT100/G/26193/25
Description: C program for data purchase
*/
 
#include <stdio.h>

int main (){
int choice;
printf("select data bundle\n");
printf("1.100MB @50 KES\n ");
printf("2.500MB @200 KES\n");
printf("3.1GB @350 KES\n");
printf("4.2GB @600 KES");

printf("\n Enter your choice(1-4)");
scanf("%d",&choice);
 
 switch(choice){
 case 1:
 printf("you selected 100MBs. Cost = KES 50\n");
 break;
 
 case 2:
 printf("you selected 500MBs. Cost = KES 200 \n");
 break;
 
 case 3:
 printf("you selected 1GB. Cost = KES 350\n");
 break;
 
 case 4:
 printf("you selected 2GB. Cost = KES 600");
 break;
 
 default:
 printf("Invalid choice!!");
 break;
 
 }

return 0;
}