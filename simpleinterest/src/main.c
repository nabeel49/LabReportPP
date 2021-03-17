//program to calculate simple interest 

#include <stdio.h> //header file

int main(void)
{
   
float p, r, t, si; //declaring variables

printf("Type the desired value of principal amount:\n");
scanf("%f", &p);

printf("Type the desired value of Interest Rate:\n");
scanf("%f", &r);

printf("Type the desired value of time (in years):\n");
scanf("%f", &t);

si = (p*r*t)/100; //formula for simple interest 

printf("Simple Interest will be %f\n", si);

    return 0;
}

