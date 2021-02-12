#include <stdio.h>

int main()
{
 
float c, f;

    printf("Enter the value in degree celcius:\n");
    scanf("%f", &c);

f = (c*9/5) + 32.0;

    printf("The value in fahrenheit will be %0.2f F\n", f);

    return 0;
}

