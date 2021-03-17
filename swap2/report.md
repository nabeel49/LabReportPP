[Home of Lab Report](../lab.html)

# Program to swap numbers without using temporary variable

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

## Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbiAgICAxKFtzdGFydF0pLS0-MltpbnRlZ2VyIHZhbHVlcyBhID0gMiBhbmQgYiA9IDNdXG4gICAgMi0tPjNbYmVmb3JlIHN3YXBwaW5nIHdlIGhhdmUgYSA9IDIgYW5kIGIgPSAzXVxuICAgIDMtLT40W2E9YStiPGJyLz5iPWEtYjxici8-YT1hLWJdXG4gICAgNC0tPjVbL1ByaW50IHZhbHVlcyBhZnRlciBzd2FwcGluZy9dXG4gICAgNS0tPjkoW3N0b3BdKSIsIm1lcm1haWQiOnsidGhlbWUiOiJkZWZhdWx0In0sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)

---

# src/main.c

```

//

#include <stdio.h> //header file

int main()
{
   
int a=2, b=3;      //declaring variables
      
printf("Before swapping we have a=%d b=%d",a,b);      

a=a+b; //a=5     
b=a-b; //b=2     
a=a-b; //a=3 
    
printf("\nAfter swapping we have a=%d b=%d\n",a,b);    

return 0;  

}



```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release swap2
[100%]: build ok!

```

## Execution
```
xmake run

Before swapping we have a=2 b=3
After swapping we have a=3 b=2

```

### Known Bugs and/or Errors:

No errors found so far..

### Lessons Learned:

1. We have two approaches to swap numbers.
2. I would like to use temoprary variables when solving such a problem.
