#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2)
    {
    	if(n%3)
    	printf("It is not divisible by both 2 and 3");
    	else
    	printf("It is only divisible by 3");
	}
	else
	{
		if(n%3)
		printf("is is only divisible by 2");
		else
		printf("It is divisible by both 2 and 3");
	}
	getch();
}
