#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,1,0);
glPointSize(5);
 float dx=0,dy=0,x0,y0,x1,y1,x=0,y=0,xin=0,yin=0,step=0,m=0,temp1=0,temp2=0;
  printf("enter the value of x0,y0,x1,y1: ");
  scanf("%f %f %f %f",&x0,&y0,&x1,&y1);
  if(x0<x1){                         //checking x0 should always be less than x1
    }else{
     temp1=x0;
     x0=x1;
     x1=temp1;
   }
   if(y0<y1){                        //checking x0 should always be less than x1

  }else{
     temp2=y0;
     y0=y1;
     y1=temp2;
   }
    dx=x1-x0;            //dx calculation
    dy=y1-y0;            // dy calculation
    m=dy/dx;  
                     //slope
    if(dx>dy){                   //max steps b/w dx and dy
        step=dx;
    }else{
        step=dy;
    }
    xin=dx/step;                  //steps to increase x
    yin=dy/step;                  //steps to increase y
    glBegin(GL_POINTS);
    glVertex2d(round(x0),round(y0));         // first point
     if(m<1 ){                      //m<1
        while(x<=x1){
            if(x==0){              //when run for first time
                x=x0+xin;
                y=y0+yin;
            }else{                     //after first time
                x=x+xin;
                y=y+yin;
            }
            glVertex2d(round(x),round(y));
        }
    }
    else if(m>1){                    //m>1
        while(y<=y1){
            if(x==0){               //when run for first time
                x=x0+xin;
                y=y0+yin;
            }else{                    //after first time
                x=x+xin;
                y=y+yin;
            }
           glVertex2d(round(x),round(y));
        }
    }
    else if(m==1){                 //m=1
        while(x<=x1|| y<=y1){
            if(x==0){                   //when run for first time
                x=x0+xin;
                y=y0+yin;
            }else{
                x=x+xin;                   //after first time
                y=y+yin;
            }
        glVertex2d(round(x),round(y));
        }
       }
       else if(x0==x1){                 //m=undefined (only y increase x remain same)
        while(y<=y1){
            if(y==0){                     //when run for first time
                x=x0+xin;
                y=y0+yin;
            }else{                        //after first time
                x=x+xin;
                y=y+yin;
            }
        glVertex2d(round(x),round(y));
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
glutCreateWindow("DDA");
glClearColor(1,0,0,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
