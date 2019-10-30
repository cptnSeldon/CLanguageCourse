#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int month, days;

    printf("Enter value for month [1-12] : ");
    scanf("%d", &month);

    switch(month)
    {
        //31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days.\n");
            break;
        //30 days
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days.\n");
            break;
        //28 or 29
        case 2:
            printf("28 days or 29 in leap years.\n");
            break;
    }

    return 0;
}