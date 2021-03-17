//program to find sum of first 10 numbers and their average 

#include <stdio.h>  //header file

int main(void)
{

//declaring variables

int i, sum=0;
float avg;

//using for loop

for (i=1; i <= 10; i++)
{
printf("%d\n", i);

sum += i;  //sum = sum + i
}

//finding the average 

avg = sum / 10.0;

printf("Sum of first ten numbers is: %d\n\
and the average is %0.2f\n", sum, avg); 

    return 0;
}

