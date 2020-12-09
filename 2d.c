#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void trans(){ 
int a[4][2]={
             {100,100},
             {100,300},
             {300,300},
             {300,100}
            };
glColor3f(0,1,1);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glVertex2f(a[3][0],a[3][1]);
glEnd();
}
void aftertrans(){ 
int x,y;
printf("enter the value of x and y for translation:\n");
scanf("%d %d",&x,&y);
int a[4][2]={
             {100,100},
             {100,300},
             {300,300},
             {300,100}
            };
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0]+x,a[0][1]+y);
glVertex2f(a[1][0]+x,a[1][1]+y);
glVertex2f(a[2][0]+x,a[2][1]+y);
glVertex2f(a[3][0]+x,a[3][1]+y);
glEnd();
glFlush();
}
void rot(){
int a[3][2]={
             {100,100},
             {100,300},
             {300,300},
            
            };
glColor3f(0,1,1);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
}
void afterrot(){
int b[3][2]={
             {100,100},
             {100,300},
             {300,300},
   
            };
 int  angle, x_shifted, y_shifted;
    printf("Enter angle of rotation (in degree): ");
    scanf("%d", &angle);
    for(int i=0; i < 3; i++)
    {
        x_shifted = b[i][0];                                    
        y_shifted = b[i][1]; 
        b[i][0] =  (x_shifted*cos(angle * 3.14/180) - y_shifted*sin(angle * 3.14/180));
        b[i][1] =  (x_shifted*sin(angle * 3.14/180) + y_shifted*cos(angle * 3.14/180)); 
    }
 
 glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(b[0][0],b[0][1]);
glVertex2f(b[1][0],b[1][1]);
glVertex2f(b[2][0],b[2][1]);
glEnd();
glFlush();
}
void scale(){
int a[3][2]={
             {100,100},
             {100,150},
             {150,150},
            
            };
glColor3f(1,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
}

void afterscale(){
int x,y;
printf("enter the x and y scale:\n");
scanf("%d %d",&x,&y);
int a[3][2]={
             {10,10},
             {10,30},
             {30,30},
            
            };
            for(int i=0;i<3;i++){
             a[i][0]=a[i][0] * x;
             a[i][1]=a[i][1] * y;
             }
             glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glFlush();
             
}
void shear(){
int a[3][2]={
             {100,100},
             {100,300},
             {300,300},
            
            };
glColor3f(1,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
}
void aftershear(){
int sf;
int a[3][2]={
             {100,100},
             {100,300},
             {300,300},
            
            };
printf("enter shear factor:\n");
scanf("%d",&sf);
int n;
printf("1.shear along x-axis\n");
printf("2.shear along y-axis\n");
scanf("%d",&n);
switch(n){
 case 1:{
 for(int i=0;i<3;i++){
 a[i][0]=a[i][0]+sf*a[i][1];
 a[i][1]=a[i][1];
 }
 glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glFlush();
break;
}
case 2:{
for(int i=0;i<3;i++){
 a[i][0]=a[i][0];
 a[i][1]=a[i][1]+ sf*a[i][0];
 }
 glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glFlush();
break;
}
default:
printf("invalid input\n");
break;
}

}
void ref(){
int a[3][2]={
             {100,100},
             {100,300},
             {300,300},
            
            };
glColor3f(1,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
}

void straightline(){
int a[3][2]={
             {100,100},
             {100,300},
             {300,300},
            
            };
int b[3][2];
for(int i=0;i<3;i++){
b[i][0]=a[i][0];
b[i][1]=a[i][1];
}

int x,y,m,c;
printf("enter the starting x coordinate\n");
scanf("%d",&x);
printf("enter the ending y coordinate\n");
scanf("%d",&y);
printf("enter the slope\n");
scanf("%d",&m);
printf("enter the interception\n");
scanf("%d",&c);

for(int i=0;i<3;i++){
a[i][0]= (((1-m*m)*b[i][0]) + (2 * m * (b[i][1]-c)))/(1+m*m);
a[i][1]= (((m*m-1)*b[i][1]) + (2 * m * b[i][0])+2*c)/(1+m*m);
}	
glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(x, ((m*x) + c));
glVertex2f(y, ((m*y) + c));	
 glEnd();
glFlush();
}
void afterref(){
int a[3][2]={
             {100,100},
             {100,300},
             {300,300},
            
            };
int b[3][2];
for(int i=0;i<3;i++){
b[i][0]=a[i][0];
b[i][1]=a[i][1];
}
int n;
printf("1.x-axis\n");
printf("2.y-axis\n");
printf("3.y=x\n");
printf("4.x=y\n");
printf("5.origin\n");
printf("6.straight line\n");
scanf("%d",&n);
switch(n){
case 1:
   for(int i=0;i<3;i++){
    a[i][1]=-a[i][1];
   }
   glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glFlush();
break;
case 2:
 for(int i=0;i<3;i++){
    a[i][0]=-a[i][0];
   }
   glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glFlush();
break;  
case 3:
for(int i=0;i<3;i++){
    a[i][0]=b[i][1];
    a[i][1]=b[i][0];
   }
   glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glFlush();
break;
case 4:
for(int i=0;i<3;i++){
    a[i][0]=-b[i][1];
    a[i][1]=-b[i][0];
   }
   glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glFlush();
break;
case 5:
for(int i=0;i<3;i++){
    a[i][0]=-b[i][0];
    a[i][1]=-b[i][1];
   }
   glColor3f(0,1,0);
glBegin(GL_LINE_LOOP);
glVertex2f(a[0][0],a[0][1]);
glVertex2f(a[1][0],a[1][1]);
glVertex2f(a[2][0],a[2][1]);
glEnd();
glFlush();
break;
case 6:
straightline();
break;
default :
printf("invalid input\n");
break;
}

}

void display()
{

int n;
printf("1.translation \n");
printf("2.rotation \n");
printf("3.scaling \n");
printf("4.shearing \n");
printf("5.reflection \n");
printf("enter the choice: \n");
scanf("%d",&n);
switch(n){
case 1:
glClear(GL_COLOR_BUFFER_BIT);
trans();
aftertrans();
break;
case 2:
glClear(GL_COLOR_BUFFER_BIT);
rot();
afterrot();
break;
case 3:
glClear(GL_COLOR_BUFFER_BIT);
scale();
afterscale();
break;
case 4:
glClear(GL_COLOR_BUFFER_BIT);
shear();
aftershear();
break;
case 5:
glClear(GL_COLOR_BUFFER_BIT);
ref();
afterref();
break;
default :
printf("invalid input\n");
break;
}

glFlush();
}

int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(300,500);
glutCreateWindow("2d transformation");
glClearColor(0,0,0,1);
gluOrtho2D(-1000,1000,-1000,1000);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

