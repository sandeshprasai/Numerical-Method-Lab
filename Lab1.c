#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float function(float x )
{
     return x*x-x-1;
}

int  main()
{
        float x_0,x_1,f_0,f_1,x_2,f2,tol=0;
        int i=1;
        up:
        printf("\nEnter the value of X_0 and X_1 initial guesses:- ");
        scanf("%f %f",&x_0,&x_1);
        if((function(x_0)*function(x_1))>0)
        {
            printf("\nInitial guesses do not bracket the the root:-");
            goto up;

        }
        printf("\n Enter tolorance error:- ");
        scanf("%f",&tol);
        
        
        printf("\n Iteration \t    X_0 \t   X_1     \t   X_2    \t f(X2) ");
        do
        {
        x_2=(x_0+x_1)/2 ; 
        f2=function(x_2) ;   
        printf("\n %d \t \t %f \t %f \t %f \t %f",i,x_0,x_1,x_2,f2);
        if((function(x_0)*function(x_2))<0)
            {
                x_1=x_2;
            }
            else
            {
                x_0=x_2;
            }
            i++;
        }while(fabs(f2)>tol);
        
        
        
        return 0;
}

