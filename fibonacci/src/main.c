#include <stdio.h>  //header file

int main()
{
    
int x,first=-1,second=1,c,i; //declaring variables

printf("Fibonacci series upto:\n");
scanf("%d", &x);

for (i = 1; i <= x; i++)
{

c = first + second;
first = second;
second = c;

printf("%d\n", c);
}
    return 0;
}


