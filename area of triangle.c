#include <stdio.h>
#include <math.h>
double areaoftri( double a,double b,double c);
void main()
{
	double n1,n2,n3,area;
	printf("enter the three sides ");
	scanf("%lf %lf %lf",&n1,&n2,&n3);
	area=areaoftri(n1,n2,n3);
	printf(" the area of triangle is: %.2lf",area);
}

double areaoftri(double a,double b,double c)
{
	double s,area;
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
	
