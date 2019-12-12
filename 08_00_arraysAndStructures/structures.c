#include <stdio.h>
#include <stdlib.h>

typedef struct PatientFile Client;

//STRUCTURES
struct PatientFile
{
    char name[32];
    short age;
    float height;
    float weight;
};

struct
{
    float x;
    float y;
} point1, point2;

//PROTOTYPES
void printData(struct PatientFile p);
short getPatientAge(Client p);

//MAIN
int main(void)
{
    //VARIABLES declaration + instantitation
    struct PatientFile p1 = {"Jules", 25, 176, 72};
    struct PatientFile p2 = {"Eva"};
    Client p3 = {.name = "Ed", .age = 9, .height = 140, .weight = 45};
    p2.age = 20;

    point1.x = 1;
    point1.y = 2;

    //FUNCTION calls
    printData(p1);
    printf("\n");
    printData(p2);
    printf("\n");
    printData(p3);

    return 0;
}

//FUNCTIONS
void printData(struct PatientFile p)
{
    printf("Name: \t%s\n", p.name);
    printf("Age: \t%d y.o.\n", getPatientAge(p));
    printf("Height: %.1f cm\n", p.height);
    printf("Weight: %.1f kg\n", p.weight);
}

short getPatientAge(Client p)
{
    return p.age;
}