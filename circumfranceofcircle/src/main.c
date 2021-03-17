#include <stdio.h> //header file

int main(void)
{

float pi = 3.141592, r, c; //declaring variables

printf("Type the desired radius of the circle:\n");  
scanf("%f", &r);

c = 2*pi*r; //formula for circumfrance of a circle

printf("Required circumfrance of the circle will be %0.2f\n", c);

    return 0;
}

