[Home of Lab Report](../lab.html)

# Program to print first 10 numbers, their sum and average.

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

## Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbiAgICAxKFtzdGFydF0pLS0-MltkZWNsYXJpbmcgaW50ZWdlciB2YWx1ZXMgaSBhbmQgc3VtPTBdXG4gICAgMi0tLTNbZGVjbGFyaW5nIGZsb2F0IHZhbHVlIGF2Z11cbiAgICAzLS0-NHt7aSA9IDEsIGkgPD0gMTAsIGkrK319XG4gICAgNC0tLTVbc3VtID0gc3VtICsgaV1cbiAgICA1LS0tNlsvUHJpbnQgaS9dXG4gICAgNi0tPjRcbiAgICA2LS0-N1thdmcgPSBzdW0gLyAxMC4wXVxuICAgIDctLT44Wy9QcmludCBzdW0gb2YgbnVtYmVycy9dXG4gICAgOC0tPjlbL1ByaW50IGF2ZXJhZ2Ugb2YgbnVtYmVycy9dXG4gICAgOS0tPjEwKFtzdG9wXSlcbiAgICA0LS0-MTBcblxuXG4iLCJtZXJtYWlkIjp7InRoZW1lIjoiZGVmYXVsdCJ9LCJ1cGRhdGVFZGl0b3IiOmZhbHNlfQ)

---

# src/main.c

```

//program to find sum of first 10 numbers and their average 

#include <stdio.h>  //header file

int main(void)
{

//declaring variables

int i, sum=0;
float avg;

//using for loop

for (i=1; i <= 10; i++)
{
printf("%d\n", i);

sum += i;  //sum = sum + i
}

//finding the average 

avg = sum / 10.0;

printf("Sum of first ten numbers is: %d\n\
and the average is %0.2f\n", sum, avg); 

    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release first10
[100%]: build ok!

```

## Execution
```
xmake run

1
2
3
4
5
6
7
8
9
10
Sum of first ten numbers is: 55
and the average is 5.50

```

### Known Bugs and/or Errors:

no errors found so far until now..

### Lessons Learned:


