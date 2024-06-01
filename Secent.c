//secant method
#include<stdio.h>
#include<math.h>

float function(float x)
{
	return  x*x-x-1;
}

int main()
{
	int i=1;
	float x_0,x_1,tol,x_2;
	up:
	printf("\nEnter two initail points X_0 and X_1:- ");
	scanf("%f%f",&x_0,&x_1);
	if(function(x_0)==function(x_1))
	{
		goto up;
		
	}
	
	printf("\nEnter Tolorable error: -");
	scanf("%f",&tol);
	float f1,f_0,f2;
	printf("\nItteration \t X_0       \t X_1      \t X_2        \t f(X_2)");
	do
	{
		f_0=function(x_0);
		f1=function(x_1);
		
		x_2=((x_0*f1)-(x_1*f_0))/(f1-f_0);
		f2=function(x_2);
		if(f2==0)
		{
			break;
		}
		else
		{
			x_0=x_1;
			x_1=x_2;
		}
		printf("\n%d \t\t%f\t%f \t%f \t%f",i,x_0,x_1,x_2,f2);
		i++;
	}while(fabs(f2)>tol);
	printf("\n The root is %f",x_2);
}
