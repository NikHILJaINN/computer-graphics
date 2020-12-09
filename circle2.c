#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5);
int x,y,r,x1,y1;
printf("enter the value of x,y & r :");
scanf("%d %d %d",&x1,&y1,&r);  //center of circle and radius
x=0; 
y=r;
float h=1-r;
glBegin(GL_POINTS);
glVertex2f(x+x1,y+y1);  //for first point
glVertex2f(x+x1,-y+y1);
glVertex2f(-x+x1,y+y1);
glVertex2f(-x+x1,-y+y1);
glVertex2f(y+x1,x+y1);
glVertex2f(-y+x1,x+y1);
glVertex2f(y+x1,-x+y1);
glVertex2f(-y+x1,-x+y1);
while(x<y){    
if(h<0){
h=h+2*x+3;
}
else{
h=h+2*(x-y)+5;
y=y-1;
}
x=x+1;
glVertex2f(x+x1,y+y1);  
glVertex2f(x+x1,-y+y1);
glVertex2f(-x+x1,y+y1);
glVertex2f(-x+x1,-y+y1);
glVertex2f(y+x1,x+y1);
glVertex2f(-y+x1,x+y1);
glVertex2f(y+x1,-x+y1);
glVertex2f(-y+x1,-x+y1);

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
glutCreateWindow("mid point circle algorithm");
glClearColor(1,0,0,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
