[Home of Lab Report](../lab.html)

# Program - Write a program to find circumfrance of a circle

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW1N0YXJ0XSktLT4yW3BpID0gMy4xNDEsPGJyLz5yLCBjXVxuMi0tPnxzY2FuZnwzWy90eXBlIGRlc2lyZWQgcmFkaXVzL11cbjMtLT40W2M9MipwaSpyXVxuNC0tPjVbL3ByaW50IGMvXVxuNS0tPjYoW1N0b3BdKSIsIm1lcm1haWQiOnsidGhlbWUiOiJkZWZhdWx0In0sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)

---

# src/main.c

```

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


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release circumfranceofcircle
[100%]: build ok!

```

## Execution
```
xmake run

Type the desired radius of the circle:
Required circumfrance of the circle will be 0.00

```

### Known Bugs and/or Errors:

It will execute 0.00 if any character is used other than numerical values.
I am still working on it to print error everytime a wrong input is given.

### Lessons Learned:

1. Use of float and double.
2. Prefer double more than float because it is more precise.
