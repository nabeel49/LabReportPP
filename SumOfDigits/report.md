[Home of Lab Report](../lab.html)

# Program - Finding sum of digits of any number

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart 

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW3N0YXJ0XSktLT4yW2ludCB4LCBpLCBhPS0xLDxici8-Yj0xLCBjXVxuMi0tPnxzY2FuZnwzWy9pbnB1dCBuIG51bWJlciBvZiB0ZXJtcyAvXVxuMy0tPjR7e2kgPSAxPGJyPmkgPD0geDxicj5pKyt9fVxuNC0tLTVbYyA9IGEgKyBiPGJyPmEgPSBiPGJyPmIgPSBjXVxuNS0tPjZbL3ByaW50IGMvXVxuNi0tPjRcbjQtLT43KFtzdG9wXSkiLCJtZXJtYWlkIjp7InRoZW1lIjoiZGVmYXVsdCJ9LCJ1cGRhdGVFZGl0b3IiOmZhbHNlfQ)

---

# src/main.c

```

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

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release SumOfDigits
[100%]: build ok!

```

## Execution
```
xmake run

Enter any number
Sum of digits : 25
```

### Known Bugs and/or Errors:

It will give wrong output if entered a large number. The wrong output can be zero, or an integer.

### Lessons Learned:

1. Using a while loop.
2. I'll try running it using different loops like for and do also.
