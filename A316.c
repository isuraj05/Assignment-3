#include<stdio.h>
#include<conio.h>
int main()
{
    char alpha;
    printf("Enter a character: ");
    scanf("%c",&alpha);
    if(alpha>='A'&&alpha<='Z')
    	printf("It is an upper case alphabet");
	else
		if(alpha>='a'&&alpha<='z')
		printf("is is a lower case alphabet");
		else
		    if(alpha>='0'&&alpha<='9')
			printf("It is a digit");
			else
			printf("It is a special character");
	getch();
}
