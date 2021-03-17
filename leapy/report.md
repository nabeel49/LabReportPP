[Home of Lab Report](../lab.html)

# Program to find Leap Year

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

//program to find leap year

#include <stdio.h>

int main(void)
{

int year;  //declaring the only variable 

printf("Enter the year:\n");
scanf("%d", &year);

//using extended if-else statement 

if (year%400 == 0) //if the year typed is divisible by 400
{
printf("Its a leap year!\n");
}

else if (year%100 == 0 && year%400 != 0) //if the year typed is divisible by 100 and 400 both
{
printf("Its not a leap year!\n");
}

else if (year%4 == 0 && year%100 != 0) //if the year typed is divisible by 4 and 100 both 
{
printf("Its a leap year!\n");
}

else 
{
printf("Its not a leap year!\n");
}
return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release leapy
[100%]: build ok!

```

## Execution
```
xmake run

Enter the year:
Its not a leap year!

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
