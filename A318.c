#include<stdio.h>
#include<conio.h>
int main()
{
    int month;
    printf("Enter a month number: ");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        printf("Number of days - 31");
    else
        if(month==2)
            printf("Number of days - 28");
        else
            printf("Number of days - 30");
	getch();
}
