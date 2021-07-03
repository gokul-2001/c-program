#include<stdio.h>
main()
{
	int a=30,b=40;
	printf("before swapping two numbers a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping two numbers a=%d b=%d",a,b);
	
}
