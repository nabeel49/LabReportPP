//program to find sum of n natural numbers

#include <stdio.h> //header file

int main()
{

int i, n, sum = 0; //declaring variables

printf("Enter any number n:\n");

scanf("%d", &n);

//using for loop

for(i = 1; i <= n; i++)

{

printf("%d\n", i);

sum += i;  //sum = sum + i

}

printf("the sum will be %d\n", sum);

return 0;

}

