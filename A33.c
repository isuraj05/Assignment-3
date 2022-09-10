#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%2)
	printf("It is an odd number");
	else
	printf("It is an even number");
	getch();
}
