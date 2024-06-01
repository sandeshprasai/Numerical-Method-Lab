#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float function(float x )
{
	return x*log10(x)-1.2 ;
}
float derivative(float x)
{
	return 0.434294+log10(x);
}

int main()
{
    int i=1;
	float x_0,x1,tol;
	up:
	printf("Enter intial guesses:- ");
	scanf("%f",&x_0);
	
	if(derivative(x_0)==0)
	{
		goto up;
	}
	printf("Enter the tolorable error");
	scanf("%f",&tol);
	printf("Itteration\t Xn \t\t f(Xn)\t\t f'(Xn)\t\t x(n+1) ");
	
	do
	{
		x1=x_0-(function(x_0)/derivative(x_0));
		if(function(x1)==0)
		{
			break;
		}
		else{
			x_0=x1;
		}
	printf("\n%d \t\t %f \t %f \t%f \t%f",i,x_0,function(x_0),derivative(x_0),x1);
		i++;
	}while(fabs(function(x_0))>tol);
	
		printf("\nThe root is %f",x1);
}
