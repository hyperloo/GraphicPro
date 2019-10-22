#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
#include<math.h>
int side=10,top=10,i=30,j=30,l=0,q,score,x,y;
int t=300,z=230,m=200;

void page1();
void page2();
void page3();
void project();
void refraction();
void reflection();
void concave_mirror();
void convex_mirror();
void convex_lens();
void concave_lens();
void define_reflection();
void define_refraction();
void menu();
void draw();
void menu2();
void circle();
void line();
void rectangle();
void arc();
void  ellipse();
void beat();
void moveit();
void move();
void line1();
void piano();
void menu1();
void virus();
void lol();

void main()
{
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");


page1();                     //the first page
cleardevice();

page2();                    //the second page
cleardevice();

page3();                    //the third page
cleardevice();

project();



getch();

}





/******************THE FIRST PAGE*********************************/
void page1()
{       int x,y,i;
x=getmaxx()/4;
y=getmaxy()/2;
int    m=0, 	p=0,  q=180,	r=0;

char l[]="COMPUTER SCIENCE PROJECT";

setfillstyle(INTERLEAVE_FILL,RED);
settextstyle(GOTHIC_FONT, HORIZ_DIR,5);
setcolor(RED);
outtextxy(-10,20,l);
gotoxy(-10,10);
delay(30);


for(i=35;i<160;i++,m++,r++,p=+15,q=-15)
{
setbkcolor(r/8);
setcolor(m/15);
delay(30);
arc(x,y,p,q,i);
}

setfillstyle(BKSLASH_FILL,RED);
bar(400,175,425,300);
delay(100);
setfillstyle(BKSLASH_FILL,GREEN);
bar(350,225,475,250);
delay(100);
setfillstyle(BKSLASH_FILL,RED);
bar(550,175,575,300);
delay(100);
setfillstyle(BKSLASH_FILL,GREEN);
bar(500,225,625,250);
settextstyle(SMALL_FONT, HORIZ_DIR,random(2)+5);
setcolor(MAGENTA);
outtextxy(400,400,"PRESS 'ENTER' TO MOVE NEXT");
getch();


}

/**********************THE SECOND PAGE****************************/
void page2()
{
setbkcolor(BLACK);
setfillstyle(SOLID_FILL,RED);
setcolor(RED);
setlinestyle(SOLID_LINE,1213,THICK_WIDTH);
bar(1,380,650,600);

setcolor(MAGENTA);
setlinestyle(USERBIT_LINE,1320345142321423,THICK_WIDTH);
delay(30);
line(10,1,10,500);
delay(30);
line(15,1,15,500);
delay(30);
line(1,10,650,10);
delay(30);
line(1,15,650,15);
delay(30);
line(630,1,630,500);
delay(30);
line(625,1,625,500);
delay(30);
line(1,455,650,455);
delay(30);
line(1,450,650,450);
delay(50);

settextstyle(TRIPLEX_SCR_FONT,	VERT_DIR, 5);
setcolor(YELLOW);
outtextxy(550,20,"INTRODUCTION");
delay(70);
line(580,30,580,370);

setfillstyle(SOLID_FILL,BLACK);
setcolor(BLUE);
setlinestyle(DOTTED_LINE,1213,THICK_WIDTH);
int p=100,	q=150,	r=400,	s=250,	z=5,	t=100;
for(int i=0;i<10;i++)
{
bar3d(p,q,r,s,z,5);
delay(100);
p=p-10;
q=q-10;
r=r+10;
s=s+10;
z=z+5;
}

settextstyle(SMALL_FONT, HORIZ_DIR, 5);
setcolor(YELLOW);
char a[]="\n\n\n\n\n\n   This Project Is a Result Of Dedicated Efforts. \n\n   Thanks TO COMPUTER SCIENCE TEANCHER, SEFAHLI  MAM \n\n   And Also I Would Like TO Thank Her For Consultative \n\n   Help And Constructive Suggestions. \n\n   THE INTERNET Is Also Proved To Be A Great Treasure To \n\n    Arrange Pearls For MY PROJECT:";

for(i=0;a[i]!='\0';i++)
{	cout<<a[i];
delay(20);
//sound(t);
t=t+10;
}
while(!kbhit())
{	delay(40);
putpixel(random(640),random(548),random(35));
}
nosound();
settextstyle(SMALL_FONT, HORIZ_DIR,random(2)+5);
setcolor(BLUE);
outtextxy(400,400,"PRESS 'ENTER' TO MOVE NEXT");
getch();
}



/********************THE THIRD PAGE********************************/
void page3()
{	int x,z;
float y;


setlinestyle(DASHED_LINE,1320345,NORM_WIDTH);
for(int mn=0;mn<=25;mn++)
{       if(mn%5==0)
{	clrscr();
}
setbkcolor(RED);
arc(300,250,random(150),random(150)+320,random(130));
settextstyle(TRIPLEX_SCR_FONT, HORIZ_DIR,random(8));
setcolor(mn);
outtextxy(350,250,"LOADING.....");
delay(100);
}
settextstyle(SMALL_FONT, HORIZ_DIR,random(2)+5);
setcolor(BLUE);
outtextxy(400,400,"PRESS 'ENTER' TO MOVE NEXT");
getch();
}

