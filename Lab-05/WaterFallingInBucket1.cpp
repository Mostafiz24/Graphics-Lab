//program to fill water in a bucket
#include<iostream>
#include"stdio.h"
#include"graphics.h"
#include"math.h"

using namespace std;

int main()
{
int gd=DETECT,gm=DETECT,i,j;
initgraph(&gd,&gm,"c:\\tc\\bgi");
ellipse(300,200,0,360,50,25);
ellipse(300,300,0,360,50,25);
line(250,200,250,300);
line(350,200,350,300);
ellipse(300,100,180,360,5,2);
line(295,100,295,80);
line(305,100,305,86);
arc(300,80,90,180,5);
putpixel(306,85,15);
putpixel(307,84,15);
line(308,84,630,84);
line(300,75,303,75);
line(314,75,630,75);
putpixel(304,74,15);
putpixel(305,73,15);
line(306,72,306,65);
line(311,72,311,65);
putpixel(312,73,15);
putpixel(313,74,15);
pieslice(309,62,0,360,5);
setfillstyle(SOLID_FILL,BLUE);
setcolor(BLUE);
for(i=0;i<7;i++)
{
line(297+i,103,297+i,300);
}
for(i=1;i<100;i++)
{
setcolor(LIGHTBLUE);
ellipse(300,300-i,180,360,4,2);
delay(30);
fillellipse(300,300-i,49,25);
setcolor(1);
line(297,275-i,303,275-i);
setcolor(15);
ellipse(300,200,180,360,50,25);
delay(50);
}
ellipse(300,200,0,360,50,25);
setcolor(0);
for(i=0;i<7;i++)
line(297+i,103,297+i,174);
getch();
}
