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

//program to find mathematical table of any number 

#include <stdio.h> //header file

int main(void)
{

int n, i;          //declaring variables

printf("Type the number you want to get the table of:\n");
scanf("%d", &n);

//using for loop

for (i=0; i <= 20; i++)

{
printf("%d * %d = %d\n", n, i, n*i);
}

   return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release table
[100%]: build ok!

```

## Execution
```
xmake run

Type the number you want to get the table of:
22027 * 0 = 0
22027 * 1 = 22027
22027 * 2 = 44054
22027 * 3 = 66081
22027 * 4 = 88108
22027 * 5 = 110135
22027 * 6 = 132162
22027 * 7 = 154189
22027 * 8 = 176216
22027 * 9 = 198243
22027 * 10 = 220270
22027 * 11 = 242297
22027 * 12 = 264324
22027 * 13 = 286351
22027 * 14 = 308378
22027 * 15 = 330405
22027 * 16 = 352432
22027 * 17 = 374459
22027 * 18 = 396486
22027 * 19 = 418513
22027 * 20 = 440540

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
