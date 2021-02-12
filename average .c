#include <stdio.h>
int average(int , int , int );
void main()
{
	int n1,n2,n3,avg;
	printf("enter three nunbers ");
	scanf(" %d %d %d", &n1,&n2,&n3);
	avg=average( n1,n2,n3);
	printf("the average is: %d", avg);
}

int average(int a,int b,int c)
{
	double area;
	area= (a+b+c)/3 ;
	return area;
}
