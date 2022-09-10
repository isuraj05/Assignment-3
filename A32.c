#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%5)
	printf("It is not divisible by 5");
	else
	printf("It is divisible by 5");
	getch();
}
