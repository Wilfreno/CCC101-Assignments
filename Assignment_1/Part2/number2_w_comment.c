
        /*      THIS PROGRAM WILL ACCEPT THREE NUMBERS 
                                & PRINT OUT ITS AVERAGE VALUE        */


 // bellow is a header; header is used so we can acces specific codes that we can use and recognized by the computer
#include <stdio.h>//stdio.h is a header for standard input / output commands 
                 //e.i. printf(), scanf()


// bellow is the main() function, the main fucntion can be seen as the canvas of the programm
//if the program is running, the first thing it will look for is the main() function and execute everything inside it
//without the main() function the program wont run 
int main () {

    //bellow is a variable, variable is a container for a specific type of data
    //you declare a variable by giving its data type, its name, = value; 
    // <data type> <name of the variable> = <value>;
    //if you don't want to assign value for now and just give it later
    // <data type> <name of the variable>;
    double  x, y, z, average;//these are varibales named "x", "y","z" & "average"
                         //they dont have any value yet for they will be given later


    //printf() is a function used to displays text into the consle
    //the code bellow tell the user what the program does and as to provide number values
    
    printf("This program will accept three numbers and print out its average value. \nPlease enter the first value: ");
                /*      DON'T FORGET THE DOUBLE QUOTATION; ("")      */
    
    
    //scanf() is a function used to assign value given by the user into a variable
    scanf("%lf", &x);//after the user gave a value, the scanf() assign the value to the variable
    //to assign value you shoud give 2 parameter inside the parenthesis
        //the first parameter is to identify the data type:
                // %lf is for double
                // %s is for string      /*     DON'T FORGET TO PUT THEM
                // %d is for int               INSIDE A BOUBLE QUOTE; ("")       */
                // %c is for char
        //the second parameter is the variable where the value will be assigned to
                /*       DON'T FORGET THE '&' BEFOR THE VARIABLE NAME         */


    printf("Enter the second value: ");
    scanf("%lf", &y);

    printf("Enter the third value: ");
    scanf("%lf", &z);
    
    //the code bellow performs an operation that gives the average value of avriable "x", "y", & "z"
    //and assign the value into the variable "average"
    average = (x + y + z) / 3;
    

    //the code bellow displays the average value of the variable "x", "y", & "z"
    printf("The average value is %f", average);
    // as you can see inside the printf(), 2 parameters are given
    // the first parameter is the text that will be displayed into the console
    // the %f is a place holder that will print the value of the variable that is given as the 2nd parameter
        // %f is for double
        // %s is for string
        // %d is for int
        // %c is for char 
    
    return 0;
}
                  /*      DON'T FORGET TO PUT ; EVERY END OF THE LINE        */
