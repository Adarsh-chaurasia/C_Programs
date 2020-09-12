//swapping of two integer numbers without using third variable.!!
#include<stdio.h>
main()
{
	int n1,n2,temp;
	printf("Enter all the two numbers x and y :  ");
	scanf("%d%d",&n1,&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("x=%d\ny=%d",n1,n2);	
}

