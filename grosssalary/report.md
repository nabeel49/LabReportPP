[Home of Lab Report](../lab.html)

# Program Ex 01: Change it

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart 

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW3N0YXJ0XSktLT4yW2Zsb2F0IHNhbGFyeSwgcHJvZml0czxici8-YWxsb3dhbmNlcywgeF1cbjItLT4zW3ggPSBzYWxhcnkgKyBhbGxvd2FuY2VzICsgcHJvZml0c11cbjMtLT58c2NhbmZ8NFsvdHlwZSB5b3VyIGJhc2ljIHNhbGFyeSBvbmx5L11cbjQtLT58c2NhbmZ8NVsvdHlwZSBzdW0gb2YgYWxsIHlvdXIgYWxsb3dhbmNlcy9dXG41LS0-fHNjYW5mfDZbL3R5cGUgdGhlIGFtb3VudCBvZiBwcm9maXRzIGVhcm5lZC9dXG42LS0-N1svcHJpbnQgeC9dLS0-OChbc3RvcF0pXG4iLCJtZXJtYWlkIjp7InRoZW1lIjoiZGVmYXVsdCJ9LCJ1cGRhdGVFZGl0b3IiOmZhbHNlfQ)

---

# src/main.c

```

//program to find gross salary

#include <stdio.h> //header file

int main(void)
{

float salary, all, pro, x; //declaring variables

printf("type your basic salary:\n");
scanf("%f", &salary);

printf("type the sum of all your allowances:\n");
scanf("%f", &all);

printf("type the amount of profits earned:\n");
scanf("%f", &pro);

x = salary+all+pro; //adding all the earnings

printf("Gross Income = %0.2f\n", x);

    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release grosssalary
[100%]: build ok!

```

## Execution
```
xmake run

type your basic salary:
type the sum of all your allowances:
type the amount of profits earned:
Gross Income = 0.00

```

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
