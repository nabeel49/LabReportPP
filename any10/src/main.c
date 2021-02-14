// program to display first ten numbers and finding the average 

#include <stdio.h>

int main(void)
{ 

// declaring variables  

int i, n, sum=0; 
float avg;

// printing the first ten numbers and finding their sum

for (i=1;i<=10;i++)
{
printf("Number%d :\n",i);

scanf("%d",&n);

sum +=n;
}

// doing average 

avg = sum / 10.0;

printf("Sum of first ten numbers is: %d\n\
and the average is %0.2f\n", sum, avg); 

    return 0;
}

