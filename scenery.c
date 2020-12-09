#include <GL/glut.h>
float r=0.0f;
float g=0.0f;
float b=0.0f;
float q=0.0f;
float w=0.0f;
float e=0.0f;
float z=0.0f;
float x=0.0f;
float c=0.0f;
float p=0.0f;
float o=0.0f;
float i=0.0f;
float l=0.0f;
float k=0.0f;
float j=0.0f;
void keyboard(unsigned char key,int x,int y){
if(key=='a'){
    r=0.0f;
    g=0.1f;
    b=0.0f;
    q=1.0f;
    w=1.0f;
    e=1.0f;
    z=0.074f;
    x=0.078f;
    c=0.086f;
    p=0.262f;
    o=0.360f;
    i=0.2f;
    l=1.0f;
    k=1.0f;
    j=1.0f;
    glClearColor(0,0,0,1);//night sky
}
glutPostRedisplay();

}
void mouse(int button,int state,int x,int y){
  if(button==GLUT_LEFT_BUTTON ){
        r=0.4f;
        g=0.3f;
        b=0.3f;
        q=1.0f;
        w=1.0f;
        e=0.0f;
        z=0.0f;
        x=0.0f;
        c=1.0f;
        p=0.0f;
        o=1.0f;
        i=0.0f;
        l=0.0f;
        k=0.5f;
        j=1.0f;
    glClearColor(0,0.5,1,1); //sky color
}
glutPostRedisplay();
 if(button==GLUT_RIGHT_BUTTON ){
    exit(0);
}
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(q,w,e);
glBegin(GL_POLYGON);   //sun
glVertex2f(0.75,0.85);
glVertex2f(0.85,0.75);
glVertex2f(0.85,0.65);
glVertex2f(0.75,0.55);
glVertex2f(0.65,0.55);
glVertex2f(0.55,0.65);
glVertex2f(0.55,0.75);
glVertex2f(0.65,0.85);
glEnd();
glColor3f(r,g,b);
glBegin(GL_POLYGON); //mountain
glVertex2f(-1,0.2);
glVertex2f(-0.75,0.4);
glVertex2f(-0.45,0.2);
glVertex2f(-0.05,0.4);
glVertex2f(0.45,0.2);
glVertex2f(0.75,0.4);
glVertex2f(1,0.2);
glEnd();
glColor3f(z,x,c);
glBegin(GL_POLYGON); //river
glVertex2f(0.35,0.2);
glVertex2f(0.55,0.2);
glVertex2f(-0.10,-1);
glVertex2f(-0.3,-1);
glEnd();
glColor3f(0,0,0);
glPointSize(3.0);
glBegin(GL_POINTS); //birds
glVertex2f(0.45,0.63);
glVertex2f(0.47,0.63);
glVertex2f(0.49,0.63);
glVertex2f(0.51,0.63);
glVertex2f(0.53,0.63);
glVertex2f(0.47,0.61);
glVertex2f(0.49,0.61);
glVertex2f(0.51,0.61);
glVertex2f(0.47,0.59);
glVertex2f(0.49,0.59);
glVertex2f(0.47,0.57);
glVertex2f(-0.55,0.75);
glVertex2f(-0.53,0.75);
glVertex2f(-0.51,0.75);
glVertex2f(-0.49,0.75);
glVertex2f(-0.47,0.75);
glVertex2f(-0.45,0.75);
glVertex2f(-0.53,0.75);
glVertex2f(-0.53,0.74);
glVertex2f(-0.51,0.74);
glVertex2f(-0.49,0.74);
glVertex2f(-0.47,0.74);
glVertex2f(-0.45,0.74);
glVertex2f(-0.51,0.73);
glVertex2f(-0.49,0.73);
glVertex2f(-0.47,0.73);
glVertex2f(-0.45,0.73);
glVertex2f(-0.49,0.72);
glVertex2f(-0.47,0.72);
glVertex2f(-0.45,0.72);
glVertex2f(-0.53,0.72);
glVertex2f(-0.47,0.71);
glVertex2f(-0.45,0.71);
glVertex2f(-0.45,0.70);
glEnd();
glColor3f(p,o,i);
glBegin(GL_POLYGON); //left ground
glVertex2f(-1,0.2);
glVertex2f(0.35,0.2);
glVertex2f(-0.3,-1);
glVertex2f(-1,-1);
glEnd();
glColor3f(p,o,i);
glBegin(GL_POLYGON); //right ground
glVertex2f(0.55,0.2);
glVertex2f(1,0.2);
glVertex2f(1,-1);
glVertex2f(-0.10,-1);
glEnd();
glColor3f(l,k,j);
glBegin(GL_POINTS); //stars
glVertex2f(-0.95,0.95);
glVertex2f(-0.85,0.75);
glVertex2f(-0.55,0.75);
glVertex2f(0,0.85);
glVertex2f(0.15,0.65);
glVertex2f(0.97,0.95);
glVertex2f(0.95,0.75);
glEnd();

glutKeyboardFunc(keyboard);
glutMouseFunc(mouse);
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(300,500);
glutCreateWindow("NIGHT TO DAY");
glClearColor(0,0,0,1);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
