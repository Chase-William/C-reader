#include <stdio.h>
#include "read.h"

void read_file() {
    FILE *fptr;
    
    // Need to escape from bin folder and then go into the tmp folder for the file
    fptr = fopen("../tmp/text.txt", "r");
    if (!fptr) {
        printf("File failed to open.");
        exit(1);
    }


    do {
        // Taking input single character at a time 
        char c = fgetc(fptr); 

        // function end of file - checks to see if we are at the end of the file
        if (feof(fptr)) 
            break ; // Breaks us from the while loop
  
        printf("%d == %c\n", c,c); 
    } while (1);
        
    fclose(fptr);
}