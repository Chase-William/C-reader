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

    short numLetters[26] = {0};

    do {            
        // In
        char c = fgetc(fptr); 
          
        Count_Char_Instances(c, numLetters);

        // function end of file - checks to see if we are at the end of the file
        if (feof(fptr)) // Needs to be after fgetc() because that method will move the pointer to the next memory location
            break ; // Breaks us from the while loop

    } while (1);    // Infinite true loop
        
    fclose(fptr);    

    for (int i = 0; i <= 25; i++ ) {
        // (i + 97) is an offset for displaying character
        printf("%c:%d ", (i + 97), numLetters[i]);
    }

    printf("\nFile has been read.");
}

void Count_Char_Instances(const char letter, short* letterArray) {    
        
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
    case 110: // n
        letterArray[13] += 1;
        break;
    case 111: // o
        letterArray[14] += 1;
        break;
    case 112: // p
        letterArray[15] += 1;
        break;
    case 113: // q
        letterArray[16] += 1;
        break;
    case 114: // r
        letterArray[17] += 1;
        break;
    case 115: // s
        letterArray[18] += 1;
        break;
    case 116: // t
        letterArray[19] += 1;
        break;
    case 117: // u
        letterArray[20] += 1;
        break;
    case 118: // v
        letterArray[21] += 1;
        break;
    case 119: // w
        letterArray[22] += 1;
        break;
    case 120: // x
        letterArray[23] += 1;
        break;
    case 121: // y
        letterArray[24] += 1;
        break;
    case 122: // z
        letterArray[25] += 1;
        break;
    default:
        // Invalid characters we arn't tracking end up here
        break;
    }
}