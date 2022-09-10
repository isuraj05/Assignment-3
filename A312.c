#include<stdio.h>
#include<conio.h>
int main()
{
    char alpha;
    printf("Enter an alphabet: ");
    scanf("%c",&alpha);
    if(alpha>='A'&&alpha<='Z')
    printf("It is in Upper Case");
    else
    printf("It is in Lower Case");
	getch();
}
