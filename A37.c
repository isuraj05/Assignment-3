#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,dis;
	printf("Enter three numbers for quadratic equation: ");
	scanf("%d%d%d",&a,&b,&c);
	dis=b*b-4*a*c;
	if(dis>0)
	printf("Real and distinct roots");
	else
	 if(dis==0)
	 printf("Real and equal roots");
	 else
	 printf("Imaginary roots");
	getch();
}