/***************************project*******************************/
void project()
{	int x=20;
int y=20;
float j=1;
int ch;

setcolor(MAGENTA);
setlinestyle(USERBIT_LINE,1320345142321423,THICK_WIDTH);
delay(30);
line(10,1,10,500);
delay(30);
line(15,1,15,500);
delay(30);
line(1,10,650,10);
delay(30);
line(1,15,650,15);
delay(30);
line(630,1,630,500);
delay(30);
line(625,1,625,500);
delay(30);
line(1,455,650,455);
delay(30);
line(1,450,650,450);
delay(50);

cleardevice();
settextstyle(TRIPLEX_FONT, 1,8);
setbkcolor(RED);
setcolor(YELLOW);
delay(1000);
outtextxy(100,100,"CHOOSE");
delay(500);

setcolor(GREEN);
setlinestyle(USERBIT_LINE,1320345142321423,THICK_WIDTH);
delay(30);
line(10,1,10,500);
delay(30);
line(15,1,15,500);
delay(30);
line(1,10,650,10);
delay(30);
line(1,15,650,15);
delay(30);
line(630,1,630,500);
delay(30);
line(625,1,625,500);
delay(30);
line(1,455,650,455);
delay(30);
line(1,450,650,450);
delay(50);
menu();
getch();
}

void menu()
{       int ch;
cleardevice();
settextstyle(TRIPLEX_FONT, 1,8);
setbkcolor(RED);
setcolor(YELLOW);
delay(1000);
outtextxy(100,100,"CHOOSE");
delay(500);

setcolor(GREEN);
setlinestyle(USERBIT_LINE,1320345142321423,THICK_WIDTH);
delay(30);
line(10,1,10,500);
delay(30);
line(15,1,15,500);
delay(30);
line(1,10,650,10);
delay(30);
line(1,15,650,15);
delay(30);
line(630,1,630,500);
delay(30);
line(625,1,625,500);
delay(30);
line(1,455,650,455);
delay(30);
line(1,450,650,450);
delay(50);

setcolor(LIGHTMAGENTA);
settextstyle(SMALL_FONT, 0,8);
outtextxy(300,100,"1. REFLECTION");
outtextxy(302,102,"1. REFLECTION");
delay(200);
outtextxy(300,175,"2. REFRACTION");
outtextxy(302,177,"2. REFRACTION");
delay(200);
outtextxy(300,250,"3. HAVE FUN (DRAWING)");
outtextxy(302,252,"3. HAVE FUN (DRAWING)");
delay(200);
outtextxy(300,285,"4. SEE YOUR HEART BEATS");
outtextxy(302,287,"4. SEE YOUR HEART BEATS");
delay(200);
outtextxy(300,320,"5. PACMAN");
outtextxy(302,322,"5. PACMAN");
delay(200);
outtextxy(300,355,"6. PIANO");
outtextxy(302,357,"6. PIANO");
delay(200);
outtextxy(300,390,"7. EXIT");
outtextxy(302,392,"7. EXIT");

settextstyle(DEFAULT_FONT, 0,1);
outtextxy(340,135,"* By Concave Mirror");
outtextxy(340,150,"* By Convex Mirror");
outtextxy(340,210,"* By Convex Lens");
outtextxy(340,225,"* By Concave Lens");
cin>>ch;
switch(ch)
{	case 1:       	cleardevice();
reflection();
menu();
break;

case 2:		cleardevice();
refraction();
menu();
break;

case 3:         cleardevice();
draw();
menu();
break;

case 4:		cleardevice();
beat();
menu();

case 5:		cleardevice();
move();
menu();

case 6:		cleardevice();
piano();
menu();

case 7:         cleardevice();
int pq=0;
for(int lt=0;lt<800;lt++)
{       setcolor(pq);
if(lt%25==0)
{	pq++;       delay(80);
}
line(lt,0,lt,500);
}
cleardevice();
virus();
setbkcolor(DARKGRAY);
cleardevice();
setbkcolor(RED);
clrscr();
setcolor(MAGENTA);
settextstyle(TRIPLEX_FONT,0,9);
outtextxy(50,100,"THANK YOU");
outtextxy(52,102,"THANK YOU");
setcolor(BLUE);
settextstyle(SMALL_FONT,0,9);
outtextxy(252,232,"A PROJECT BY HIMANSHU");
outtextxy(260,260,"AND DEVESH");
outtextxy(252,312,"CLASS:	XII-A");
delay(2000);
closegraph();
exit(0);

}
}


void refraction()
{
define_refraction();
delay(1000);

convex_lens();
delay(1000);

concave_lens();
delay(1000);

getch();
}

