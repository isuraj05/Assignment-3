#include<stdio.h>
#include<conio.h>
int main()
{
	int y;
	printf("Enter an year: ");
	scanf("%d",&y);
	if(y%100)
	  if(y%4)
		printf("It is not a leap year");
	  else
		printf("It is a leap year");
	else
	  if(y%400)
		printf("It is not a leap year");
	  else
	    printf("It is a leap year");
	getch();
}
