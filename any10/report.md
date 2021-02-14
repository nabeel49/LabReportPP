[Home of Lab Report](../lab.html)

# Program Ex 01: Change it

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

// program to display first ten numbers and finding the average 

#include <stdio.h>

int main(void)
{ 

// declaring variables  

int i, n, sum=0; 
float avg;

// printing the first ten numbers and finding their sum

for (i=1;i<=10;i++)
{
printf("Number%d :\n",i);

scanf("%d",&n);

sum +=n;
}

// doing average 

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
[ 75%]: linking.release any10
[100%]: build ok!

```

## Execution
```
xmake run

Number1 :
Number2 :
Number3 :
Number4 :
Number5 :
Number6 :
Number7 :
Number8 :
Number9 :
Number10 :
Sum of first ten numbers is: 326190
and the average is 32619.00

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