void define_refraction()
{       setbkcolor(YELLOW);
setcolor(RED);
settextstyle(TRIPLEX_FONT,0,5);
delay(230);
outtextxy(210,40,"REFRACTION");
delay(230);

setcolor(BLUE);
setlinestyle(USERBIT_LINE,1320345142321423,THICK_WIDTH);
delay(30);
line(10,1,10,500);
delay(30);
line(15,1,15,500);
delay(30);
line(1,10,650,10);
delay(30);
line(1,15,650,15);
delay(30);
line(630,1,630,500);
delay(30);
line(625,1,625,500);
delay(30);
line(1,455,650,455);
delay(30);
line(1,450,650,450);
delay(50);

setcolor(BLUE);
settextstyle(SMALL_FONT,0,7);
outtextxy(30,130,"The Bending of Light on Passing Through the Medium ");
outtextxy(80,170,"of Different Refractive Index is Called");
outtextxy(160,210,"REFRACTION of LIGHT.");
outtextxy(80,280,"*--->	REFRACTION by CONVEX LENS");
outtextxy(80,320,"*--->	REFRACTION by CONCAVE LENS");
delay(1000);

getch();
}

void convex_lens()
{       setbkcolor(RED);
settextstyle(DEFAULT_FONT,0,1);
int a=3,b=30;
for(int i=0;i<10;i++)
{       clrscr();
setcolor(BLUE);
setlinestyle(SOLID_LINE,1,THICK_WIDTH);
ellipse(300,200,100,260,a,b);
ellipse(290,200,280,80,a,b);
delay(100);
a=a+3;
b=b+5;
}
setcolor(YELLOW);
settextstyle(BOLD_FONT,0,1);
outtextxy(50,40,"REFRACTION BY A CONVEX LENS");

settextstyle(DEFAULT_FONT,0,1);
setcolor(BLUE);
outtextxy(250,280,"CONVEX LENS");

outtextxy(290,203,"+");

outtextxy(280,210,"POLE");

setlinestyle(SOLID_LINE,1,NORM_WIDTH);
delay(200);
line(50,205,600,205);
outtextxy(10,208,"PRINCIPLE AXIS");

setcolor(RED);

outtextxy(100,160,"LIGHT RAYS");
line(50,175,293,175);
delay(200);
line(293,175,500,205);
outtextxy(250,172,">");
delay(150);

line(50,145,293,145);
delay(200);
line(293,145,500,205);
outtextxy(250,142,">");
delay(150);

outtextxy(100,245,"LIGHT RAYS");
line(50,235,293,235);
delay(200);
line(293,235,500,205);
outtextxy(250,232,">");
delay(150);

line(50,260,293,260);
delay(200);
line(293,260,500,205);
outtextxy(250,258,">");
outtextxy(480,215,"FOCUS");

getch();
}

void concave_lens()
{       setbkcolor(RED);
settextstyle(DEFAULT_FONT,0,1);
int a=33,b=80;
for(int i=0;i<10;i++)
{       clrscr();
setcolor(BLUE);
setlinestyle(SOLID_LINE,1,THICK_WIDTH);
ellipse(320,200,100,260,a,b);
ellipse(270,200,280,80,a,b);
delay(100);
a=a-2;
}
outtextxy(270,280,"-------");
outtextxy(270,117,"-------");
setcolor(YELLOW);
settextstyle(BOLD_FONT,0,1);
outtextxy(50,40,"REFRACTION BY A CONCAVE LENS");

settextstyle(DEFAULT_FONT,0,1);
setcolor(BLUE);
outtextxy(250,290,"CONCAVE LENS");

outtextxy(290,203,"+");

outtextxy(280,210,"POLE");

setlinestyle(SOLID_LINE,1,NORM_WIDTH);
delay(200);
line(50,205,600,205);
outtextxy(10,208,"PRINCIPLE AXIS");

setcolor(RED);

outtextxy(100,160,"LIGHT RAYS");
line(50,175,293,175);
delay(200);
line(293,175,123,140);
outtextxy(250,172,">");
delay(150);

line(50,145,293,145);
delay(200);
line(293,145,123,100);
outtextxy(250,142,">");
delay(150);

outtextxy(100,245,"LIGHT RAYS");
line(50,235,293,235);
delay(200);
line(293,235,123,285);
outtextxy(250,232,">");
delay(150);

line(50,260,293,260);
delay(200);
line(293,260,123,325);
outtextxy(250,258,">");
outtextxy(405,215,"FOCUS");

setlinestyle(1,123321,NORM_WIDTH);
line(293,175,400,205);
delay(100);
line(293,145,400,205);
delay(100);
line(293,235,400,205);
delay(100);
line(293,260,400,205);
delay(100);
getch();
}


void reflection()
{
define_reflection();
delay(1000);
setbkcolor(RED);

concave_mirror();
delay(1000);

convex_mirror();
delay(1000);

getch();
}

