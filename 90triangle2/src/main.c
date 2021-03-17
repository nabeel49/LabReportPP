// making a right angled triangle with 10 rows

#include <stdio.h>

int main()
{
int i, j, TriangleHeight = 10; // declaring variables 

for (i = 1; i <= TriangleHeight; ++i) //rows
{
for (j = 1; j <= i; ++j)  //columns
{
printf("#");
}
printf("\n");
}
   return 0;
}


