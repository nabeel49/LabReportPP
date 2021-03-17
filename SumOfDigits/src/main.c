#include <stdio.h> //header file

int main(int argc, char** argv)
{
int x, r, sum = 0;  //declaring variables

printf("Enter any number\n"); 
scanf("%d", &x);

while (x!=0) //while loop
{
r = x % 10; //gives last digit of the number 
sum = sum + r; //adds to the number previously obtained 
x = x / 10; //to seperate last (used) digit 
}
printf("Sum of digits : %d", sum);

return 0;
}