void define_reflection()
{       setbkcolor(YELLOW);
setcolor(RED);
settextstyle(TRIPLEX_FONT,0,5);
delay(230);
outtextxy(210,40,"REFLECTION ");
delay(230);

setcolor(MAGENTA);
setlinestyle(USERBIT_LINE,1320345142321423,THICK_WIDTH);
delay(30);
line(10,1,10,500);
delay(30);
line(15,1,15,500);
delay(30);
line(1,10,650,10);
delay(30);
line(1,15,650,15);
delay(30);
line(630,1,630,500);
delay(30);
line(625,1,625,500);
delay(30);
line(1,455,650,455);
delay(30);
line(1,450,650,450);
delay(50);

setcolor(BLUE);
settextstyle(SMALL_FONT,0,7);
outtextxy(40,130,"The Bouncing Back of Light After Striking Any ");
outtextxy(80,170,"Surface is Called REFLECTION of Light.");
outtextxy(80,240,"*--->	REFLECTION by CONCAVE MIRROR");
outtextxy(80,280,"*--->	REFLECTION by CONVEX MIRROR");
delay(1000);

getch();
}



void concave_mirror()
{
int a=3,b=30;
for(int i=0;i<10;i++)
{       clrscr();
setcolor(BLUE);
setlinestyle(SOLID_LINE,1,THICK_WIDTH);
ellipse(450,200,280,80,a,b);
delay(100);
a=a+3;
b=b+5;
}
setcolor(YELLOW);
settextstyle(BOLD_FONT,0,1);
outtextxy(50,40,"REFLECTION BY A CONCAVE MIRROR");

settextstyle(0,0,1);
setcolor(DARKGRAY);

setlinestyle(USERBIT_LINE,1233729372321,NORM_WIDTH);
int p=448;
for(i=0;i<5;i++)
{	ellipse(p,200,280,80,33,80);
p++;
}
outtextxy(400,290,"CONCAVE MIRROR");

setcolor(BLUE);

setlinestyle(SOLID_LINE,1,NORM_WIDTH);
delay(200);
line(50,205,480,205);
outtextxy(10,208,"PRINCIPLE AXIS");

setcolor(RED);

outtextxy(100,160,"LIGHT RAYS");
line(50,145,472,145);
delay(200);
line(472,145,350,205);
outtextxy(250,142,">");
delay(150);

outtextxy(100,265,"LIGHT RAYS");
line(50,260,472,260);
delay(200);
line(472,260,350,205);
outtextxy(250,257,">");
delay(150);

outtextxy(309,208,"FOCUS");

getch();
}

void convex_mirror()
{	int e=3,f=30;
for(int i=0;i<10;i++)
{       clrscr();
setcolor(BLUE);
setlinestyle(SOLID_LINE,1,THICK_WIDTH);
ellipse(500,200,100,260,e,f);
delay(100);
e=e+3;
f=f+5;
}

setcolor(YELLOW);
settextstyle(BOLD_FONT,0,1);
outtextxy(50,40,"REFLECTION BY A CONVEX MIRROR");

settextstyle(0,0,1);
setcolor(DARKGRAY);

setlinestyle(USERBIT_LINE,1233729372321,NORM_WIDTH);
int p=505;
for(i=0;i<5;i++)
{	ellipse(p,200,100,260,33,80);
p++;
}
outtextxy(460,290,"CONVEX MIRROR");

setcolor(BLUE);

setlinestyle(SOLID_LINE,1,NORM_WIDTH);
delay(200);
line(50,205,600,205);
outtextxy(10,208,"PRINCIPLE AXIS");

setcolor(RED);

outtextxy(100,160,"LIGHT RAYS");
line(50,145,472,145);
delay(200);
line(472,145,350,75);
outtextxy(250,142,">");
delay(150);

outtextxy(100,265,"LIGHT RAYS");
line(50,260,472,260);
delay(200);
line(472,260,350,325);
outtextxy(250,257,">");
delay(150);

setlinestyle(DOTTED_LINE,1,NORM_WIDTH);
line(472,260,552,205);
line(472,145,552,205);

outtextxy(540,212,"FOCUS");

getch();
}


void draw()
{       int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

int t=55;
line(55,0,55,500);
line(0,55,700,55);
for(int i=0;i<14;i++)
{
line(t,10,t,55);
t=t+50;
}
t=55;
for(i=0;i<14;i++)
{
line(0,t,55,t);
t=t+50;
}

t=40;	int *a;   char  p[2];
outtextxy(35,95,"1");
outtextxy(35,145,"2");
outtextxy(35,195,"3");
outtextxy(35,245,"4");
outtextxy(35,295,"5");
outtextxy(35,345,"6");
outtextxy(35,395,"7");
outtextxy(35,445,"8");
outtextxy(35,495,"9");

outtextxy(89,40,"1");
outtextxy(139,40,"2");
outtextxy(189,40,"3");
outtextxy(239,40,"4");
outtextxy(289,40,"5");
outtextxy(339,40,"6");
outtextxy(389,40,"7");
outtextxy(439,40,"8");
outtextxy(489,40,"9");
outtextxy(539,40,"10");
outtextxy(589,40,"11");
outtextxy(639,40,"12");
outtextxy(689,40,"13");
menu2();
getch();
}



