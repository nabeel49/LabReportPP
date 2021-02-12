#include <stdio.h>

int main(void)
{

// declaring variables
   
int i, j;
i = 3;   //for specifically table of 3

for (j=0; j <= 20; j++)
{
printf("%d x %d = %d\n", i, j, i*j);  // i x j = i*j
}
    return 0;
}

