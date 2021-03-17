[Home of Lab Report](../lab.html)

# Program - Write a program to find the sum of two numbers

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW1N0YXJ0XSktLT58c2NhbmZ8IDJbL0lucHV0IHR3byBudW1iZXJzPGJyLz54IGFuZCB5L11cbjIgLS0-IDNbeiA9IHggKyB5XVxuMyAtLT4gNFsvcHJpbnQgei9dXG40IC0tPiA1KFtzdG9wXSkiLCJtZXJtYWlkIjp7fSwidXBkYXRlRWRpdG9yIjpmYWxzZX0)

---

# src/main.c

```

//program to find sum of any two numbers

#include <stdio.h> //header file

int main(void)
{
  
float x, y, z;    //declaring variables

printf("Choose the first number:\n");
scanf("%f", &x);

printf("Choose the second number:\n");
scanf("%f", &y);

z = x + y;

printf("%f\n", z);

    return 0;
}



```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release sumof2no
[100%]: build ok!

```

## Execution
```
xmake run

Choose the first number:
Choose the second number:
0.000000

```

### Known Bugs and/or Errors:

It cannot take very large values, the ouput will be wrong. 

### Lessons Learned:

1. Adding any desired numbers, may be two or more.