void menu2()
{       int ch;
setfillstyle(1,BLACK);
outtextxy(500,340,"1. line");
outtextxy(500,360,"2. circle");
outtextxy(500,380,"3. rectangle");
outtextxy(500,400,"4. arc");
outtextxy(500,420,"5. ellipse");
outtextxy(500,440,"6. exit");
outtextxy(500,470,"enter your choice");
cin>>ch;

switch(ch)
{	case 1:
bar(40,56,650,80);
line();
menu2();
break;

case 2:

bar(40,56,650,80);
circle();
menu2();
break;

case 3:

bar(40,56,650,80);
rectangle();
menu2();

break;

case 4:
bar(40,56,650,80);
arc();
menu2();

case 5:
bar(40,56,650,80);
ellipse();
menu2();
case 6:
bar(40,56,650,80);
menu();
exit(1);
}



getch();

}

void line()
{       int a,b,c,d,x1,x2,y1,y2;
outtextxy(50,60," coordinates:  x1   y1   x2   y2\n");
cin>>a>>b>>c>>d;
x1=a*50+55;
y1=b*50+55;
x2=c*50+55;
y2=d*50+55;
line(x1,y1,x2,y2);
getch();
}

void circle()
{       int a,b,c,x,y;
float r;
outtextxy(50,60," coordinates for centre:  x   y    and radius r");
cin>>a>>b>>c;
x=a*50+55;
y=b*50+55;
r=c+55;
circle(x,y,r);
getch();
}

void rectangle()
{       int a,b,c,d,x1,x2,y1,y2;
outtextxy(50,60," coordinates:  x1   y1   x2   y2\n");
cin>>a>>b>>c>>d;
x1=a*50+55;
y1=b*50+55;
x2=c*50+55;
y2=d*50+55;
rectangle(x1,y1,x2,y2);
getch();
}



void arc()
{	int a,b,c,d,e,x1,y1,a1,a2;
float r;
outtextxy(50,60," coordinates:  x1   y1  starting angle a1  ending angle a2   radius r ");
cin>>a>>b>>c>>d>>e;
x1=a*50+55;
y1=b*50+55;
a1=c;
a2=d;
r=e*50+55;
arc(x1,y1,a1,a2,r);
getch();
}

void ellipse()
{       int a,b,c,d,e,f,x1,y1,a1,a2,r1,r2;
outtextxy(50,60," coordinates:  x1   y1  start angle a1  end angle a2   radius up and sides r1 r2");
cin>>a>>b>>c>>d>>e>>f;
x1=a*50+55;
y1=b*50+55;
a1=c;
a2=d;
r1=e*25+55;
r2=f*25+55;
ellipse(x1,y1,a1,a2,r1,r2);
getch();
}


char d[20],b[20];
int k,n,i1,j1,p,a[4][4];


void beat()
{
int i=getmaxx();
int j=getmaxy();
setbkcolor(GREEN);
settextstyle(BOLD_FONT,HORIZ_DIR,4);
setcolor(RED);
outtextxy(200,30,"HEART BEAT");
setlinestyle(SOLID_LINE,1,2);
line(0,200,i,200);
rectangle(0,0,i,j);
moveto(0,200);
setcolor(WHITE);
int p=0;
setlinestyle(SOLID_LINE,1,2);
while(!kbhit())
{   int t=80+random(230);
delay(120);
settextstyle(BOLD_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,BLACK);
bar(170,10,i,100);
setcolor(RED);
outtextxy(200,30,"HEART BEAT");
setcolor(WHITE);
moveto(p-5,200);
lineto(p,t);
lineto(p+5,200);
delay(120);
settextstyle(BOLD_FONT,HORIZ_DIR,4);
setcolor(YELLOW);
bar(150,20,i,100);
outtextxy(170,10,"HEART BEAT");
p+=10;
}
getch();
}

void move()
{int p=DETECT,q;
initgraph(&p,&q,"");
setbkcolor(GREEN);
for(int sc=0;sc<5;sc++)
{       x=30+random(55)*10;
y=30+random(38)*10;
circle(x,y,5);
for(;;l++)
{   moveit();
if(x==i&&y==j)
{     cleardevice();
score++;
gotoxy(1,1);
sound(1000);
delay(40);
nosound();
cout<<"score->"<<score;
break;
 }
if(i==550||j==450||i==20||j==20)
{       settextstyle(BOLD_FONT,0,2);
sound(100);
delay(100);
nosound();
outtextxy(100,100,"OOPS! YOU LOST IT");
menu();
break;
}
delay(80);
cleardevice();
}
if(i==550||j==450||i==20||j==20)
{       settextstyle(BOLD_FONT,0,2);
outtextxy(100,100,"OOPS! YOU LOST IT");
menu();
break;
}
}
getch();
closegraph();
}

