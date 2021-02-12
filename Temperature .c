#include<stdio.h>
   
void main()
{
    float cel,fa;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fa);
    cel=(fa - 32)*5/9;
    printf("Celsius = %.2f",cel); 
 }
