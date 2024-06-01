#include <stdio.h>

int main()
{
    int data_points, i, j;
    float inter_point;

    printf("\nEnter total number of data points: ");
    scanf("%d", &data_points);

    float x[data_points], y[data_points];
    float yp = 0.0, l;
	float lag[data_points];
    printf("\nEnter data points\n");
    for (i = 0; i < data_points; i++)
    {
        printf("\nEnter x[%d]: - ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: - ", i + 1);
        scanf("%f", &y[i]);
    }

    printf("\nEnter interpolation point: ");
    scanf("%f", &inter_point);

    for (i = 0; i < data_points; i++)
    {
        l = 1.0; 

        for (j = 0; j < data_points; j++)
        {
            if (j != i)
            {
                l = l * ((inter_point - x[j]) / (x[i] - x[j]));
            }
        }
        yp = yp + (l * y[i]);
        lag[i]=l;
    }

    printf("\nGiven data points:\n");
    printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < data_points; i++)
    {
        printf("x[%d] = %.4f\t", i + 1, x[i]);
    }
    printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < data_points; i++)
    {
        printf("y[%d] = %.4f\t", i + 1, y[i]);
    }
    printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n Lagrange Cofficinent");
    printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
    
    for (i = 0; i < data_points; i++)
    {
        printf("lag[%d] = %.4f\t", i + 1, lag[i]);
    }
    printf("\n----------------------------------------------------------------------------------------------------------------------------\n");

    printf("\nThe interpolated value at %.4f is: %.4f\n", inter_point, yp);

    return 0;
}

