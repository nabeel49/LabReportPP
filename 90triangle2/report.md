[Home of Lab Report](../lab.html)

# Program - Making a right angled triangle with 10 rows

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart
![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW1N0YXJ0XSktLT4gMltpPTEsIGo9MSw8YnIvPlRyaWFuZ2xlSGVpZ2h0PTEwXVxuMiAtLT4gM3t7aTw9VHJpYW5nbGVIZWlnaHR9fVxuMy0tLTR7e2o8PWl9fVxuNC0tLTVbL3ByaW50ICMvXVxuNSAtLT4gNCBcbjQgLS0-fGZhbHNlfCA2Wy9wcmludCBcXG48YnIvPi9dXG42LS0-MyAgICAgICAgICAgIFxuMy0tPjcoW3N0b3BdKSIsIm1lcm1haWQiOnt9LCJ1cGRhdGVFZGl0b3IiOmZhbHNlfQ)

---

# src/main.c

```

// making a right angled triangle with 10 rows

#include <stdio.h>

int main()
{
int i, j, rows = 10; // declaring variables 

for (i = 1; i <= rows; ++i)
{
for (j = 1; j <= i; ++j)
{
printf("*");
}
printf("\n");
}
   return 0;
}



```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release 90triangle2
[100%]: build ok!

```

## Execution
```
xmake run

*
**
***
****
*****
******
*******
********
*********
**********

```

### Known Bugs and/or Errors:

This program has been tested and no errors found so far.

### Lessons Learned:

1. Use of nested for loop.
2. Nested for loop flowchart is clear.

