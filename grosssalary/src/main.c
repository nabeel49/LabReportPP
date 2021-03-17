//program to find gross salary

#include <stdio.h> //header file

int main(void)
{

float salary, all, pro, x; //declaring variables

printf("type your basic salary:\n");
scanf("%f", &salary);

printf("type the sum of all your allowances:\n");
scanf("%f", &all);

printf("type the amount of profits earned:\n");
scanf("%f", &pro);

x = salary+all+pro; //adding all the earnings

printf("Gross Income = %0.2f\n", x);

    return 0;
}

