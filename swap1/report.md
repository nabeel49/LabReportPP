[Home of Lab Report](../lab.html)

# Program to swap numbers using temperary variable

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

## Flow Chart 

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbiAgICAxKFtzdGFydF0pLS0-MlsvSW5wdXQgeCBhbmQgeS9dXG4gICAgMi0tPjNbIHogPSB4PGJyLz54ID0geTxici8-eSA9IHpdXG4gICAgMy0tPjRbL1ByaW50IHN3YXBwZWQgeCBhbmQgeS9dXG4gICAgNC0tPjUoW3N0b3BdKSIsIm1lcm1haWQiOnsidGhlbWUiOiJkZWZhdWx0In0sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)

---

# src/main.c

```

//swapping using temporary variable

#include<stdio.h> //header file
int main()
{
double x, y, z;   //declaring variables
printf("Enter first number: ");
scanf("%lf", &x);

printf("Enter second number: ");
scanf("%lf", &y);

z = x;

x = y;

y = z;

printf("\nAfter swapping, firstNumber = %.2lf\n", x);
printf("After swapping, secondNumber = %.2lf", y);

return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release swap1
[100%]: build ok!

```

## Execution
```
xmake run

Enter first number: Enter second number: 
After swapping, firstNumber = 0.00
After swapping, secondNumber = 0.00
```

### Known Bugs and/or Errors:

No bug or error found so far..

### Lessons Learned:

1. I find this approach easier than not using temporary variables. 
2. We have two methods to swap numbers.
