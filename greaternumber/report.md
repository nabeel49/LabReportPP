[Home of Lab Report](../lab.html)

# Program - Finding the greatest number among any three

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```
##Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW1N0YXJ0XSkgLS0-IDJbXCJhIOKGkCB4PGJyLz4gYiDihpAgeTxici8-YyDihpAgejxici8-XCJdXG4yIC0tPiAze2EgPiBifVxuMyAtLT58WWVzfCA0e2EgPiBjfVxuNCAtLT58Tm98IDhbL2MgaXMgdGhlIGdyZWF0ZXN0IGludGVnZXIvXVxuNCAtLT4gfFllc3wgNlsvYSBpcyB0aGUgZ3JlYXRlc3QgaW50ZWdlci9dXG4zIC0tPnxOb3wgNXtiID4gY31cbjUgLS0-IHxOb3wgOFxuNSAtLT4gfFllc3wgN1svYiBpcyB0aGUgZ3JlYXRlc3QgaW50ZWdlci9dXG43IC0tPiA5KFtTdG9wXSlcbjYgLS0-IDlcbjggLS0-IDkiLCJtZXJtYWlkIjp7InRoZW1lIjoiZGVmYXVsdCJ9LCJ1cGRhdGVFZGl0b3IiOmZhbHNlfQ)
```


# src/main.c

```

#include <stdio.h> //header file

int main(void)
{
   
int a , b, c; //declaring variables

printf("enter three integral numbers:\n");
scanf("%d %d %d", &a, &b, &c);

//using "&" operator to choose between 3 numbers 
//using extended form of if-else

if (a > b && a > c) 
printf("%d is the greatest integer chosen\n", a);

else if (b > a && b > c)
printf("%d is the greatest integer\n", b);

else
printf("%d is the greatest integer\n", c);

    return 0;

}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release greaternumber
[100%]: build ok!

```

## Execution
```
xmake run

enter three integral numbers:
824654256 is the greatest integer

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
