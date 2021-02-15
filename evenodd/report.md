[Home of Lab Report](../lab.html)

# Program Ex 01: Change it

## Source file/s

```
src/.
├── input.html
└── main.c

0 directories, 2 files
```

---


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

---


## Execution
```
xmake run

Type the desired number:
32764 is an even number!

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
