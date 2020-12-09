#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5);
float x,y,a, b,h,k,p1,p2;  
printf("enter the center of ellipse:"); //center h,k
scanf("%f %f",&h,&k);
printf("enter the major and minor axis:"); //major & minor axis
scanf("%f %f",&a,&b);
glColor3f(1,1,0);
glBegin(GL_POINTS);
 p1=b*b+(a*a)*(0.25-b);
  x=0;
  y=b;
 while(x*b*b<=y*a*a){   //first region
  if(p1<0){
 p1=p1+(b*b)*(2*x+3);
}
  else{
  p1=p1+(b*b)*(2*x+3)-(a*a)*(2*y-2);
  y=y-1;
}
  x=x+1;
 glVertex2f(x+h,y+k);  
 glVertex2f(x+h,-y+k);
 glVertex2f(-x+h,y+k);
 glVertex2f(-x+h,-y+k);
 }
p2=(b*b)*(x+0.5)*(x+0.5)+(a*a)*(y-1)*(y-1)-a*a*b*b;
 while(y!=0){              //second region
 if (p2<0){
 p2=p2+2*(b*b)*(x+1)-(a*a)*(2*y-3);
  x=x+1;
 }
  else{
  p2=p2+(a*a)*(3-2*y);
}
  y=y-1;
 glVertex2f(x+h,y+k);  
 glVertex2f(x+h,-y+k);
 glVertex2f(-x+h,y+k);
 glVertex2f(-x+h,-y+k);
}
 glEnd();
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(300,500);
glutCreateWindow("mid point ellipse algorithm");
glClearColor(1,0,0,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
