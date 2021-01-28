#include <stdio.h>
#include <stdlib.h>

//STRUCTURES
typedef struct person
{
    char * name;
    int age;
} Person;

//with defined number of children
typedef struct standardFamily
{
    char * surname;
    Person mom;
    Person dad;
    Person son;
    Person daughter;
} StandardFamily;

//with not defined number of children
typedef struct customFamily
{
    char * surname;
    Person mom;
    Person dad;
    int childCounter;
    Person * children;
} CustomFamily;


//FUNCTIONS
//functions for standard family
void showTotalAge(StandardFamily family)
{
    printf("%s : %d\n", family.surname, family.dad.age + family.mom.age + family.daughter.age + family.son.age);
}

void addOneYear(StandardFamily * family)
{
    family->dad.age++;
    family->mom.age++;
    family->son.age++;
    family->daughter.age++;
}

void showSizeInByte(StandardFamily family)
{
    printf("Size in byte : %d\n", sizeof(family));
}

//functions for custom family
void showFamilyMembers(CustomFamily * family)
{
    printf("%s\n", family->surname);
    printf("Mom : %s, %d\n", family->mom.name, family->mom.age);
    printf("Dad : %s, %d\n", family->dad.name, family->dad.age);
    if(family->childCounter > 0)
    {
        printf("Children :\n");
        for(int i = 0; i < family->childCounter; i++)
        {
            printf("Child %d : %s, %d\n", i+1, family->children[i].name, family->children[i].age);
        }
    }
    else printf("No children\n");
}

//MAIN
int main(void)
{
    //standard family

    StandardFamily familyDupont =
    {
        "Dupont",
        {"Eva", 36},
        {"Jean", 38},
        {"Kevin", 4},
        {"Emma", 8}
    };

    showTotalAge(familyDupont);
    addOneYear(&familyDupont);
    showTotalAge(familyDupont);

    showSizeInByte(familyDupont);

    //custom family
    CustomFamily familyONeill =
    {
        "O'Neill",
        {"Samantha", 32},
        {"Jack", 35},
        3,
        (Person *) malloc(3 * sizeof(Person))
    };

    Person child1 = {"Daniel", 8};
    Person child2 = {"Jack Jr", 10};
    Person child3 = {"Hank", 2};

    //child 1
    familyONeill.children[0].name = child1.name;
    familyONeill.children[0].age = child1.age;

    //child 2
    familyONeill.children[1].name = child2.name;
    familyONeill.children[1].age = child2.age;

    //child 3
    familyONeill.children[2].name = child3.name;
    familyONeill.children[2].age = child3.age;

    showFamilyMembers(&familyONeill);

    //deallocation
    free(familyONeill.children);
    familyONeill.children = NULL;
    familyONeill.childCounter = 0;

    return 0;
}