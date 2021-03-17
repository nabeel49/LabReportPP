//program to find mathematical table of any number 

#include <stdio.h> //header file

int main(void)
{

int n, i;          //declaring variables

printf("Type the number you want to get the table of:\n");
scanf("%d", &n);

//using for loop

for (i=0; i <= 20; i++)

{
printf("%d * %d = %d\n", n, i, n*i);
}

   return 0;
}

