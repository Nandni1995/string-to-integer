#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char a[20];
clrscr();
printf("Enter the string to convert int:");
scanf("%s",a);
printf("after convert the integer is:");
printf("%d",atoi(a));
getch();
}
