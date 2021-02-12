#include <stdio.h>   //header file

int main(void)
{
  
int x;               //declaring variables

  printf("Type the desired number:\n");
  scanf("%d", &x);

//using relational operator to compare 

if ( x%2 == 0 )     
{ 
printf("%d is an even number!\n", x);
}

else 
{
printf("%d is an odd number!\n", x);
}
    return 0;
}

