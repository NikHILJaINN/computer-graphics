#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
int comp(int x,int y,int xmin,int ymin,int xmax,int ymax){ //tbrl code
    int a1=0;
     if ((y-ymax)>0) {
            a1=8; 
    }
    if ((ymin-y)>0) { 
        a1=4;  
    }
    if ((x-xmax)>0){
         a1=2; 
    }
    if ((xmin-x)>0)  {
            a1=1;
             }
      return a1;
}

void display()
{
   int xmin,ymin,ymax,xmax;
  int x1,y1,x2,y2;
  printf("window size\n");
  scanf("%d %d %d %d",&xmin,&ymin,&xmax,&ymax);          //window size
  printf("line\n");
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);                   //line point
      int code1=comp(x1,y1,xmin,ymin,xmax,ymax);        //tbrl code for first point
      int code2=comp(x2,y2,xmin,ymin,xmax,ymax);         //tbrl code for second point
        /*glBegin(GL_LINE_LOOP);
         glColor3f(1,1,0);
         glVertex2f(xmin,ymin);
          glVertex2f(xmax,ymin);
          glVertex2f(xmax,ymax);
           glVertex2f(xmin,ymax);
          glEnd();
           glBegin(GL_LINES);
         glColor3f(0,1,0);
          glVertex2f(x1,y1);
           glVertex2f(x2,y2);
          glEnd();*/
  
    while (1) {                                         //infinite loop 
        if ((code1 == 0) && (code2 == 0)) { //both point accepted display window with square
            break; 
        } 
        else if (code1 & code2) {    //both the point outside display only the window
            glBegin(GL_LINE_LOOP);
         glColor3f(1,1,0);
         glVertex2f(xmin,ymin);
          glVertex2f(xmax,ymin);
          glVertex2f(xmax,ymax);
           glVertex2f(xmin,ymax);
          glEnd();
            break; 
        } 
        else {                             //finding the intersection point
            int code_out; 
            double x, y; 
            if (code1 != 0)            //atleast one point outside
                code_out=code1; 
            else
                code_out=code2; 
                                                             
            if (code_out&8) {                              //top
                x=x1+(x2-x1)*(ymax-y1)/(y2-y1); 
                y=ymax; 
            } 
            else if(code_out&4) {                              //bottom
                x=x1+(x2-x1)*(ymin-y1)/(y2-y1); 
                y=ymin; 
            } 
            else if (code_out&2) {                              //right
                y=y1+(y2-y1)*(xmax-x1)/(x2-x1); 
                x=xmax; 
            } 
            else if (code_out&1) {                        //left
                y=y1+(y2 - y1)*(xmin-x1)/(x2-x1); 
                x = xmin; 
            } 
            if (code_out==code1) {                                                 //replace the point outside with intersection point
                x1=x; 
                y1=y; 
                code1=comp(x1,y1,xmin,ymin,xmax,ymax);
            } 
            else{ 
                x2=x; 
                y2=y; 
                code2 = comp(x2,y2,xmin,ymin,xmax,ymax);
            } 
        } 
    } 
    if (x1>=xmin && y1>=ymin && x1<=xmax && y1<=ymax && x2>=xmin && y2>=ymin && x2<=xmax && y2<=ymax ) {                                //clipped portion
         glBegin(GL_LINE_LOOP);
         glColor3f(1,1,0);
         glVertex2f(xmin,ymin);
          glVertex2f(xmax,ymin);
          glVertex2f(xmax,ymax);
           glVertex2f(xmin,ymax);
          glEnd();
           glBegin(GL_LINES);
         glColor3f(0,1,0);
          glVertex2f(x1,y1);
           glVertex2f(x2,y2);
          glEnd(); 
    } 
    

glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(300,500);
glutCreateWindow("line clipping");
glClearColor(0,0,0,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);

glutMainLoop();
return 0;
}

