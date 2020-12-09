#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5);
float x0,y0,x1,y1,x=0,y=0,m=0,c=0,i,temp1=0,temp2=0;
printf("enter the value of x0,y0,x1,y1: ");
scanf("%f %f %f %f",&x0,&y0,&x1,&y1);
if(x0<x1){                                 //checking x0 should always be less than x1
    }else{
     temp1=x0;
     x0=x1;
     x1=temp1;
   }
   if(y0<y1){                              //checking y0 should always be less than y1
}else{
     temp2=y0;
     y0=y1;
     y1=temp2;
   }
m=(y1-y0)/(x1-x0);
c=y0-m*x0;
glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2i((int)x0,(int)y0);    // first point
  if(x0==x1){          //m=undefined (so x will remain same and y will increase)
  while(y<=y1){
   if(y==0){        //for first value
   y=y+y0+1;
   x=x0;
  }else{
   y=y+1;
   x=x0;
  }
   glVertex2i((int)x,(int)y);
  }
  }
 else{
  for(i=x0+1; i<=x1; i++){    //for all other case of m:  m<1, m=1, m>1
     x=i;
     y=m*x+c;
     glVertex2i((int)x,(int)y);
  }
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
glutCreateWindow("y=mx+c");
glClearColor(1,0,0,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
