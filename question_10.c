//10. WAP to take date as an input in below given format and convert the date format and\
display the result as given below.
//User Input date format – “DD/MM/YYYY” (27/11/2022)\
Output format –\
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)

#include<stdio.h>
#include<conio.h>
int main()
{
    int date,month,year;
    printf("Enter date in this format (DD/MM/YY):\n");
    scanf("%d%d%d",&date,&month,&year);
    printf("Day - %d , Month - %.2d , Year - %d",date,month,year);
    getch();
    return 0;
}