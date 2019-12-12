#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define YEAR 2019
#define SIZE 10

//STRUCTURE
typedef struct person
{
    char * surname;
    char * name;
    int birthdate;
} PersonTy;

//PROTOTYPE
void printPeopleUnder(PersonTy *, int);
PersonTy findPerson(PersonTy *, int, char);

//MAIN
int main(void)
{
    PersonTy people[SIZE] = {
        {"Knuth", "Donald", 1938},
        {"Kernighan", "Brian", 1942},
        {"Ritchie", "Dennis", 1941},
        {"Thompson", "Ken", 1943},
        {"Minsky", "Marvin", 1927},
        {"Dijkstra", "Edsger", 1930},
        {"Stroustrup", "Bjarne", 1950}
        };

    printf("People under 80 : \n");
    printPeopleUnder(people, 80);
    printf("\n");

    printf("First : %s\n", findPerson(people, 7, 'y').surname);
    printf("Last : %s\n", findPerson(people, 7, 'n').surname);

    return 0;
}

//FUNCTIONS
void printPeopleUnder(PersonTy * people, int age)
{
    for(int i = 0; i < SIZE; i++)
    {
        int _currentAge = YEAR - people[i].birthdate;

        if(_currentAge < age)
        {
            printf("%s %s (%d)\n", people[i].name, people[i].surname, _currentAge);
        }
    }
}

PersonTy findPerson(PersonTy * people, int size, char isFirst)
{
    PersonTy p = people[0];

    for(int i = 1; i < size; i++)
    {
        if(isFirst == 'y')
        {
            if(strcmp(p.surname, people[i].surname) > 0)
            {
                p = people[i];
            }
        }
        if(isFirst == 'n')
        {
            if(strcmp(p.surname, people[i].surname) < 0)
            {
                p = people[i];
            }
        }
    }

    return p;
}