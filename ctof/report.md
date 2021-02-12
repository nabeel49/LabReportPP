[Home of Lab Report](../lab.html)

# Program - Write a program to convert temprature from degree centigrade to Fahrenheit

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW1N0YXJ0XSktLT4yW2Zsb2F0IGMsIGZdXG4yLS0-fHNjYW5mfDNbL3R5cGUgdmFsdWUgaW4gZGVncmVlcy9dXG4zLS0tNFtGID0gOSpjLzUgKyAzMl1cbjQtLT41Wy9wcmludCB2YWx1ZSBpbiBGYWhyZW5oZWl0L11cbjUtLT42KFtTdG9wXSkiLCJtZXJtYWlkIjp7fSwidXBkYXRlRWRpdG9yIjpmYWxzZX0)

---

# src/main.c

```

#include <stdio.h>

int main()
{
 
float c, f;

    printf("Enter the value in degree celcius:\n");
    scanf("%f", &c);

f = (c*9/5) + 32.0;

    printf("The value in fahrenheit will be %0.2f F\n", f);

    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release ctof
[100%]: build ok!

```

## Execution
```
xmake run

Enter the value in degree celcius:
The value in fahrenheit will be 32.00 F

```

### Known Bugs and/or Errors:

If input is very large then it will show wrong output.

### Lessons Learned:
1. If we type only 32 instead of 32.0 then it will give error because data type is float here.

