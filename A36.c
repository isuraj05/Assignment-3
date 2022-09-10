#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n;
	printf("Enter two numbers: ");
	scanf("%d%d",&m,&n);
	if(m>n)
	printf("%d is the greater number",m);
	else
	printf("%d is the greater number",n);
	getch();
}
