
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

#define WBC 5
//^watchbackcolor
#define X 200
#define Y 200

void dial(int x, int y);
void sechand(int timeminute);

void minhand(int t)
{
int x1,y1;
setlinestyle(0,0,3);

x1= X+ (80 * cos(t*0.1047));
y1= Y+ (80 * sin(t*0.1047));

setcolor(BLACK);
line( X, Y, x1, y1);

setcolor(WBC+1);
line( X, Y, X+ 80 * cos((t-1)*0.1047),Y+ 80 * sin((t-1)*0.1047));
circle(X,Y,4);
}

void sechand(int t)
{
int x1,y1;
setlinestyle(0,0,3);

x1= X+(100 * cos(t*0.1047));
y1= Y+(100 * sin(t*0.1047));

setcolor(RED);
line(X, Y, x1, y1);

setcolor(WBC+1);
line(X, Y, X+ 100 * cos((t-1)*0.1047),Y+ 100 * sin((t-1)*0.1047));

circle(X,Y,4);
}

void dial(int x,int y)
{
int const size=200;

setfillstyle(1,WBC);
fillellipse(x,y,size,size);

setfillstyle(1,WBC+1);
fillellipse(x,y,size-20,size-20);

outtextxy(x,y-(size-40),"12");
outtextxy(x,y+(size-40),"6");
outtextxy(x+(size-40),y,"3");
outtextxy(x-(size-40),y,"9");
outtextxy(x+size/3,y-2*size/3,"1");
outtextxy(x+2*size/3,y-size/3,"2");
outtextxy(x+2*size/3,y+size/3,"4");
outtextxy(x+size/3,y+2*size/3,"5");
outtextxy(x-size/3,y+2*size/3,"7");
outtextxy(x-2*size/3,y+size/3,"8");
outtextxy(x-size/3,y-2*size/3,"11");
outtextxy(x-2*size/3,y-size/3,"10");

circle(x,y,4);
}

void main()
{
int gd=DETECT, gm,i,j, flag=1;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

dial(200,200);
do
{
minhand(i);
for(j=0;j<60;j++)
{
sechand(j);
delay(1000
);
if(kbhit()) {
flag =0;
break;
}
}
i++;
}while(flag);
closegraph();
}