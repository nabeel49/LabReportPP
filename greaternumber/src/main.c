#include <stdio.h> //header file

int main(void)
{
   
int a , b, c; //declaring variables

printf("enter three integral numbers:\n");
scanf("%d %d %d", &a, &b, &c);

//using "&" operator to choose between 3 numbers 
//using extended form of if-else

if (a > b && a > c) 
printf("%d is the greatest integer chosen\n", a);

else if (b > a && b > c)
printf("%d is the greatest integer\n", b);

else
printf("%d is the greatest integer\n", c);

    return 0;

}

