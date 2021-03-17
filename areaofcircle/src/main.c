// program to find area of circle with desired radius 

#include <stdio.h>

int main(void)
{
 
float pi = 3.141592, r, a;  // declaring variables

printf("Type the desired radius of the circle:\n\n");
scanf("%f", &r);

a = pi*r*r;  // formula for area of circle 

printf("Required area of the circle will be %0.2f\n\n", a);

    return 0;
}

