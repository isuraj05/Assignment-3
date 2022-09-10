#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter lenghts of the sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
	    printf("It is a valid triangle");
	else
	    printf("is is not a valid triangle");
	getch();
}
