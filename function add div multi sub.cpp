// function : addtion - substraction - multiplication -division
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int div(int a,int b);
main()
{
	int a,b,c,d,e,f;
	printf("enter the values of a and b : ");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	d=sub(a,b);
	e=multi(a,b);
	f=div(a,b);
	printf("Addition=%d",c);
	printf("\nSubstraction=%d",d);
	printf("\nmultiplication=%d",e);
	printf("\nDivision=%d",f);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	int d;
	d=a-b;
	return d;
}
int multi(int a,int b)
{
	int e;
	e=a*b;
	return e;
}
int div(int a,int b)
{
	int f;
	f=a/b;
	return f;
}
