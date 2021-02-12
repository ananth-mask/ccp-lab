#include <stdio.h>
#include <math.h>
void main()
{
	int x,x1,y,y1;
	float d=0.00;
	printf(" enter the coordinates of two points ");
	scanf( " %d %d %d %d",&x,&y,&x1,&y1);
	d=sqrt(pow((x1-x),2)+pow((y1-y),2));
	printf(" the distance is %.3f", d);
}
