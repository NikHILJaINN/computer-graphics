#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void trans(){ 
glColor3f(0,1,1);
glBegin(GL_LINE_LOOP);
glVertex3f(100,100,100);
glVertex3f(100,300,100);
glVertex3f(300,300,100);
glVertex3f(300,100,100);
glEnd();
glColor3f(0,1,1);
glBegin(GL_LINE_LOOP);
glVertex3f(100,300,100);
glVertex3f(200,400,100);
glVertex3f(400,400,100);
glVertex3f(300,300,100);
glEnd();
glColor3f(0,1,1);
glBegin(GL_LINE_LOOP);
glVertex3f(400,400,100);
glVertex3f(400,200,100);
glVertex3f(200,200,100);
glVertex3f(200,400,100);
glEnd();
glColor3f(0,1,1);
glBegin(GL_LINE_LOOP);
glVertex3f(200,200,100);
glVertex3f(100,100,100);
glVertex3f(100,300,100);
glVertex3f(200,400,100);
glEnd();
glColor3f(0,1,1);
glBegin(GL_LINE_LOOP);
glVertex3f(400,200,100);
glVertex3f(300,100,100);
glVertex3f(300,300,100);
glVertex3f(400,400,100);
glEnd();
}
void aftertrans(){
float x,y,z;
printf("enter the value of x,y & z\n");
scanf("%f %f %f",&x,&y,&z);
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(100+x,100+y,100+z);
glVertex3f(100+x,300+y,100+z);
glVertex3f(300+x,300+y,100+z);
glVertex3f(300+x,100+y,100+z);
glEnd();
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(100+x,300+y,100+z);
glVertex3f(200+x,400+y,100+z);
glVertex3f(400+x,400+y,100+z);
glVertex3f(300+x,300+y,100+z);
glEnd();
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(400+x,400+y,100+z);
glVertex3f(400+x,200+y,100+z);
glVertex3f(200+x,200+y,100+z);
glVertex3f(200+x,400+y,100+z);
glEnd();
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(200+x,200+y,100+z);
glVertex3f(100+x,100+y,100+z);
glVertex3f(100+x,300+y,100+z);
glVertex3f(200+x,400+y,100+z);
glEnd();
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(400+x,200+y,100+z);
glVertex3f(300+x,100+y,100+z);
glVertex3f(300+x,300+y,100+z);
glVertex3f(400+x,400+y,100+z);
glEnd();
}void afterscale(){
float x,y,z;
printf("enter the value of x,y & z\n");
scanf("%f %f %f",&x,&y,&z);
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(100*x,100*y,100*z);
glVertex3f(100*x,300*y,100*z);
glVertex3f(300*x,300*y,100*z);
glVertex3f(300*x,100*y,100*z);
glEnd();
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(100*x,300*y,100*z);
glVertex3f(200*x,400*y,100*z);
glVertex3f(400*x,400*y,100*z);
glVertex3f(300*x,300*y,100*z);
glEnd();
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(400*x,400*y,100*z);
glVertex3f(400*x,200*y,100*z);
glVertex3f(200*x,200*y,100*z);
glVertex3f(200*x,400*y,100*z);
glEnd();
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(200*x,200*y,100*z);
glVertex3f(100*x,100*y,100*z);
glVertex3f(100*x,300*y,100*z);
glVertex3f(200*x,400*y,100*z);
glEnd();
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(400*x,200*y,100*z);
glVertex3f(300*x,100*y,100*z);
glVertex3f(300*x,300*y,100*z);
glVertex3f(400*x,400*y,100*z);
glEnd();
}
void aftershear(){
int sf;
int a[4][3]={
             {100,100,100},
              {100,300,100},
              {300,300,100},
              {300,100,100}  
              };
int b[4][3]={
             {100,300,100},
              {200,400,100},
              {400,400,100},
              {300,300,100}  
              }; 
int c[4][3]={
             {400,400,100},
              {400,200,100},
              {200,200,100},
              {200,400,100}  
              }; 
int d[4][3]={
             {200,200,100},
              {100,100,100},
              {100,300,100},
              {200,400,100}  
              }; 
int e[4][3]={
             {400,200,100},
              {300,100,100},
              {300,300,100},  
              {400,400,100},
              };                           
printf("enter shear factor:\n");
scanf("%d",&sf);
int n;
printf("1.shear along x-axis\n");
printf("2.shear along y-axis\n");
printf("3.shear along z-axis\n");
scanf("%d",&n);
if(n==1){
for(int i=0;i<4;i++){
a[i][0]=a[i][0];
a[i][1]=a[i][1]*sf+a[i][0];
a[i][2]=a[i][2]*sf+a[i][0];
}
for(int i=0;i<4;i++){
b[i][0]=b[i][0];
b[i][1]=b[i][1]*sf+b[i][0];
b[i][2]=b[i][2]*sf+b[i][0];
}
for(int i=0;i<4;i++){
c[i][0]=c[i][0];
c[i][1]=c[i][1]*sf+c[i][0];
c[i][2]=c[i][2]*sf+c[i][0];
}
for(int i=0;i<4;i++){
d[i][0]=d[i][0];
d[i][1]=d[i][1]*sf+d[i][0];
d[i][2]=d[i][2]*sf+d[i][0];
}
for(int i=0;i<4;i++){
e[i][0]=e[i][0];
e[i][1]=e[i][1]*sf+e[i][0];
e[i][2]=e[i][2]*sf+e[i][0];
}
 glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
if(n==2){
for(int i=0;i<4;i++){
a[i][0]=a[i][0]*sf+a[i][1];
a[i][1]=a[i][1];
a[i][2]=a[i][2]*sf+a[i][1];
}
for(int i=0;i<4;i++){
b[i][0]=b[i][0]*sf+b[i][1];
b[i][1]=b[i][1];
b[i][2]=b[i][2]*sf+b[i][1];
}
for(int i=0;i<4;i++){
c[i][0]=c[i][0]*sf+c[i][1];
c[i][1]=c[i][1];
c[i][2]=c[i][2]*sf+c[i][1];
}
for(int i=0;i<4;i++){
d[i][0]=d[i][0]*sf+d[i][1];
d[i][1]=d[i][1];
d[i][2]=d[i][2]*sf+d[i][1];
}
for(int i=0;i<4;i++){
e[i][0]=e[i][0]*sf+e[i][1];
e[i][1]=e[i][1];
e[i][2]=e[i][2]*sf+e[i][1];
}
 glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
if(n==3){
for(int i=0;i<4;i++){
a[i][0]=a[i][0]*sf+a[i][2];
a[i][1]=a[i][1]*sf+a[i][2];
a[i][2]=a[i][2];
}
for(int i=0;i<4;i++){
b[i][0]=b[i][0]*sf+b[i][2];
b[i][1]=b[i][1]*sf+b[i][2];
b[i][2]=b[i][2];
}
for(int i=0;i<4;i++){
c[i][0]=c[i][0]*sf+c[i][2];
c[i][1]=c[i][1]*sf+c[i][2];
c[i][2]=c[i][2];
}
for(int i=0;i<4;i++){
d[i][0]=d[i][0]*sf+d[i][2];
d[i][1]=d[i][1]*sf+d[i][2];
d[i][2]=d[i][2];
}
for(int i=0;i<4;i++){
e[i][0]=e[i][0]*sf+e[i][2];
e[i][1]=e[i][1]*sf+e[i][2];
e[i][2]=e[i][2];
}
 glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
}
void afterrot(){
int angle,n;
int a[4][3]={
             {100,100,100},
              {100,300,100},
              {300,300,100},
              {300,100,100}  
              };
int b[4][3]={
             {100,300,100},
              {200,400,100},
              {400,400,100},
              {300,300,100}  
              }; 
int c[4][3]={
             {400,400,100},
              {400,200,100},
              {200,200,100},
              {200,400,100}  
              }; 
int d[4][3]={
             {200,200,100},
              {100,100,100},
              {100,300,100},
              {200,400,100}  
              }; 
int e[4][3]={
             {400,200,100},
              {300,100,100},
              {300,300,100},  
              {400,400,100},
              };          
printf("1.rotate along xaxis\n");
printf("2.rotate along yaxis\n");
printf("3.rotate along zaxis\n");
printf("enter the angle to rotate\n");
scanf("%d",&angle);
printf("enter the choice\n");
scanf("%d",&n);
if(n==1){
for(int i=0;i<4;i++){
a[i][0]=a[i][0];
a[i][1]=a[i][1]*cos(angle)-a[i][2]*sin(angle);
a[i][2]=a[i][1]*sin(angle)+a[i][2]*cos(angle);
}
for(int i=0;i<4;i++){
b[i][0]=b[i][0];
b[i][1]=b[i][1]*cos(angle)-b[i][2]*sin(angle);
b[i][2]=b[i][1]*sin(angle)+b[i][2]*cos(angle);
}
for(int i=0;i<4;i++){
c[i][0]=c[i][0];
c[i][1]=c[i][1]*cos(angle)-c[i][2]*sin(angle);
c[i][2]=c[i][1]*sin(angle)+c[i][2]*cos(angle);
}
for(int i=0;i<4;i++){
d[i][0]=d[i][0];
d[i][1]=d[i][1]*cos(angle)-d[i][2]*sin(angle);
d[i][2]=d[i][1]*sin(angle)+d[i][2]*cos(angle);
}
for(int i=0;i<4;i++){
e[i][0]=e[i][0];
e[i][1]=e[i][1]*cos(angle)-e[i][2]*sin(angle);
e[i][2]=e[i][1]*sin(angle)+e[i][2]*cos(angle);
}
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
if(n==2){
for(int i=0;i<4;i++){
a[i][0]=a[i][2]*sin(angle)+a[i][0]*cos(angle);
a[i][1]=a[i][1];
a[i][2]=a[i][1]*cos(angle)-a[i][0]*sin(angle);
}
for(int i=0;i<4;i++){
b[i][0]=b[i][2]*sin(angle)+b[i][0]*cos(angle);
b[i][1]=b[i][1];
b[i][2]=b[i][1]*cos(angle)-b[i][0]*sin(angle);
}
for(int i=0;i<4;i++){
c[i][0]=c[i][2]*sin(angle)+c[i][0]*cos(angle);
c[i][1]=c[i][1];
c[i][2]=c[i][1]*cos(angle)-c[i][0]*sin(angle);
}
for(int i=0;i<4;i++){
d[i][0]=d[i][2]*sin(angle)+d[i][0]*cos(angle);
d[i][1]=d[i][1];
d[i][2]=d[i][1]*cos(angle)-d[i][0]*sin(angle);
}
for(int i=0;i<4;i++){
e[i][0]=e[i][2]*sin(angle)+e[i][0]*cos(angle);
e[i][1]=e[i][1];
e[i][2]=e[i][1]*cos(angle)-e[i][0]*sin(angle);
}
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
if(n==3){
for(int i=0;i<4;i++){
a[i][0]=a[i][0]*cos(angle)-a[i][1]*sin(angle);
a[i][1]=a[i][0]*sin(angle)+a[i][1]*cos(angle);
a[i][2]=a[i][2];
}
for(int i=0;i<4;i++){
b[i][0]=b[i][0]*cos(angle)-b[i][1]*sin(angle);
b[i][1]=b[i][0]*sin(angle)+b[i][1]*cos(angle);
b[i][2]=b[i][2];
}
for(int i=0;i<4;i++){
c[i][0]=c[i][0]*cos(angle)-c[i][1]*sin(angle);
c[i][1]=c[i][0]*sin(angle)+c[i][1]*cos(angle);
c[i][2]=c[i][2];
}
for(int i=0;i<4;i++){
d[i][0]=d[i][0]*cos(angle)-d[i][1]*sin(angle);
d[i][1]=d[i][0]*sin(angle)+d[i][1]*cos(angle);
d[i][2]=d[i][2];
}
for(int i=0;i<4;i++){
e[i][0]=e[i][0]*cos(angle)-e[i][1]*sin(angle);
e[i][1]=e[i][0]*sin(angle)+e[i][1]*cos(angle);
e[i][2]=e[i][2];
}
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
}
void afterref(){
int n;
printf("1.reflection along XY plane\n");
printf("2.reflection along YZ plane\n");
printf("3.reflection along ZX plane\n");
printf("enter choice:\n");
scanf("%d",&n);
int a[4][3]={
             {100,100,100},
              {100,300,100},
              {300,300,100},
              {300,100,100}  
              };
int b[4][3]={
             {100,300,100},
              {200,400,100},
              {400,400,100},
              {300,300,100}  
              }; 
int c[4][3]={
             {400,400,100},
              {400,200,100},
              {200,200,100},
              {200,400,100}  
              }; 
int d[4][3]={
             {200,200,100},
              {100,100,100},
              {100,300,100},
              {200,400,100}  
              }; 
int e[4][3]={
             {400,200,100},
              {300,100,100},
              {300,300,100},  
              {400,400,100},
              };
if(n==1){
for(int i=0;i<4;i++){
a[i][0]=-a[i][0];
a[i][1]=a[i][1];
a[i][2]=-a[i][2];
}
for(int i=0;i<4;i++){
b[i][0]=-b[i][0];
b[i][1]=b[i][1];
b[i][2]=-b[i][2];
}
for(int i=0;i<4;i++){
c[i][0]=-c[i][0];
c[i][1]=c[i][1];
c[i][2]=-c[i][2];
}
for(int i=0;i<4;i++){
d[i][0]=-d[i][0];
d[i][1]=d[i][1];
d[i][2]=-d[i][2];
}
for(int i=0;i<4;i++){
e[i][0]=-e[i][0];
e[i][1]=e[i][1];
e[i][2]=-e[i][2];
}
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
if(n==2){
for(int i=0;i<4;i++){
a[i][0]=-a[i][0];
a[i][1]=a[i][1];
a[i][2]=a[i][2];
}
for(int i=0;i<4;i++){
b[i][0]=-b[i][0];
b[i][1]=b[i][1];
b[i][2]=b[i][2];
}
for(int i=0;i<4;i++){
c[i][0]=-c[i][0];
c[i][1]=c[i][1];
c[i][2]=c[i][2];
}
for(int i=0;i<4;i++){
d[i][0]=-d[i][0];
d[i][1]=d[i][1];
d[i][2]=d[i][2];
}
for(int i=0;i<4;i++){
e[i][0]=-e[i][0];
e[i][1]=e[i][1];
e[i][2]=e[i][2];
}
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
if(n==3){
for(int i=0;i<4;i++){
a[i][0]=a[i][0];
a[i][1]=-a[i][1];
a[i][2]=a[i][2];
}
for(int i=0;i<4;i++){
b[i][0]=b[i][0];
b[i][1]=-b[i][1];
b[i][2]=b[i][2];
}
for(int i=0;i<4;i++){
c[i][0]=c[i][0];
c[i][1]=-c[i][1];
c[i][2]=c[i][2];
}
for(int i=0;i<4;i++){
d[i][0]=d[i][0];
d[i][1]=-d[i][1];
d[i][2]=d[i][2];
}
for(int i=0;i<4;i++){
e[i][0]=e[i][0];
e[i][1]=-e[i][1];
e[i][2]=e[i][2];
}
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex3f(a[0][0],a[0][1],a[0][2]);
glVertex3f(a[1][0],a[1][1],a[1][2]);
glVertex3f(a[2][0],a[2][1],a[2][2]);
glVertex3f(a[3][0],a[3][1],a[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(b[0][0],b[0][1],b[0][2]);
glVertex3f(b[1][0],b[1][1],b[1][2]);
glVertex3f(b[2][0],b[2][1],b[2][2]);
glVertex3f(b[3][0],b[3][1],b[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(c[0][0],c[0][1],c[0][2]);
glVertex3f(c[1][0],c[1][1],c[1][2]);
glVertex3f(c[2][0],c[2][1],c[2][2]);
glVertex3f(c[3][0],c[3][1],c[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(d[0][0],d[0][1],d[0][2]);
glVertex3f(d[1][0],d[1][1],d[1][2]);
glVertex3f(d[2][0],d[2][1],d[2][2]);
glVertex3f(d[3][0],d[3][1],d[3][2]);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3f(e[0][0],e[0][1],e[0][2]);
glVertex3f(e[1][0],e[1][1],e[1][2]);
glVertex3f(e[2][0],e[2][1],e[2][2]);
glVertex3f(e[3][0],e[3][1],e[3][2]);
glEnd();
glFlush();
}
}
void display()
{
int n;
printf("1.translation\n");
printf("2.scaling\n");
printf("3.shearing\n");
printf("4.rotation\n");
printf("5.reflection\n");
printf("enter the choice\n");
scanf("%d",&n);
switch(n){
case 1:
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
trans();
aftertrans();
break;
case 2:
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
trans();
afterscale();
break;
case 3:
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
trans();
aftershear();
break;
case 4:
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
trans();
afterrot();
break;
case 5:
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
trans();
afterref();
break;
}
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(900,900);
glutCreateWindow("3d transformation");
glClearColor(0,0,0,1);
glOrtho(-1000,1000,-1000,1000,-1000,1000);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
