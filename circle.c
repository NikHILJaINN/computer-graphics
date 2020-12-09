#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5);
int xc,yc,r;
printf("enter the value of xc,yc,r:");
scanf("%d %d %d",&xc,&yc,&r);   //taking center point and radius
glColor3f(0,1,0);
float angle;  
glBegin(GL_POINTS);
 
    glBegin(GL_POINTS); 
    for(int i=0;i<360;i++)                 //polar approach
    { 
       angle = i; 
        glVertex2f(xc+(cos(angle)*r),yc+(sin(angle)*r)); 
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
glutCreateWindow("polar equation for circle");
glClearColor(1,0,0,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
