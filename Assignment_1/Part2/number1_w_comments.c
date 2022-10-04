

        /*      THIS PROGRAM WILL GIVE THE AREA OF A CIRCLE 
                            DEPENDING ON THE RADIUS GIVEN BY THE USER       */


// given that the area of a circle is PI * raduis squared; A = PI *r^2


 // bellow is a header; header is used so we can acces specific codes that we can use and recognized by the computer
#include <stdio.h>//stdio.h is a header for standard input / output commands 
                 //e.i. printf(), scanf()


//bellow is a constant; consant is a value that its value is fixed or cannot be changed
//you declare a constant by typing #define <name of the value> <value>
#define PI 3.14159//this is a constant named PI and given a value 3.14159
                //for in mathematics the value of pi is 3.14159

// bellow is the main() function, the main fucntion can be seen as the canvas of the programm
//if the program is running, the first thing it will look for is the main() function and execute everything inside it
//without the main() function the program wont run 
int main () {
    
    //bellow is a variable, variable is a container for a specific type of data
    //you declare a variable by giving its data type, its name, = value; 
    // <data type> <name of the variable> = <value>;
    //if you don't want to assign value for now and just give it later
    // <data type> <name of the variable>;
    double radius, area;  //these are varibales named "radius" & "area"
                         //they dont have any value yet for they will be given later


    //printf() is a function used to displays text into the consle
    //the code bellow asks the user to give a number as a radius of a circle
    printf("This program will give the area of a circle depending on the radius given by the user. \nEnter the radius of the circle: ");
                /*      DON'T FORGET THE DOUBLE QUOTATION; ("")      */

    //scanf() is a function used to assign value given by the user into a variable
    scanf("%lf", &radius);//after the user gave a value, the scanf() assign the value to the variable "radius"
    //to assign value you shoud give 2 parameter inside the parenthesis
    //the first parameter is to identify the data type:
            // %lf is for double
            // %s is for string      /*     DON'T FORGET TO PUT THEM
            // %d is for int               INSIDE A BOUBLE QUOTE; ("")       */
            // %c is for char
    //the second parameter is the variable where the value will be assigned to
             /*       DON'T FORGET THE & BEFOR THE VARIABLE NAME         */


    //bellow is the operation to calculate the area of the circle 
    //and assign the value to the variable "area"
    area = PI * radius * radius;

    //the code bellow display the are of the circle into the console
    printf("The era of the cirle is %f", area);
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