void moveit()
{     char ch,gh;
ch=getch();
if(ch=='d'||ch=='D')
{      gotoxy(3,3);
cout<<"score->"<<score;

line1();

side++;
i=side*10;
setcolor(RED);
circle(x,y,5);

setfillstyle(SOLID_FILL,YELLOW);
if(l%2==0)
{		pieslice(i,j,45,315,10);
sound(800); delay(20);	nosound();  }
else
{		pieslice(i,j,0,360,10);
sound(600);    delay(20);	 nosound(); }
}

if(ch=='A'||ch=='a')
{       gotoxy(3,3);
cout<<"score->"<<score;
line1();
side--;
i=side*10;
circle(x,y,5);
setcolor(RED);
setfillstyle(SOLID_FILL,YELLOW);
if(l%2==0)
{	pieslice(i,j,225,360,10);
pieslice(i,j,360,135,10);
sound(800);  delay(20);	nosound();
}
else
{	pieslice(i,j,180,360,10);
pieslice(i,j,360,180,10);
sound(600);   delay(20);	nosound();
}
}

if(ch=='s'||ch=='S')
{       gotoxy(3,3);
cout<<"score->"<<score;
line1();
circle(x,y,5);
top++;
j=top*10;
setcolor(RED);
setfillstyle(SOLID_FILL,YELLOW);
if(l%2==0)
{	pieslice(i,j,315,360,10);
pieslice(i,j,360,225,10);
sound(800);   delay(20);	nosound();
}
else
{	pieslice(i,j,270,360,10);
pieslice(i,j,360,270,10);
sound(600);   delay(20);	nosound();
}
}

if(ch=='w'||ch=='W')
{       gotoxy(3,3);
cout<<"score->"<<score;
line1();
top--;
j=top*10;
circle(x,y,5);
setcolor(RED);

setfillstyle(SOLID_FILL,YELLOW);
if(l%2==0)
{	pieslice(i,j,135,360,10);
pieslice(i,j,360,35,10);
sound(800);   delay(20);	 nosound();
}
else
{	pieslice(i,j,90,360,10);
pieslice(i,j,360,90,10);
sound(600); delay(20); nosound();
}
}


getch();
}

void line1()
{
setfillstyle(HATCH_FILL,RED);


setlinestyle(SOLID_LINE,1320345142321423,THICK_WIDTH);
bar(580,0,650,500);
bar(0,450,600,500);
bar(0,0,660,20);
bar(0,0,20,450);
getch();
}

void piano()
{
int x,y,i;

cout<<"\n press signs ,numeric and alphabetic key for sound and change\n";
nosound();
menu1();
nosound();
getch();
}

