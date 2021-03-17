//swapping using temporary variable

#include<stdio.h> //header file
int main()
{
double x, y, z;   //declaring variables
printf("Enter first number: ");
scanf("%lf", &x);

printf("Enter second number: ");
scanf("%lf", &y);

z = x;

x = y;

y = z;

printf("\nAfter swapping, firstNumber = %.2lf\n", x);
printf("After swapping, secondNumber = %.2lf", y);

return 0;
}

