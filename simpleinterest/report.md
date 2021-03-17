[Home of Lab Report](../lab.html)

# Program - Write a program to find simple interest

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW1N0YXJ0XSktLT4yW2Zsb2F0IHAsIHIsPGJyLz4gdCwgc2ldXG4yLS0-fHNjYW5mfDNbL3R5cGUgcHJpbmNpcGFsIGFtb3VudDxicj4gdHlwZSBJbnRlcmVzdCByYXRlPGJyPiB0eXBlIHRpbWUgaW4geWVhcnMvXVxuMy0tLTRbc2kgPSBwKnIqdCAvIDEwMF1cbjQtLT41Wy9wcmludCBzaS9dXG41LS0-NihbU3RvcF0pIiwibWVybWFpZCI6eyJ0aGVtZSI6ImRlZmF1bHQifSwidXBkYXRlRWRpdG9yIjpmYWxzZX0)

---

# src/main.c

```

//program to calculate simple interest 

#include <stdio.h> //header file

int main(void)
{
   
float p, r, t, si; //declaring variables

printf("Type the desired value of principal amount:\n");
scanf("%f", &p);

printf("Type the desired value of Interest Rate:\n");
scanf("%f", &r);

printf("Type the desired value of time (in years):\n");
scanf("%f", &t);

si = (p*r*t)/100; //formula for simple interest 

printf("Simple Interest will be %f\n", si);

    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release simpleinterest
[100%]: build ok!

```

## Execution
```
xmake run

Type the desired value of principal amount:
Type the desired value of Interest Rate:
Type the desired value of time (in years):
Simple Interest will be -0.000000

```

### Known Bugs and/or Errors:

.

### Lessons Learned:

1. I can easily find simple interest by just giving input. 
