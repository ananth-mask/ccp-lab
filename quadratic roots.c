#include <stdio.h>
#include <math.h>
void main()
{
	double r1,r2,i1,i2,d,a,b,c,re,im;
	printf("enter the coefficients ");
	scanf(" %lf %lf %lf ",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		r1= (-b + sqrt(d))/(2*a);
		r2= (-b - sqrt(d))/(2*a);
		printf(" the roots are %lf \t %lf ", r1,r2);
	}
	else if(d==0)
	{
		r1 = (-b)/(2*a);
		r2=r1;
		printf( " root1= root2 = %lf", r2);
	}
	 else 
	{  re= -b / (2*a);
		im= sqrt(-d) / (2*a);
		
		printf(" root1= %.2lf +%.2lfi and root2 = %.2f - %.2fi", re,im,re,im);
	}
}
