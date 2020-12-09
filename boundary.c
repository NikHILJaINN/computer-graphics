#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <time.h>
void bound_it(int x, int y, float* fillColor, float* bc){
    float color[3];
    glReadPixels(x,y,1.0,1.0,GL_RGB,GL_FLOAT,color);
    if((color[0]!=bc[0] || color[1]!=bc[1] || color[2]!=bc[2])&&(
     color[0]!=fillColor[0] || color[1]!=fillColor[1] || color[2]!=fillColor[2])){
        glColor3f(fillColor[0],fillColor[1],fillColor[2]);
        glBegin(GL_POINTS);
            glVertex2i(x,y);
        glEnd();
        glFlush();
        bound_it(x+1,y,fillColor,bc);    //4 connected approach
        bound_it(x-2,y,fillColor,bc);
        bound_it(x,y+2,fillColor,bc);
        bound_it(x,y-2,fillColor,bc);
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
           
            float bCol[] = {1,0,0};   //boundary color
            float color[] = {z,v,c};  //fill color
            bound_it(x,y,color,bCol);
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
    glutCreateWindow("boundary fill");
    gluOrtho2D(0,640,0,480);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
