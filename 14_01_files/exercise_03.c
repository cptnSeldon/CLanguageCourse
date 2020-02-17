#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define charSize 32
#define bufferSize 128

int main(int argc, char** argv)
{

    FILE * file1;
    char * file1name;

    FILE * file2;
    char * file2name;

    //get files
    if(argc < 3)    //not enough argument
    {
        file1name = (char *) malloc(charSize);
        file2name = (char *) malloc(charSize);

        printf("\nFirst file name : ");
        scanf("%s", file1name);

        printf("\nSecond file name : ");
        scanf("%s", file2name);
    }
    else
    {
        file1name = argv[1];
        file2name = argv[2];
    }

    //check if files exist
    ///file 1
    if((file1 = fopen(file1name, "r")) == NULL)
    {
        printf("Can't open %s.", file1name);
        return -1;
    }
    ///file 2
    if((file2 = fopen(file2name, "r")) == NULL)
    {
        printf("Can't open %s.", file2name);
        return -2;
    }

    //compare files
    printf("Comparison of %s and %s\n", file1name, file2name);

    char buffer1[bufferSize];
    char buffer2[bufferSize];

    int line = 1, differentLines = 0;

    //comparison
    while(!feof(file1) && !feof(file2))
    {
        fgets(buffer1, bufferSize, file1);
        fgets(buffer2, bufferSize, file2);

        int differences = strcmp(buffer1, buffer2);

        if(differences == 0) line++;
        if(differences != 0)
        {
            printf("Difference found at line %d.\n", ++line);
            differentLines++;
        }
    }

    //check if files have the same line count
    if(feof(file1) ^ feof(file2))   //XOR
    {
        printf("%s and %s haven't the same line count.\n", file1name, file2name);
        differentLines++;
    }

    //there is no difference
    if(differentLines == 0) printf("Both files have the same content.\n");

    //close files
    if(file1 != NULL) fclose(file1);
    if(file2 != NULL) fclose(file2);

    return 0;
}