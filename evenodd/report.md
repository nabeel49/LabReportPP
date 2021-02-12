[Home of Lab Report](../http://code.gndec.ac.in/~2014049/LabReportPP/all/evenodd/report.htmllab.html)

# Program Ex 01: Change it

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW1N0YXJ0XSkgLS0-IDJbaW50IHhdXG4yIC0tPiB8c2NhbmZ8IDNbL3R5cGUgYW55IG51bWJlciB4L11cbjMgLS0-IDR7aWY8YnIvPiB4JTIgPT0gMH1cbjQgLS0-IDVbL1RoZSBudW1iZXIgaXMgZXZlbi9dXG40IC0tPiB8ZWxzZXwgNlsvVGhlIG51bWJlciBpcyBvZGQvXVxuNSAtLT4gN1tlbmRdXG42IC0tPiA3IiwibWVybWFpZCI6e30sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)


# src/main.c

```

#include <stdio.h>   //header file

int main(void)
{
  
int x;               //declaring variables

  printf("Type the desired number:\n");
  scanf("%d", &x);

//using relational operator to compare 

if ( x%2 == 0 )     
{ 
printf("%d is an even number!\n", x);
}

else 
{
printf("%d is an odd number!\n", x);
}
    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release evenodd
[100%]: build ok!

```

## Execution
```
xmake run

Type the desired number:
4 is an even number!

```

### Known Bugs and/or Errors:

.

### Lessons Learned:

1. I learned the structure of basic if-else flowchart
2. Other conditional statements could be used.
3. Relational operator comes in use here.
