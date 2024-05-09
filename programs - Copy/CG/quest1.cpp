#include<iostream>
#include<graphics.h>
using namespace std;
void drawline(int x0, int x1, int y0, int y1)
	{
		int dy,dx,x,y,dE,dNE,d;
		dx=x1-x0;
		dy=y1-y0;
		x=x0;
		y=y0;
		d=2*dy-dx;
		dE=2*dy;
		dNE=2*(dy-dx);
		while(x<x1){
			if(d<=0){
			
				putpixel(x,y,7);
				
				x=x+1;
				
				d=d+dE;
				
				delay(100);
			}
			
			else{
				putpixel(x,y,RED);
				x=x+1;
				y=y+1;
				
				d=d+dNE;
				
				delay(100);
			}
		}
	}

int main(){
	int x0,y0,x1,y1;
	int window1 = initwindow(800,800);
	cout<<"Enter the co-ordinate of first point : ";
	cin>>x0>>y0;
	
	cout<<"Enter the co-ordinate of second point : ";
	cin>>x1>>y1;
	drawline(x0,x1,y0,y1);
	
	system("pause");
	
	return 0; 
}
