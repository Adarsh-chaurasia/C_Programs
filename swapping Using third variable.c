//swapping of two integer numbers using third variable.!!
//This Method uses some extra space,which is not required 
#include<stdio.h>
main()
{
	int n1,n2,temp;
	printf("Enter all the two numbers x and y :  ");
	scanf("%d%d",&n1,&n2);
	temp=n1;n1=n2;n2=temp;
	printf("x=%d\ny=%d",n1,n2);
}
