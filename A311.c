#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>=33)
		if(b>=33)
			if(c>=33)
				if(d>=33)
					if(e>=33)
						printf("Passed");
					else
	  				  printf("Failed");
				else
	  			  printf("Failed");
			else
	  		  printf("Failed");
		else
	  	  printf("Failed");
	else
	  printf("Failed");
	getch();
}
