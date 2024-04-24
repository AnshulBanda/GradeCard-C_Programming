# GradeCard-C_Programming
A simple C program to take a student's name as input and then take marks for 5 subjects as inputs to print a grade card for the student.


The program has three files. The main.c file starts the whole program. It involves code which asks the user whether they want to start the program or not. should the user choose to end the program, they have to give the input as "n", which would display a "Thank you" message and end the program. However should the user wish to start the program, they must provide "y" as the input, which would initialise the program.

once the program is initialised, it executed the second file which is called intro.c. The intro.c file provides the user with a menu-like interface asking the user to choose between three options. Option 1 provides the user with the option to enter students to the database. If the user wishes to enter names into the database, they can enter "1" to choose the option 1. Option 2 allows the user to enter marks for every student name entered into the database and print a grade for the marks entered. Likewise the user has to enter the input of "2" to select option 2. Option 3 is simple as it allows the user to exit the program after entering the input of "3". 

If the user selects option 1 or option 2, the third file, student.c, is executed. If option 1 is selected, the program asks the user to enter the number of students the user wishes to enter into the database. After entering the number of students, the program asks the user to enter the names of all the students after which the program asks the user if they wish to print the names or continue back to the intro menu. If the user chooses the second option, the user will be allowed to enter the marks of the students entered into the database, after which the program prints a grade for the student based on the marks entered. 


After all the students have had thier grade printed, the code ends.


