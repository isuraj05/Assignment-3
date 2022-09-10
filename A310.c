#include<stdio.h>
#include<conio.h>
int main()
{
	float c,s,p;
	printf("Enter cost and selling price of a product: ");
	scanf("%f%f",&c,&s);
	p=(s-c)/c*100;
	if(p>0)
	  printf("%f, so it's a profit",p);
	else
	  if(p==0)
	    printf("%f, so there is no profit or loss",p);
	  else
	    printf("%f, so it's a loss",p);
	getch();
}
