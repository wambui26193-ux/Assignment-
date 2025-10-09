/*
Name:ANDLIANE KARANJA 
reg:CT100/G/26193/25
Description:number guesssing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretnumber, guess;
    srand(time(0));
    secretnumber=(rand() % 20) +1;
  printf("welcome to number guesssing game \n");
  printf("write your guess:");
  scanf("%d",&guess);
  while(guess!= secretnumber)
  {
  if(guess>secretnumber){
  printf("Too high \n");
  }
  else{
  printf("Too low \n");
  }
  printf("Enter your guess again:");
  scanf("%d",&guess);
  }
  
  printf("congratulations you guessed correctly");
  

    return 0;
}