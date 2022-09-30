#include<stdio.h>
void main ()
{
	int a , b ;
	printf("enter 2 value");
	scanf("%d%d", &a,&b);
	if (a >= b)
	{ 
	  printf("the value is maximum %d",a);
	}
    else
	{
		printf("the value is minimum %d",a);
	}
}

