#include "dummy.h"                        // Header for dummy data structure

void scanfPlusPlus(int * elementAddress) {
    scanf("%d",elementAddress);                // Take integer from standard input
    while ((getchar()) != '\n');               // Flush the standard input buffer
 }

 void printfPlusPlus(char * printMessage) {
    printf(printMessage);                      // Print Message to  standard output
    printf("\n");                              // Change to new line
 }

 void showIdentity() {
    /* Print info about itself */
    printfPlusPlus("Hey there, I am an instance of dummy data strcuture.");
    printfPlusPlus("Happy Usage !!");
 }