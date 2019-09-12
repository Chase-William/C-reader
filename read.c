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

    short numLetters[26];

    do {            
        // In
        char c = fgetc(fptr); 
          
        Count_Char_Instances(c, numLetters);

        // function end of file - checks to see if we are at the end of the file
        if (feof(fptr)) // Needs to be after fgetc() because that method will move the pointer to the next memory location
            break ; // Breaks us from the while loop

        // 1. prints the char's numeric value according to ASCII
        // 2. prints the actual char character
        //printf("%d == %c\n", c,c); 

    } while (1);    // Infinite true loop
        
    fclose(fptr);
    
 //printf("Number of letters in document: a:%d e:%d", numLetters[0], numLetters[1]);

    for (int i = 97; i <= 122; i++ ) {
        printf("%c:%d", numLetters[i]);
    }

    //printf("a occurred: %d", numLetters[0]);
    printf("\nFile has been read.");
}

void Count_Char_Instances(const char* letter, short* letterArray) {    
    
    //printf("%c", letter);
    
    // Add code to identify char numeric ascii values
    // Also need to add or create a toLower or toUpper function

    //printf("%i", (int)letter);
    switch ((unsigned int)letter)
    {
    case 97: // a
        letterArray[0] += 1;
        break;
    case 98: // b
        letterArray[1] += 1;
        break;
    case 99: // c
        letterArray[2] += 1;
        break;
    case 100: // d
        letterArray[3] += 1;
        break;
    case 101: // e
        letterArray[4] += 1;
        break;
    case 102: // f
        letterArray[5] += 1;
        break;
    case 103: // g
        letterArray[6] += 1;
        break;
    case 104: // h
        letterArray[7] += 1;
        break;
    case 105: // i
        letterArray[8] += 1;
        break;
    case 106: // j
        letterArray[9] += 1;
        break;
    case 107: // k
        letterArray[10] += 1;
        break;
    case 108: // l
        letterArray[11] += 1;
        break;
    case 109: // m
        letterArray[12] += 1;
        break;
    case 110: // j
        letterArray[13] += 1;
        break;
    default:
        break;
    }

}