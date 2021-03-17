[Home of Lab Report](../lab.html)

# Program - Print sum, average and percentage of marks obtained.  

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

#Flow Chart

![.](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbjEoW3N0YXJ0XSktLT4yW2Zsb2F0IG1hdGgsIGVuZywgY2hlbSwgbXAsPGJyLz54LCBwcHMsIGF2ZXJhZ2UsIHBlcmNlbnRhZ2VdXG4yLS0-fHNjYW5mfDNbL2VudGVyIG1hcmtzIG9idGFpbmVkIGluIDUgc3ViamVjdHMgZWFjaC9dXG4zLS0-NFt4ID0gbWF0aCArIGNoZW0gKyBlbmc8YnIvPm1wLCBwcHNdXG41Wy9wcmludCBzdW0gb2YgbWFya3Mgb2J0YWluZWQvXVxuNlthdmVyYWdlID0geC81LjBdICAgICAgICAgICBcbjdbL3ByaW50IGF2ZXJhZ2Ugc2NvcmUvXSBcbjhbcGVyY2VudGFnZSA9IHgvNTAwLjAgKiAxMDBdXG45Wy9wcmludCB0aGUgdG90YWwgcGVyY2VudGFnZSBvYnRhaW5lZC9dXG40LS0tNi0tLThcbjgtLT41LS0-Ny0tPjktLT4xMChbc3RvcF0pIiwibWVybWFpZCI6eyJ0aGVtZSI6ImRlZmF1bHQifSwidXBkYXRlRWRpdG9yIjpmYWxzZX0)

---

# src/main.c

```

#include <stdio.h> //header file

int main(void)
{
   
float x, math, english, chemistry, mp, pps, average,percentage; //declaring all the variables

printf("What are your marks obtained in each subject?(out of 100):\n");
scanf("%f %f %f %f %f", &math, &english, &chemistry, &mp, &pps);

x = math + chemistry + english + mp + pps; //adding all the marks

printf("sum of marks obtained is %f\n", x);

average = x/5.0;

printf("average score is %0.2f\n", average); //average 

percentage = (x/500.0)*100;

printf("percentage of marks obtained is %0.2f %\n", percentage); //total percentage 

    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release marks
[100%]: build ok!

```

## Execution
```
xmake run

What are your marks obtained in each subject?(out of 100):
sum of marks obtained is 0.009257
average score is 0.00
percentage of marks obtained is 0.00 %

```

### Known Bugs and/or Errors:

No errors till now.

### Lessons Learned:

1. I can easily find sum, average and percentage.