void menu1()
{       char nh;
cleardevice();
setbkcolor(BLACK);
setlinestyle(SOLID_LINE,1,THICK_WIDTH);
nh=getch();
setcolor(random(15));
circle(random(t),random(z),random(m));
circle(random(t),random(z),random(m));
circle(random(t),random(z),random(m));
circle(random(t),random(z),random(m));
setfillstyle(random(10),random(15));
bar3d(200,100+random(200),240,400,12,12);
setfillstyle(random(10),random(15));
bar3d(240,100+random(200),280,400,12,12);
setfillstyle(random(10),random(15));
bar3d(280,100+random(200),320,400,12,12);
setfillstyle(random(10),random(15));
bar3d(320,100+random(200),360,400,12,12);
setfillstyle(random(10),random(15));
bar3d(360,100+random(200),400,400,12,12);
setfillstyle(random(10),random(15));
bar3d(400,100+random(200),440,400,12,12);
setfillstyle(random(10),random(15));
bar3d(440,100+random(200),480,400,12,12);
switch(nh)
{      case ' ': 	a1:
sound(231);delay(100); sound(233);delay(100); sound(235);delay(100);
while(!kbhit){
goto a1; }

//l

menu1();
break;
case '`':   	a2:
sound(244);delay(100); sound(246);delay(100); sound(248);delay(100);
while(!kbhit){
goto a2; }
//l

menu1();
break;
case '1':	a3:
sound(259);delay(100); sound(261);delay(100); sound(263);delay(100);
while(!kbhit){
goto a3; }

//l

menu1();
break;
case  '2':	a4:
sound(273);delay(100); sound(277);delay(100); sound(279);delay(100);
while(!kbhit){
goto a4; }

//l

menu1();
break;
case '3': 	a5:
sound(291);delay(100); sound(293);delay(100); sound(295);delay(100);
while(!kbhit){
goto a5; }

//l

menu1();
break;
case '4':  	a6:
sound(327);delay(100); sound(329);delay(100); sound(331);delay(100);
while(!kbhit){
goto a6; }
//l

menu1();
break;
case '5':	a7:
sound(347);delay(100); sound(349);delay(100); sound(351);delay(100);
while(!kbhit){
goto a7; }

//l

menu1();
break;
case '6': 	a8:
sound(367);delay(100); sound(369);delay(100); sound(371);delay(100);
while(!kbhit){
goto a8; }

//l

menu1();
break;
case '7': 	a9:
sound(389);delay(100); sound(391);delay(100); sound(393);delay(100);
while(!kbhit){
goto a9; }
//l

menu1();
break;
case '8': 	b1:
sound(413);delay(100); sound(415);delay(100); sound(417);delay(100);
while(!kbhit){
goto b1; }

//l

menu1();break;
case '9': 	b2:
sound(438);delay(100); sound(440);delay(100); sound(442);delay(100);
while(!kbhit){
goto b2; }

//l

menu1();break;
case '0': 	b3:
sound(464);delay(100); sound(466);delay(100); sound(468);delay(100);
while(!kbhit){
goto b3; }

//l

menu1();break;
case '-': 	b4:
sound(491);delay(100); sound(493);delay(100); sound(495);delay(100);
while(!kbhit){
goto b4; }

//l

menu1();break;
case '=': 	b5:
sound(552);delay(100); sound(554);delay(100); sound(556);delay(100);
while(!kbhit){
goto b5; }

//l

menu1();break;
case 'q':	b6:
sound(585);delay(100); sound(587);delay(100); sound(589);delay(100);
while(!kbhit){
goto b6; }

//l

menu1();break;
case 'w': 	b7:
sound(620);delay(100); sound(622);delay(100); sound(624);delay(100);
while(!kbhit){
goto b7; }

//l

menu1();break;
case 'e': 	b8:
sound(657);delay(100); sound(661);delay(100); sound(663);delay(100);
while(!kbhit){
goto b8; }

//l

menu1();break;
case 'r': 	b9:
sound(696);delay(100); sound(698);delay(100); sound(700);delay(100);
while(!kbhit){
goto b9; }

//l

menu1();break;
case 't': 	c1:
sound(737);delay(100); sound(739);delay(100); sound(741);delay(100);
while(!kbhit){
goto c1; }

//l

menu1();	break;
case 'y': 	c2:
sound(781);delay(100); sound(783);delay(100); sound(785);delay(100);
while(!kbhit){
goto c2; }

//l

menu1();break;
case 'u': 	c3:
sound(878);delay(100); sound(880);delay(100); sound(882);delay(100);
while(!kbhit){
goto c3; }

//l

menu1();	break;
case 'i': 	c4:
sound(930);delay(100); sound(932);delay(100); sound(934);delay(100);
while(!kbhit){
goto c4; }

//l

menu1();break;
case 'o': 	c5:
sound(985);delay(100); sound(987);delay(100); sound(989);delay(100);
while(!kbhit){
goto c5; }

//l

menu1();break;
case 'p': 	c6:
sound(1106);delay(100); sound(1108);delay(100); sound(1110);delay(100);
while(!kbhit){
goto c6; }

//l

menu1();break;
case '[': 	c7:
sound(1172);delay(100); sound(1174);delay(100); sound(1176);delay(100);
while(!kbhit){
goto c7; }

//l

menu1();break;
case ']': 	c8:
sound(1242);delay(100); sound(1244);delay(100); sound(1246);delay(100);
while(!kbhit){
goto c8; }

//l

menu1();break;
case 'a': 	c9:
sound(1316);delay(100); sound(1318);delay(100); sound(1320);delay(100);
while(!kbhit){
goto c9; }

//l

menu1();break;
case 's': 	d1:
sound(1394);delay(100); sound(1396);delay(100); sound(1398);delay(100);
while(!kbhit){
goto d1; }

//l

menu1();break;
case 'd': 	d2:
sound(1477);delay(100); sound(1479);delay(100); sound(1481);delay(100);
while(!kbhit){
goto d2; }

//l

menu1();break;
case 'f': 	d3:
sound(1569);delay(100); sound(1571);delay(100); sound(1573);delay(100);
while(!kbhit){
goto d3; }

//l

menu1();break;
case 'g': 	d4:
sound(1659);delay(100); sound(1661);delay(100); sound(1663);delay(100);
while(!kbhit){
goto d4; }

//l


menu1();break;
case 'h': 	d5:
sound(1758);delay(100); sound(1760);delay(100); sound(1762);delay(100);
while(!kbhit){
goto d5; }

//l

menu1();break;
case 'j': 	d6:
sound(1862);delay(100); sound(1864);delay(100); sound(1866);delay(100);
while(!kbhit){
goto d6; }

//l

menu1();
break;
case 'k': 	d7:
sound(1973);delay(100); sound(1975);delay(100); sound(1977);delay(100);
while(!kbhit){
goto d7; }

//l
menu1();
break;
case 'l': 	d9:
sound(2091);delay(100); sound(2093);delay(100); sound(2095);delay(100);
while(!kbhit){
goto d9; }

//l
menu1();

break;
case ';': 	e1:
sound(2215);delay(100); sound(2217);delay(100); sound(2219);delay(100);
while(!kbhit){
goto e1; }

//l

menu1();
break;
case '|': 	e2:
sound(2347);delay(100); sound(2349);delay(100); sound(2351);delay(100);
while(!kbhit){
goto e2; }

//l

menu1();
break;
case 'z': 	e3:
sound(2487);delay(100); sound(2489);delay(100); sound(2491);delay(100);
while(!kbhit){
goto e3; }

//l

menu1();
break;
case 'x': 	e4:
sound(2635);delay(100); sound(3637);delay(100); sound(2639);delay(100);
while(!kbhit){
goto e4; }

//long

menu1();
break;
case 'c': 	e5:
sound(2791);delay(100); sound(2793);delay(100); sound(2795);delay(100);
while(!kbhit){
goto e5; }

//l

menu1();
break;
case 'v': 	e6:
sound(2957);delay(100); sound(2959);delay(100); sound(2961);delay(100);
while(!kbhit){
goto e6; }

//l

menu1();
break;
case 'b': 	e7:
sound(3133);delay(100); sound(3135);delay(100); sound(3137);delay(100);
while(!kbhit){
goto e7; }

//l

menu1();
break;
case 'n': 	e8:
sound(3320);delay(100); sound(3322);delay(100); sound(3324);delay(100);
while(!kbhit){
goto e8; }

//l

menu1();
break;
case 'm': 	e9:
sound(3520);delay(100); sound(3522);delay(100); sound(3524);delay(100);
while(!kbhit){
goto e9; }

//l

menu1();break;
case ',': 	f1:
sound(3518);delay(100); sound(3520);delay(100); sound(3522);delay(100);
while(!kbhit){
goto f1; }

//l

menu1();
break;
case '.': 	f2:
sound(3727);delay(100); sound(3729);delay(100); sound(3431);delay(100);
while(!kbhit){
goto f2; }

//l

menu1();
break;
case '/': 	f3:
sound(3949);delay(100); sound(3951);delay(100); sound(3953);delay(100);
while(!kbhit){
goto f3; }

//l

menu1();
break; 
case '}':       
 nosound();	//to turn off the sound
 menu();
}

getch();
}

																					

