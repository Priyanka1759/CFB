// nested if using single operator like && 
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter value of a and b and c :");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a>c))
	{
	printf("A is greater ");
    }
	if((c>a) && (c>b ))
	{
	printf("C is greater");
    }
    else
    {
    	printf("B is greater");
	}
	return 0;
  }
