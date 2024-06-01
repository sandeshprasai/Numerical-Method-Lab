#include<stdio.h>
#include<graphics.h>

int main()
{
	int x ,y ,x1,y1,x2,y2,dx,dy,p;
	
	printf("\n Enter the x-coordinate of the first point:- ");
	scanf("%d",&x1);
	printf("\n Enter the Y-coordinate of the first point:-");
	scanf("%d",&y1);
	printf("\n Enter the x-coordinate of the second point:-");
	scanf("%d",&x2);
	printf("\n Enter the Y-coordinate of the second  point: - ");
	scanf("%d",&y2);
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"");
	x=x1;
	y=y1;
	dx=x2-x1;
	dy=y2-y1;
	putpixel(x,y,2);
	outtextxy(300,300,"SeemaGhimire");
	outtextxy(x+5,y-15,"(x1,y1)");
	p=2*dy-dx;
	while(x<=x2)
	{
		if(p<0)
		{
			x=x+1;
			p=p+2*dy;
			
		}
		else
		{
			x=x+1;
			y=y+1;
			p=p+(2*dy)-(2*dx);
		}
		putpixel(x,y,7);
	}
	outtextxy(x+5,y-5,"(x2,y2)");
	getch();
	closegraph();
}
