//4. WAP to find the area of the circle. Take radius of circle from user as input and print the\
result in below given format.
//Expected output format – “Area of circle is A having the radius R”. Replace A with area\
& R with radius.
#include<stdio.h>
#include<conio.h>
int main()
{
    float r,area;
    printf("Enter radius of the circle:\n");
    scanf("%f",&r);
    area = 3.14*r*r; // 3.14 is the value of PI 
    printf("Area of circle is %.2f having the radius %.2f",area,r);
    getch();
    return 0;
}
