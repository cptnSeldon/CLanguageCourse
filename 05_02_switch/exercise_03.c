#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int month, days;

    char months[12][15] = {
        "January",  //0
        "February", //1
        "March",    //2
        "April",    //3
        "May",      //4
        "June",     //5
        "July",     //6
        "August",   //7
        "September",//8
        "October",  //9
        "November", //10
        "December"  //11
    };

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
            printf("31 days in %s.\n", months[month - 1]);
            break;
        //30 days
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days in %s.\n", months[month - 1]);
            break;
        //28 or 29
        case 2:
            printf("28 days or 29 in leap years in %s.\n", months[month - 1]);
            break;
        default:
            printf("This month doesn't exist\n");
    }

    return 0;
}