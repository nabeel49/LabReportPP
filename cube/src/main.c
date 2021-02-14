#include <stdio.h> //header file

int main(void)
{

int x, y;          //declaring variables

printf("Program to find cube upto desired numbers\n"); 
printf("Type the range of values:\n"); //number upto which you want cubes
scanf("%d", &x);

for (y = 1; y <= x; y++) //running for loop
{
printf("%d\n", (y*y*y));
}
return 0;
}

