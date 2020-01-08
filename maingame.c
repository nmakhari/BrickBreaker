#include <stdio.h>//including <stdio.h>
#include <string.h>//including <string.h>
#include <graphics.h>//including <graphics.h>
#include <stdlib.h>//including <stdlib.h>
#include <conio.h>//including <conio.h>
int main(){
void sgraphics(void);
void hitblockdetection(void);
void startinggraphics(void);
void title_screen(void);
void game_over(void);
void you_won(void);
int iswin(void);
void printlives(int life);
void clearlives(int life);
title_screen(); //display the title screen
initwindow(400,600, "BrickBreaker by Connor, Nick and Diana");
//int maxx=400,maxy=600;
//int bricks[5][10]={0};
int ballv[2]={5,5}; //set the balls x and y velocities
int ballpos[2]={200,512}; //set the balls x and y positions
int ballrad=6; //balls radius
int a=150,b=550,c=250,d=530; //coordinates for the sliding block
int x=1,dif,bouncex=0,bouncey=0;
int f1=45,f2=45,f3=45,f4=45,f5=45,f6=45,f7=45,f8=45,f9=45,f10=45;
int lives=3; //number of lives
setbkcolor(BLACK);
bar(a,b,c,d); //draw the sliding block
circle(ballpos[0],ballpos[1],ballrad); //draw the circle
floodfill(ballpos[0],ballpos[1],WHITE);
startinggraphics(); //draw the bricks
int zz,yy;
int l1[10]={0}, l2[10]={0}, l3[10]={0};
/*int color[3]={2,4,1};
for(zz=0;zz<3;zz++){
for(yy=0;yy<10;yy++){
setfillstyle(SOLID_FILL,color[zz]);
floodfill(yy*40+1,zz*15+16,BLACK);
}
}*/
while(lives!=0 && iswin()==0){//while user is not at 0 lives and hasnt broken all the bricks yet
    clearlives(lives); //clear and print the lives
    printlives(lives);
    bouncex=0;
    bouncey=0;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(ballpos[0],ballpos[1],ballrad); //delete the circle's old position
    floodfill(ballpos[0],ballpos[1],BLACK);
    bar(a,b,c,d); //delete the sliding block
    floodfill(a,b,BLACK);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);

    //sgraphics();

//all of the following if statements are related to hit detection
//the arrays l1, l2 and l3 represent rows 1,2 and 3 respectively
//if the value of the array representing the perticular spot=0 that means it hasnt been hit before and the hit can be checked
//the statement checks if the ball will be predicted to be inside the given brick
//the statement then checks which side the ball came from, if from the sides then x velocity is inverted
//if the ball came from the bottom or top it inverts the y velocity
//next the statement prints a black rectangle to hide the hit block
//finally the statement increases the corresponding array slot to prevent it from being hit again
if(l1[0]==0 && (ballpos[0]+ballv[0]) >=0 && (ballpos[0]+ballv[0]) <= 40 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=0 && ballpos[0<=40]){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[0]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(0,0,41,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}

if(l1[1]==0 && (ballpos[0]+ballv[0]) >=40 && (ballpos[0]+ballv[0]) <= 80 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=40 && ballpos[0]<=80){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[1]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(39,0,81,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l1[2]==0 && (ballpos[0]+ballv[0]) >=80 && (ballpos[0]+ballv[0]) <= 120 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=80 && ballpos[0]<=120){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[2]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(79,0,121,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l1[3]==0 && (ballpos[0]+ballv[0]) >=120 && (ballpos[0]+ballv[0]) <= 160 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=120 && ballpos[0]<=160){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[3]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(119,0,161,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l1[4]==0 && (ballpos[0]+ballv[0]) >=160 && (ballpos[0]+ballv[0]) <= 200 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=160 && ballpos[0]<=200){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[4]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(159,0,201,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l1[5]==0 && (ballpos[0]+ballv[0]) >=200 && (ballpos[0]+ballv[0]) <= 240 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=200 && ballpos[0]<=240){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[5]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(199,0,241,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l1[6]==0 && (ballpos[0]+ballv[0]) >=240 && (ballpos[0]+ballv[0]) <= 280 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=240 && ballpos[0]<=280){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[6]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(239,0,281,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l1[7]==0 && (ballpos[0]+ballv[0]) >=280 && (ballpos[0]+ballv[0]) <= 320 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=280 && ballpos[0]<=320){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[7]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(279,0,321,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l1[8]==0 && (ballpos[0]+ballv[0]) >=320 && (ballpos[0]+ballv[0]) <= 360 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=320 && ballpos[0]<=360){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[8]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(319,0,361,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l1[9]==0 && (ballpos[0]+ballv[0]) >=360 && (ballpos[0]+ballv[0]) <= 400 && (ballpos[1]+ballv[1])>=0 && (ballpos[1]+ballv[1])<=15){
    if(ballpos[0]>=360 && ballpos[0]<=400){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l1[9]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(359,0,400,16);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
//row 2
if(l2[0]==0 && (ballpos[0]+ballv[0]) >=0 && (ballpos[0]+ballv[0]) <= 40 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=0 && ballpos[0<=40]){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[0]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(0,14,41,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}

if(l2[1]==0 && (ballpos[0]+ballv[0]) >=40 && (ballpos[0]+ballv[0]) <= 80 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=40 && ballpos[0]<=80){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[1]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(39,14,81,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l2[2]==0 && (ballpos[0]+ballv[0]) >=80 && (ballpos[0]+ballv[0]) <= 120 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=80 && ballpos[0]<=120){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[2]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(79,14,121,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l2[3]==0 && (ballpos[0]+ballv[0]) >=120 && (ballpos[0]+ballv[0]) <= 160 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=120 && ballpos[0]<=160){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[3]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(119,14,161,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l2[4]==0 && (ballpos[0]+ballv[0]) >=160 && (ballpos[0]+ballv[0]) <= 200 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=160 && ballpos[0]<=200){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[4]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(159,14,201,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l2[5]==0 && (ballpos[0]+ballv[0]) >=200 && (ballpos[0]+ballv[0]) <= 240 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=200 && ballpos[0]<=240){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[5]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(199,14,241,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l2[6]==0 && (ballpos[0]+ballv[0]) >=240 && (ballpos[0]+ballv[0]) <= 280 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=240 && ballpos[0]<=280){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[6]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(239,14,281,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l2[7]==0 && (ballpos[0]+ballv[0]) >=280 && (ballpos[0]+ballv[0]) <= 320 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=280 && ballpos[0]<=320){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[7]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(279,14,321,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l2[8]==0 && (ballpos[0]+ballv[0]) >=320 && (ballpos[0]+ballv[0]) <= 360 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=320 && ballpos[0]<=360){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[8]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(319,14,361,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l2[9]==0 && (ballpos[0]+ballv[0]) >=360 && (ballpos[0]+ballv[0]) <= 400 && (ballpos[1]+ballv[1])>=15 && (ballpos[1]+ballv[1])<=30){
    if(ballpos[0]>=360 && ballpos[0]<=400){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l2[9]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(359,14,400,31);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
//row 3
if(l3[0]==0 && (ballpos[0]+ballv[0]) >=0 && (ballpos[0]+ballv[0]) <= 40 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=0 && ballpos[0<=40]){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[0]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(0,29,41,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}

if(l3[1]==0 && (ballpos[0]+ballv[0]) >=40 && (ballpos[0]+ballv[0]) <= 80 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=40 && ballpos[0]<=80){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[1]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(39,29,81,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l3[2]==0 && (ballpos[0]+ballv[0]) >=80 && (ballpos[0]+ballv[0]) <= 120 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=80 && ballpos[0]<=120){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[2]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(79,29,121,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l3[3]==0 && (ballpos[0]+ballv[0]) >=120 && (ballpos[0]+ballv[0]) <= 160 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=120 && ballpos[0]<=160){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[3]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(119,29,161,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l3[4]==0 && (ballpos[0]+ballv[0]) >=160 && (ballpos[0]+ballv[0]) <= 200 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=160 && ballpos[0]<=200){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[4]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(159,29,201,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);

}
if(l3[5]==0 && (ballpos[0]+ballv[0]) >=200 && (ballpos[0]+ballv[0]) <= 240 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=200 && ballpos[0]<=240){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[5]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(199,29,241,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l3[6]==0 && (ballpos[0]+ballv[0]) >=240 && (ballpos[0]+ballv[0]) <= 280 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=240 && ballpos[0]<=280){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[6]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(239,29,281,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l3[7]==0 && (ballpos[0]+ballv[0]) >=280 && (ballpos[0]+ballv[0]) <= 320 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=280 && ballpos[0]<=320){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[7]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(279,29,321,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l3[8]==0 && (ballpos[0]+ballv[0]) >=320 && (ballpos[0]+ballv[0]) <= 360 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=320 && ballpos[0]<=360){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[8]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(319,29,361,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}
if(l3[9]==0 && (ballpos[0]+ballv[0]) >=360 && (ballpos[0]+ballv[0]) <= 400 && (ballpos[1]+ballv[1])>=30 && (ballpos[1]+ballv[1])<=45){
    if(ballpos[0]>=360 && ballpos[0]<=400){
    ballv[1]*=-1;
    }
    else{
    ballv[0]*=-1;
    }
    l3[9]++;
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(359,29,400,46);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
}






    if((ballpos[0]==400-ballrad&&ballv[0]>0)||(ballpos[0]==ballrad&&ballv[0]<0)){ //if the ball is going to hit the left or right side, reflect it
        ballv[0]*=-1;
    }
    else if(ballpos[1]==ballrad&&ballv[1]<0){//if the ball is going to hti the top, reflect it
        ballv[1]*=-1;
    }
    else if(ballpos[0]+ballv[0]>400-ballrad){ //if the ball is projected to go past the right side, reflect it
        dif=ballpos[0]+ballv[0]-(400-ballrad);
        ballpos[0]=400-ballrad;
        ballv[0]*=-1;
        ballpos[0]+=-dif;
        bouncex=1;
    }
    else if(ballpos[0]+ballv[0]<ballrad){ //if the ball is projected to go past the left sife, reflect it
        dif=ballrad-(ballpos[0]+ballv[0]);
        ballpos[0]=ballrad;
        ballv[0]*=-1;
        ballpos[0]+=dif;
        bouncex=1;
    }
    else if(ballpos[1]+ballv[1]>600-ballrad||ballpos[1]==600-ballrad){ //if the ball is gonna hit or go past the bottom

        lives=lives-1; //decrease the lives
        ballpos[0]=200; //reset the balls position
        ballpos[1]=200;
        getch(); //wait for user to enter something

    }
    else if(ballpos[1]+ballv[1]<2){ //if the ball is projected to go past the top, reflect it
        dif=ballrad-ballpos[1]+ballv[1];
        ballpos[1]=ballrad;
        ballv[1]*=-1;
        ballpos[1]+=dif;
        bouncey=1;
    }
    if (GetAsyncKeyState(37)){

            if(a==0){
            }else{
            a=a-10;
            c=c-10;
            }
        }else if (GetAsyncKeyState(39)){
            if(c==400){
            }else{
            a=a+10;
            c=c+10;
            }
        }
    if(ballpos[1]==529&&ballpos[0]>=a&&ballpos[0]<=c){ //if the ball is gonna hit the sliding block, reflect it
    ballv[1]*=-1;
    }
    else if(ballpos[1]+ballv[1]>529&&ballpos[0]>=a&&ballpos[0]<=c&&ballpos[1]<529){ //if the ball is gonna go past the sliding block, reflect it
        dif=ballpos[1]+ballv[1]-529;
        ballpos[1]=529;
        ballv[1]*=-1;
        ballpos[1]+=-dif;
        bouncey=1;
    }
    if(bouncex==0){//if the ball hasnt bounced off something, add its velocity to its position
    ballpos[0]+=ballv[0];
    }
    if(bouncey==0){
    ballpos[1]+=ballv[1];
    }
    circle(ballpos[0],ballpos[1],ballrad); //draw the new ball
    floodfill(ballpos[0],ballpos[1],WHITE);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    bar(a,b,c,d); //draw the new sliding block
    delay(10);

}

if(lives==0){
game_over();
}
else{
you_won();
}


closegraph();
return 0;
}

void startinggraphics(void){
int zz,yy;
int color[3]={1,2,3};
settextstyle(1, HORIZ_DIR, 2);
setcolor(WHITE);
outtextxy(10,550, "LIVES: ");
setcolor(WHITE);
for(zz=0;zz<3;zz++){ //y coordinates
for(yy=0;yy<10;yy++){//x coordinates
rectangle(yy*40,zz*15,yy*40+40,zz*15+15); //draw the rectangle
}
}
for(zz=0;zz<3;zz++){
for(yy=0;yy<10;yy++){
setfillstyle(SOLID_FILL,color[zz]); //color the rectangle with a color specific to its row
floodfill(yy*40+1,zz*15+1,WHITE);
}
}
}
//the title screen function prints the opening text
//it also flashes by repeatedly changing the color
//using kbhit, pressing any key will close the screen
void title_screen(void){
int a=0;
initwindow(400, 600);
settextstyle(1, HORIZ_DIR, 3);
setcolor(15);
outtextxy(25, 240, "Welcome to BreakOut");//welcoming the use to breakout
outtextxy(23, 260, "Break All The Bricks");
outtextxy(23, 280, "You Have Three Lives");
outtextxy(23, 300, "Use Left and Right");
outtextxy(23, 320, "Arrow Keys to Move");
while (1){
setcolor(a);
outtextxy(80, 360, "Press any key...");
if (a%2==0) a+=15;
else a-=15;

delay(250);
if (kbhit() )
    break;
}

closegraph();
}
//game over function prints the game over text
//it also flashes by repeatedly changing the color
//using kbhit, pressing any key will close the screen
void game_over(void){
int a=3;
initwindow(400,600);
settextstyle(1, HORIZ_DIR, 3);
while(1){
setcolor(4);
outtextxy(70, 300, "GAME OVER");
setcolor(a);
outtextxy(25,320,"Press any key to exit");
if(a%2==0){
    a+=15;
}
else a-=15;
delay(250);

if (kbhit() ){
    break;
}
}
}
//the you won function prints the winner text
//it also flashes by repeatedly changing the color
//using kbhit, pressing any key will close the screen
void you_won(void){
int a=3;
initwindow(400,600);
settextstyle(1, HORIZ_DIR, 3);
while(1){
setcolor(YELLOW);
outtextxy(70, 280, "Winner Winner");
setcolor(YELLOW);
outtextxy(67,300, "Chicken Dinner");
setcolor(a);
outtextxy(25,320,"Press any key to exit");
if(a%2==0){
    a+=15;
}
else a-=15;
delay(250);

if (kbhit() ){
    break;
}
}
}

int iswin(void){

int zz,yy,black=1;

    for(zz=0;zz<3;zz++){
        for(yy=0;yy<10;yy++){

            if((getpixel(yy*40+2,zz*15+2)!=0)){ //check if the color in all the bricks postion are black, if they are black, return that they won the game

                black=0;

            }
        }
    }

return black;

}

void clearlives(int life){

settextstyle(1, HORIZ_DIR, 2);

setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);

bar(340,550,400,600);





}

void printlives(int life){

settextstyle(1, HORIZ_DIR, 2);
setcolor(WHITE);
outtextxy(10,550, "LIVES: ");

setcolor(WHITE);
if(life==1){
outtextxy(350,550, "1");
}
else if(life==2){
outtextxy(350,550, "2");
}
else if(life==3){
outtextxy(350,550, "3");
}



}








