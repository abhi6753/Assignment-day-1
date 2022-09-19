//11. WAP to take time as an input in below given format and convert the time format and\
display the result as given below.\
User Input date format – “HH:MM”\
Output format – “HH hour and MM Minute”\
Example –\
“11:25” converted to “11 Hour and 25 Minute”
#include<stdio.h>
#include<conio.h>
int main()
{
    int hr,min;
    printf("Enter time in this format (HH:MM):\n");
    scanf("%d%d",&hr,&min);
    printf("%.2d Hour and %.2d Minute",hr,min);
    getch();
    return 0;
}