void virus()
{char msg[80];
delay(1000);
cleardevice();
for(int i=0;i<=100;i++)
{textcolor(YELLOW+BLINK);
gotoxy(35,12);
setbkcolor(BLACK);
setcolor(YELLOW+BLINK);
outtextxy(170,100,"Please do not close this window now!\n");
outtextxy(170,150,"Else the window may get corrupt\n");
outtextxy(250,200,"VIRUS LOADING");
gotoxy(39,15);
setcolor(GREEN);
cout<<i<<"%";
delay(65);
cleardevice();
}
delay(100);
cleardevice();
gotoxy(20,12);
setcolor(GREEN+BLINK);
outtextxy(150,140," RANSOMEWARE CREATED BY PROCRAETORIAN");
gotoxy(20,14);
outtextxy(150,210," SAY GOOD BYE TO YOUR PC IN ");
setcolor(GREEN);
for(int j=5;j>=0;j--)
{
gotoxy(48,14);
cout<<j;
outtextxy(320,210," SECONDS");
delay(1000);
}
cleardevice();
settextstyle(SMALL_FONT,HORIZ_DIR,6);
setbkcolor(BLACK);
lowvideo();
outtextxy(10,10," 1.HARD-DISK CORRUPTION:");
delay(4000);
outtextxy(460,10,"completed");
outtextxy(10,60," 2.MOTHER BOARD CORRUPTION:");
delay(4000);
outtextxy(460,60,"completed");
outtextxy(10,100," 3.INSTALLING CYBERBOB.DLL -->WINDOWS/COMMAND:");
delay(4000);
outtextxy(460,100,"completed");
setcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(10,160," \nPROCRAETORIAN.SYS SUCCESSFULLY PLANTED");
delay(3000);

lol();
}
void lol()
{      	cleardevice();
delay(1000);
setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,0,1);
delay(1000);
setbkcolor(RED);
highvideo();
outtextxy(50,150,"THE RANSOME:");
delay(1500);
outtextxy(50,200,"YOUR PC IS NOW UNDER SURVEILANCE BY THE VIRUSHOST");
outtextxy(50,250,"PEA(C)E BE WITH YOU ! ! !");
 getch();
delay(500);
clrscr();
cleardevice();
setbkcolor(BLACK);
cout<<"\n **               *  *   *        **         ";
cout<<"\n **            *          *       **         ";
cout<<"\n **           *             *     **         ";
cout<<"\n **           *             *     **         ";
cout<<"\n **            *          *       **         ";
cout<<"\n **              *      *         **         ";
cout<<"\n *** * * * * *      * *           * * * * * *";
cout<<"\n * * * * * * *                    * * * * * *";
cout<<"	\n\t*************************\n";
cout<<"	Buddy it'ssimply a joke \n";
cout<<"	*************************\n";
delay(2000);
cout<<"**********************************\n";
cout<<"For Real Virus\n ";
cout<<"Contact: Himanshu and d3v3sh";
cout<<"Mo: 010101010101\n ";
cout<<"Email: FUTUREPROGRAMMERS@12th_a.co.in \n";
cout<<"**********************************";
delay(3000);
}
