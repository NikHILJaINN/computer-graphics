#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <time.h>
void flood(int x, int y, float* new, float* old){
    float color[3];
    glReadPixels(x,y,1.0,1.0,GL_RGB,GL_FLOAT,color);
    if(color[0]==old[0] && color[1]==old[1] && color[2]==old[2]){
        glColor3f(new[0],new[1],new[2]);
        glBegin(GL_POINTS);
            glVertex2i(x,y);
        glEnd();
        glFlush();
        flood(x+1,y,new,old);
        flood(x-2,y,new,old);
        flood(x,y+2,new,old);
        flood(x,y-2,new,old);
    }
}
void mouse(int btn, int state, int x, int y){
    y = 480-y;
     int z,v,c;
    printf("enter the color to be changed in: ");  //input the fill color
    scanf("%d %d %d",&z,&v,&c);
    if(btn==GLUT_LEFT_BUTTON) {
    
    if(state==GLUT_DOWN)
        {
            float old[] = {0,0,0};
            float new[] = {z,v,c};
            flood(x,y,new,old);
            sleep(10);
            exit(0);
        }
     }
}

void display(){
   int xmin,ymin,xmax,ymax;
   printf("enter the lowest cordinate: -");
   scanf("%d %d",&xmin,&ymin);
   printf("enter the highest cordinate: -");
   scanf("%d %d",&xmax,&ymax);
    glLineWidth(3);
    glPointSize(2);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glBegin(GL_LINE_LOOP);
        glVertex2i(xmin,xmin);
        glVertex2i(xmin,ymax);
        glVertex2i(xmax,ymax);
        glVertex2i(xmax,ymin);
    glEnd();
    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(200,200);
    glutCreateWindow("flood fill");
    gluOrtho2D(0,640,0,480);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
