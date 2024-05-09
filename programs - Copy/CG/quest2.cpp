#include<iostream>
#include<graphics.h>
using namespace std;
void drawline(int rad,int c1,int c2)
{
	int x,y,dE,dNE,d;
	x=0;
	y=rad;
	d=1-rad;
	while(y>x){
		if(d<0){
			putpixel(x+c1,y+c2,7);
			putpixel(-x+c1,y+c2,7);
			putpixel(x+c1,-y+c2,7);
			putpixel(-x+c1,-y+c2,7);
			putpixel(y+c1,x+c2,7);
			putpixel(y+c1,-x+c2,7);
			putpixel(-y+c1,x+c2,7);
			putpixel(-y+c1,-x+c2,7);
			d=d+2*x+3;
			x=x+1;
			delay(100);
		}
		else{
			putpixel(x+c1,y+c2,7);
			putpixel(-x+c1,y+c2,7);
			putpixel(x+c1,-y+c2,7);
			putpixel(-x+c1,-y+c2,7);
			putpixel(y+c1,x+c2,7);
			putpixel(y+c1,-x+c2,7);
			putpixel(-y+c1,x+c2,7);
			putpixel(-y+c1,-x+c2,7);
			d=d+2*(x-y)+5;
			x=x+1;
			y=y-1;
			delay(100);
		}
	}
}
int main(){
	int radius,c1,c2;
	int window1 = initwindow(800,800);
	cout<<"Enter the radius: ";
	cin>>radius;
	cout<<"Enter the coordinates of centre: ";
	cin>>c1>>c2;
	drawline(radius,c1,c2);
	closegraph(window1);
	return 0;
	}
