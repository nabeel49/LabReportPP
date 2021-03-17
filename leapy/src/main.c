//program to find leap year

#include <stdio.h>

int main(void)
{

int year;  //declaring the only variable 

printf("Enter the year:\n");
scanf("%d", &year);

//using extended if-else statement 

if (year%400 == 0) //if the year typed is divisible by 400
{
printf("Its a leap year!\n");
}

else if (year%100 == 0 && year%400 != 0) //if the year typed is divisible by 100 and 400 both
{
printf("Its not a leap year!\n");
}

else if (year%4 == 0 && year%100 != 0) //if the year typed is divisible by 4 and 100 both 
{
printf("Its a leap year!\n");
}

else 
{
printf("Its not a leap year!\n");
}
return 0;
}

