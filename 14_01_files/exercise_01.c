#include <stdio.h>
#include <stdlib.h>

/*
    SOURCES :
    - http://www.cplusplus.com/reference/cstdio/fopen/
    - https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.bpxbd00/fopen.htm
*/

//FILE
#define charSize 32
#define file1 "exercise_01_students.txt"

//STRUCTURE
typedef struct save
{
    int registrationNumber;
    char firstName[charSize];
    char name[charSize];
} Save;

//MAIN
int main(void)
{
    //variables
    Save student;
    int saves;

    //get how many people will be saved in file
    printf("How many people do you want to save? ");
    scanf("%d", &saves);

    //open file - wt : Open a text file for writing. If the file already exists, its contents are destroyed.
    FILE * file = fopen(file1, "wt");

    if(file == NULL)
    {
        printf("Error : Can't open file\n");
        return -1;
    }

    //write in file + save file
    for(int i = 0; i < saves; i++)
    {
        printf("%d. Registration number : ", i);
        scanf("%d", &student.registrationNumber);
        fflush(stdin);

        printf("%d. First name : ", i);
        scanf("%s", &student.firstName);
        fflush(stdin);

        printf("%d. Name : ", i);
        scanf("%s", &student.name);
        fflush(stdin);

        fprintf(
            file,
            "Registration number : %d\nFirst name : %s\nName : %s\n",
            student.registrationNumber,
            student.firstName,
            student.name
                );
    }

    fclose(file);

    //read file - r : Open a text file for reading. (The file must exist.)
    file = fopen(file1, "r");

    char inputBuffer[charSize];

    while(!feof(file))
    {
        fgets(inputBuffer, charSize, file);
    }

    return 0;
}