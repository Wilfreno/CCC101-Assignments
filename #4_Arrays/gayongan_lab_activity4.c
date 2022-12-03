#include <stdio.h>
#include <stdlib.h>

void option();
void firstOption();
void secondOption();
void thirdOption();
void exitProgram();
double averageArray(double arr[], int arrSize);
double arrayMax(double arr[], int arrSize);
void arraySum(double firstArray[], double secondArray[], int arrSize);


int main () {

    int tryAgain;

    do {

        option();

        printf("\n\nTry Again?.. Enter [1], Enter [0] to exit: ");
        scanf("%d", &tryAgain);

        while (tryAgain != 0 && tryAgain != 1){
            
            printf("\nEnter [1] to try Again, Enter [0] to exit: ");
            scanf("%d", &tryAgain);
           
        } 

        

    } while(tryAgain == 1);
 

    exitProgram();
}

int operation, 
    arraySize;
    
void option(){

    do
    {
        printf("\nOPERATIONS: \n[1] to Get the average of the array.\n[2] Get the largest element in the array.\n[3] Get the sum of the two arrays.\n[4] Exit.\n\n\nPlease choose: ");
        scanf("%d", &operation);

    } while (operation != 1 && operation != 2 && operation != 3 && operation != 4);
    

    if(operation == 1)
    {
        firstOption();
    }

    if(operation == 2) {

        secondOption();
    }

    if (operation == 3)
    {
        thirdOption();
        
    }
    if (operation == 4)
    {
        exitProgram();
    }
    
}

void firstOption(){
    
    
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    double intArray[arraySize];
    int lastElement = arraySize - 1;

    for (int i = 0; i < arraySize ; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%lf", &intArray[i]);
    }
    
    printf("The average of { ");
    
    for(int i = 0; i < lastElement; i++) {

        printf("%0.2lf, ", intArray[i]);

    }
    printf(" %0.2lf }", intArray[lastElement]);


    printf(" is %0.2lf. ", averageArray(intArray, arraySize));
    

}

void secondOption(){


    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    double intArray[arraySize];
    int lastElement = arraySize - 1;

    for (int i = 0; i < arraySize ; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%lf", &intArray[i]);
    }   

    printf("The largest element in { ");
    
    for(int i = 0; i < lastElement; i++) {

        printf("%0.2lf, ", intArray[i]);

    }
    printf(" %0.2lf }", intArray[lastElement]);


    printf(" is %0.2lf. ", arrayMax(intArray, arraySize));
        


}

void thirdOption(){
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    double intArray1[arraySize], intArray2[arraySize];
    int lastElement = arraySize - 1;

    printf("\nEnter the elements of the first array..\n");
    for (int i = 0; i < arraySize ; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%lf", &intArray1[i]);
    }   
    
    printf("\nEnter the elements of the second array..\n");
    for (int i = 0; i < arraySize ; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%lf", &intArray2[i]);
    }   

    printf("The sum of { ");
    
    for(int i = 0; i < lastElement; i++) {

        printf("%0.2lf, ", intArray1[i]);

    }
    printf(" %0.2lf }", intArray1[lastElement]);
    printf(" and { ");

    for(int i = 0; i < lastElement; i++) {

        printf("%0.2lf, ", intArray2[i]);

    }
    printf(" %0.2lf } is ", intArray2[lastElement]);
    arraySum(intArray1, intArray2, arraySize);


}
double averageArray(double arr[], int arrSize){

    double sum, result;

    for(int i = 0; i < arrSize; i++) {

        sum += arr[i];

    }

    result = sum / arrSize;

    return  result;
}

double arrayMax(double arr[], int arrSize){

    double max = arr[0];

    for(int i = 0; i < arrSize; i++){


        if (max < arr[i])
        {
            max = arr[i];

        }

    }
    return max;    
}

void arraySum(double firstArray[], double secondArray[], int arrSize){

    int lastElement = arrSize - 1;

    printf("{");
    for(int i = 0; i < lastElement; i++){

        printf("%0.2lf, ", firstArray[i] + secondArray[i]);
    }
    printf("%0.2lf}", firstArray[lastElement] + secondArray[lastElement]);
}

void exitProgram(){
    
    printf("\nGoodBye...");
    exit(0);

}