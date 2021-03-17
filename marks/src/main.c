

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

