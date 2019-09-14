void main()
{
int gd=DETECT,gm;
int p,q;
int i=0;
initgraph(&gd,&gm,"C://TURBOC3/BGI");
setbkcolor(BLUE);
setcolor(CYAN);
line(0,80,680,80);
//mountains
line(0,80,80,10);
line(80,10,160,80);
line(160,80,240,10);
line(240,10,320,80);
line(320,80,400,10);
line(400,10,480,80);
line(480,80,560,10);
line(560,10,640,80);
/*draw the Sun*/
arc(321,45,0,180,40);
setfillstyle(SOLID_FILL,LIGHTCYAN);
floodfill(20,60,DARKGRAY);
/*Fill color in mountains*/
setfillstyle(SOLID_FILL,BROWN);
floodfill(70,50,DARKGRAY);
floodfill(230,50,DARKGRAY);

floodfill(260,50,DARKGRAY);
floodfill(380,50,DARKGRAY);
floodfill(555,50,DARKGRAY);
/*Fill color in Sun*/
setfillstyle(SOLID_FILL,YELLOW);
floodfill(340,50,DARKGRAY);
/*create hut and vase*/
rectangle(50,180,150,300);
rectangle(150,180,320,300);
rectangle(80,250,120,300);
/*Fill color in door*/
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,BROWN);
floodfill(112,260,DARKGRAY);
/*fill color in hut*/
setfillstyle(INTERLEAVE_FILL,RED);
floodfill(300,200,DARKGRAY);
setfillstyle(INTERLEAVE_FILL,RED);
floodfill(60,290,DARKGRAY);
line(100,100,50,180);
line(100,100,150,180);
line(100,100,300,100);
line(300,100,320,180);
floodfill(301,110,DARKGRAY);
floodfill(101,170,DARKGRAY);
line(450,300,480,300);
line(450,300,420,240);

line(480,300,510,240);
line(420,240,510,240);
/*draw grass*/
setcolor(GREEN);
line(0,400,640,400);
line(0,402,640,402);
line(0,404,640,404);
line(0,406,640,406);
line(0,408,640,408);
line(0,410,640,410);
setfillstyle(SOLID_FILL,GREEN);
floodfill(400,420,GREEN);
/*draw stairs*/
setcolor(BROWN);
line(80,300,40,400);
line(120,300,80,400);
line(75,310,115,310);
line(75,312,115,312);
line(70,322,110,322);
line(70,324,110,324);
line(65,333,105,333);
line(65,335,105,335);
line(61,344,101,344);
line(61,346,101,346);
line(57,355,97,355);
line(57,357,97,357);
line(52,366,92,366);

line(52,368,92,368);
line(48,377,88,377);
line(48,379,88,379);
line(45,388,85,388);
line(45,390,85,390);
p = 200;
q = getmaxy() - 100;
getch();
for(i=0;i<300;i++)
{
delay(10);

/* drawing the balloon first */
arc(p, q, 0, 180, 40);

/* arcs in the baloon */
arc(p - 10, q, 0, 180, 10);
arc(p - 30, q, 0, 180, 10);
arc(p + 10, q, 0, 180, 10);
arc(p + 30, q, 0, 180, 10);
floodfill(p, q - 35, LIGHTRED);

/* threads connecting basket and balloon */
sector(p, q + 40, 0, 360, 30, 5);
line(p - 40, q, p - 30, q + 40);
line(p + 40, q, p + 30, q + 40);
line(p, q, p, q + 40);

line(p - 20, q, p - 10, q + 40);
line(p + 20, q, p + 10, q + 40);

/* basket in parachute */
line(p - 30, q + 40, p - 18, q + 65);
line(p - 18, q + 65, p + 18, q + 65);
line(p + 30, q + 40, p + 18, q + 65);
ellipse(p, q + 40, 180, 360, 30, 5);
/* manipulate subsequent position of parachute */
line(0, getmaxy(), p - 30, q + 40);
if (i % 3 == 0) {
p = p - 1;
q = q + 1;
} else {
p = p + 1;
q = q - 1;
}