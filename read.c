#include <stdio.h>
#include "read.h"

void read_file(void) {
    FILE *fptr;
    
    // Need to escape from bin folder and then go into the tmp folder for the file
    fptr = fopen("../tmp/text.txt", "r");
    if (!fptr) {
        printf("File failed to open.");
        exit(1);
    }
    
    Count_Char_Instances(fptr);
        
    fclose(fptr);    

    printf("\nFile has been read.");
}

void Count_Char_Instances(FILE *fptr) {    
        
    short letterArray[26] = {0};            

    do {       
        char c = fgetc(fptr);       
        if (feof(fptr))
            break ;

        for (short i = 0; i <= 25; i++)
        {
            if ((unsigned int)c == i + 97)
            {
                letterArray[i]++;
            }        
        }         
    } while (1);
    

    for (int i = 0; i <= 25; i++ ) {
        // (i + 97) is an offset for displaying character
        printf("%c:%d ", (i + 97), letterArray[i]);
    }        
}