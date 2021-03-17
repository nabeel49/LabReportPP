[Home of Lab Report](../lab.html)

# Program - Write a program to find the area of a circle

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart 

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW1N0YXJ0XSktLT4yW2Zsb2F0IHBpID0gMy4xNDE8YnIvPmludCByLCBhXVxuMi0tPnxzY2FuZnwgM1svdHlwZSBkZXNpcmVkIHJhZGl1cy9dXG4zLS0-NFthID0gcGkqcipyXVxuNC0tPjVbL3ByaW50IGEvXVxuNS0tPjYoW1N0b3BdKSIsIm1lcm1haWQiOnsidGhlbWUiOiJkZWZhdWx0In0sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)

---

# src/main.c

```

// program to find area of circle with desired radius 

#include <stdio.h>

int main(void)
{
 
float pi = 3.141592, r, a;  // declaring variables

printf("Type the desired radius of the circle:\n");
scanf("%f", &r);

a = pi*r*r;  // formula for area of circle 

printf("Required area of the circle will be %f\n", a);

    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release areaofcircle
[100%]: build ok!

```

## Execution
```
xmake run

Type the desired radius of the circle:
Required area of the circle will be 0.000000

```

### Known Bugs and/or Errors:

The answer might not be precise if input value is very large.

### Lessons Learned:

1. Use of float and double. 
2. I will use double next time because it gives more precision.
