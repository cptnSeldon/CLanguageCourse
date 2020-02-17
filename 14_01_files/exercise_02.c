#include <stdio.h>
#include <stdlib.h>

/*
    SOURCES :
    - http://www.cplusplus.com/reference/cstdio/fopen/
    - https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.bpxbd00/fopen.htm
    - https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/
*/

//FILES
#define charSize 32
#define file1 "exercise_01_students.txt"
#define file2 "exercise_02_copy.txt"

//MAIN
int main(void)
{
    //open file - rt : Open a text file for reading. (The file must exist.)
    FILE * inputFile = fopen(file1, "rt");
    //open file - wt : Open a text file for writing. If the file already exists, its contents are destroyed.
    FILE * outputFile = fopen(file2, "wt");

    if(inputFile == NULL || outputFile == NULL)
    {
        printf("Error : Can't open one or both files\n");
        return -1;
    }

    char character = fgetc(inputFile);

    //copy file
    while(!feof(inputFile))
    {
        fputc(character, outputFile);
        character = fgetc(inputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}