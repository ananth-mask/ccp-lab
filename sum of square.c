#include <stdio.h>
#include <math.h>
void main()
{
	int n,i;
	double sum=0.0;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n*2;i=i+2)
	if(i%2!=0)
	{
		sum = sum +pow(i,2);
	}
	
	printf("the sum is %.3lf ", sum);
}
