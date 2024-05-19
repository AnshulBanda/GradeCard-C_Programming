PHASE-3 OF C PROGRAMMMING CASE STUDY:

This program allows the user to create a csv file and then use the file to enter data of students. The data of students that can be entered into the csv file includes data such as the student's SRN, Name, Section, Marks and Grade.

The program begins in the main.c file in which the program is started. The main.c file is simple as it just initializes the structure used to enter the data into the csv and gives the csv file a name. After initializing the structure and csv file name, the main.c then function calls the intro function which is programmed in the intro.c file.

The intro.c file houses a function called "intro" which creates a menu-like interface using a while loop. Depending on the users choice ranging from 1-4, the intro.c file then function calls further function to help the progress the program forward.

If the user chooses option 1, the intro.c file function calls the create function which is housed in create.c file. The file create.c has the code for the create.c function. The purpose of this function is to create a csv and then take in user input to then populate the csv with the user-input data. After the creation of the csv file, the data is entered into the file and then the program then goes back to the intro function as the loop in intro.c is still active.

If the user chooses option 2, the intro.c file will function call the display function. The display.c file has the code for the display function. This function will read the csv file and then print all the contents of the csv file for the user to see. After the contents are printed, the program goes back to the intro function.

If the user chooses option 3, the append function is executed by the intro.c file. The append.c file houses the append function. The append function is used to add more user data to the csv file after it has been created. This function does not alter any of the previously entered data and will instead add the new data to the bottom of the csv file. After the new data has been added, the program will return to the intro function.

If the user chooses option 4, the program will then save all the changes made to the csv file and close the csv file. This ensures that the data within the csv file is not vulnerable to being lost, modified or altered in any other way. The program then ends execution after displaying a "THANK YOU!!" message to user. 
