# Making lab report

## Steps

1. Create login on github.com
1. Verify email
1. Login to github.com
1. Visit [https://github.com/CoE-GNE/LabReportPP](https://github.com/CoE-GNE/LabReportPP)
1. Near top, in line of `CoE-GNE/LabReportPP`, on extreme right, look for three buttons, named `Watch`, `Star` and `Fork`.
1. Click on `Fork`.
1. If you need help on form, visit: [Help on forking](https://docs.github.com/en/github/getting-started-with-github/fork-a-repo)
1. In following, replace `YourGitHubUserID` with your github userID.
1. In directory `public_html` of your account on `Code Server`, issue command: `git clone https://github.com/YourGitHubUserID/LabReportPP.git`
1. Go to directory LabReportPP, by using command `cd LabReportPP`.
1. Using `xmake` create a new project, say `Ex01`.
1. Go to the newly created folder, by following command. Replace `Ex01`, if you used some different project name.
1. `cd Ex01`
1. Edit `src/main.c`
1. Create more .c or .h files as per the requirements of the project.
1. Compile with `xmake`
1. Remove errors / warnings, if you get any.
1. Execute code by `xmake run`
1. Test you code. When all is Ok, then to generate lab report for this practical, issue command: `labrep`
1. It will produce `report.md` and `report.html` file in current folder.
1. Edit `report.md` file, to add more content, or to change anything.
1. To update `report.html` from this amended `report.md` file, issue command: `md2html report`
1. Go to parent folder by `cd ..`
1. Edit `lab.md` file.
1. Issue command: `md2html lab`

---

### Writing a Programming Lab Report

## Report Format

### Assignment/Problem Description: What were you required to implement?

This is a word-for-word reiteration of the problem given to you.

### Discussion:

1. Solution/Program Description:

  A brief description of what your program does, including how your program works. For example, you might state whether your solution is recursive or iterative. If required or requested, include a flowchart that corresponds to the design of your program.
2. Major Implementation Issues:

  What were the most difficult parts of your program to implement?

### Known Bugs and/or Errors:

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
2. What you would do differently next time
3. How the exercise might be revised to make it clearer/more satisfying
4. What the faculty members might have done differently to promote learning

### General Tips

1. It is expected that you use as much simple language as you can. There should be no emphasis placed on "expressing yourself" or "keeping it interesting"; a programming lab report is not a narrative.
1. In a lab report, it is important to get to the point. Be descriptive enough that your audience can understand the problem and your solution, but strive to be concise.
1. Focus on the work accomplished
1. Do document well the process used to complete the work.

-----

Instructions to students for preparing

## PPS Laboratory report

Sample of Laboratory Report is shown for Laboratory Practical-1. For the rest of the work, the reporting style as provided is to be followed. The laboratory report to be submitted should include followings:
1. Cover page: First page of lab report.
2. Index: Title of Lab Exercise reported with clickable link to report.

For each exercise / practical:

1. Title of the program
1. Coding
1. Output (compilation, debugging & testing)

---
## To know about how to make good webpages, it is recommended to go through the following.

## Report

# Programming for Problem Solving Laboratory

by

## Nabeel Farooqui
### Class Roll No.: 2014049
### Branch: Civil Engineering
### Batch: 2020-23
### Session: Odd Semester 2020-21

## Submitted to: Prof. H. S. Rai

---

# Index

1. [Write a program to print following with the use of puts for each line](puts2/report.html)
2. [Achive same as in Practical 1, through 2nd program with single use of puts](puts/report.html)
3. [Achive same as in Practical 1, through 3rd program with single use of printf](printf/report.html)
4. [Write a program to print following pattern(a right angled triangle), with 10 puts statements](90triangle/report.html)
5. [Write a program to print following pattern(a right angled triangle), with 1 puts statement](90triangle1/report.html)
6. [Write a program to print following pattern (when triangleHeight has value of 10), using for loop, where number of lines govered by the use of variable triangleHeight](90triangle2/report.html)
7. [Write a program to find the sum of two numbers](sumof2no/report.html)
8. [Write a program to find the area of the circle](areaofcircle/report.html)
9. [Write a program to find the circumference of a circle](circumfranceofcircle/report.html)
10. [Write a program to find simple interest](simpleinterest/report.html)
11. [Write a program to convert temperature from degree centigrade to Fahrenheit](ctof/report.html)
12. [Write a program to sum of marks obtained in five courses, average of marks and percentage of marks](marks/report.html)
13. [Write a program to swap two numbers using a temporary variable]()
14. [Write a program to swap two numbers without using a temporary variable]()
15. [Write a program to reverse a number]()
16. [Write a program to find sum of digits of a number]()
17. [Write a program to find a gross salary](grosssalary/report.html)
18. [Write a program to print a table of a number](table/report.html)
19. [Write a program to print the greatest of three numbers](greaternumber/report.html)
20. [Write a program to find the entered year is leap year or not](leapy/report.html)
21. [Write a program to find the given number is odd or even](evenodd/report.html)
22. [Write a program to display the first ten numbers and their sum and average](first10/report.html)
23. [Write a program to print fibonacci series upto 100](fibonacci/report.html)
24. [Write a program to display n terms of natural number and their sum](sumofnatural/report.html)
25. [Write a program to read 10 numbers from keyboard and find their sum and average](any10/report.html)
26. [Write a program to display the cube of the number upto given an integer](cube/report.html)
27. [Write a program to display the multiplication table of a given integer. format example for table 13 x 1 = 13](3table/report.html)
28. [Write a program to display the n terms of odd natural number and their sum](sumofnodd/report.html)
29. [Write a program to make such a pattern like right angle triangle with number increased by 1](90triangle3/report.html)
