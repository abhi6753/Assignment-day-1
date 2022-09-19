//5. WAP to calculate the length of String using printf function.
#include<stdio.h>
#include<conio.h>
#define max_size 100
int main()
{
    char str[max_size];
    int i=0,str_len=0,white_space =0;
    printf("Enter string:\n");
    fgets(str,max_size,stdin);
    while(str[i])
    {
        if(str[i]==32)
         white_space++;
        str_len++;
        i++;
    }
    str_len -= white_space+1;  // 1 is added with white spaces to remove null operator
    printf("Length of given string is %d",str_len);
    getch();
    return 0;
}