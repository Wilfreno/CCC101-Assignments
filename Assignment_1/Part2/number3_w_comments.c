

            /*      THIS PROGRAM WILL DISPLAY THE AGE OF THE USER 
                                        THAT IS CONVERTED INTO SECONDS      */


// bellow is a header; header is used so we can acces specific codes that we can use and recognized by the computer
#include <stdio.h>//stdio.h is a header for standard input / output commands 
                 //e.i. printf(), scanf()

//bellow is a constant; consant is a value that its value is fixed or cannot be changed
//you declare a constant by typing #define <name of the value> <value>
#define SECONDS_PER_MINUTE 60
#define MINUTE_PER_HOURS 60
#define HOURS_PER_DAY 24
#define DAYS_PER_YEAR 365


// bellow is the main() function, the main fucntion can be seen as the canvas of the programm
//if the program is running, the first thing it will look for is the main() function and execute everything inside it
//without the main() function the program wont run 
int main () {
    
    //bellow is a variable, variable is a container for a specific type of data
    //you declare a variable by giving its data type, its name, = value; 
    // <data type> <name of the variable> = <value>;
    //if you don't want to assign value for now and just give it later
    // <data type> <name of the variable>;
    int age, ageInSeconds; //these are varibales, namely "age" & "ageInSeconds"
                         //they dont have any value yet for they will be given later


    //printf() is a function used to displays text into the consle
    //the code bellow tells the user what the program will do and ask for its age
    printf("This program will display your age converted into seconds. \n Enter you age: ");
                /*      DON'T FORGET THE DOUBLE QUOTATION; ("")      */
    
    //scanf() is a function used to assign value given by the user into a variable
    scanf("%d", &age);//after the user gave a value, the scanf() assign the value to the variable
    //to assign value you shoud give 2 parameter inside the parenthesis
    //the first parameter is to identify the data type:
            // %lf is for double
            // %s is for string      /*     DON'T FORGET TO PUT THEM
            // %d is for int               INSIDE A BOUBLE QUOTE; ("")       */
            // %c is for char
    //the second parameter is the variable where the value will be assigned to
             /*       DON'T FORGET THE & BEFOR THE VARIABLE NAME         */

    //the code bellow is an opeartion that converts the age of the user into seconds
    //and assign the value into the variable "ageinSeconds"
    ageInSeconds = age * SECONDS_PER_MINUTE * MINUTE_PER_HOURS * HOURS_PER_DAY * DAYS_PER_YEAR;
    
    //the code below displays the age of the user in seconds into the console
    printf("Your age in converted into seconds is %ds", ageInSeconds);
    // as you can see inside the printf() 2 parameters are given
    // the first parameter is the text that will be displayed into the console
    // the %f is a place holder that will print the value of the variable that is given as the 2nd parameter
        // %f is for double
        // %s is for string
        // %d is for int
        // %c is for char 

    return 0;
}

                  /*      DON'T FORGET TO PUT ; EVERY END OF THE LINE        */
