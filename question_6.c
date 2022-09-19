//6. WAP to print the name of the user in double quotes.\
Expected output format – “Hello , Amit Kumar”
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    printf("Enter your name:\n");
    fgets(str,50,stdin);
    printf("Hello , %s",str);
    getch();
    return 0;
}