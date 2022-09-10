#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x;
	printf("Enter a number: ");
	scanf("%d",&n);
	x=n&1;
	if(x==1)
	printf("It is an odd number");
	else
	printf("It is an even number");
	getch();
}
