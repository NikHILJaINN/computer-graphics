#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
int arr[20][2],j=0,count=0;
int poly[20][2];
int left(int a[][2],int size,int xmin){ 
     int p1x,p1y,p2x,p2y;
     int temp[20][2];
     float m;
     for(int i=0;i<size;i++){
         p1x=a[i][0];
         p1y=a[i][1];
         p2x=a[(i+1)%size][0];
         p2y=a[(i+1)%size][1];
         if(p2x-p1x!=0){
             m=(p2y-p1y)*1.0/(p2x-p1x);
         }
         if(p1x<xmin && p2x<xmin){
             //both point outside
             continue;
         }
         if(p1x>xmin && p2x>xmin){ //both inside
           temp[j][0]=p2x;
           temp[j][1]=p2y;
           count++;
           j++;
           continue;
         }
         if(p1x>xmin && p2x<xmin){  // first inside 
            temp[j][0]=xmin;
            temp[j][1]=p1y+m*(xmin-p1x);
            j++;
            count++;
            continue;
         }
    
         if(p1x<xmin && p2x>xmin){ //second inside
            temp[j][0]=xmin;
            temp[j][1]=p1y+m*(xmin-p1x);
            temp[j+1][0]=p2x;
            temp[j+1][1]=p2y;
            j+=2;
            count+=2;
            continue;
         }
         
     }
     for(int i=0;i<count;i++){
         arr[i][0]=temp[i][0];
         arr[i][1]=temp[i][1];
     }
     
     
    return 0;
}
int bottom(int a[][2],int size,int ymin){ 
     int p1x,p1y,p2x,p2y;
     int temp[20][2];
     float m;
     for(int i=0;i<size;i++){
         p1x=a[i][0];
         p1y=a[i][1];
         p2x=a[(i+1)%size][0];
         p2y=a[(i+1)%size][1];
         if(p2x-p1x!=0){
             m=(p2y-p1y)*1.0/(p2x-p1x);
         }
         if(p1y<ymin && p2y<ymin){
             //both point outside
             continue;
         }
         if(p1y>ymin && p2y>ymin){
           temp[j][0]=p2x;
           temp[j][1]=p2y;
           count++;
           j++;
           continue;
         }
         if(p1y>ymin && p2y<ymin){
            temp[j][0]=p1x+(ymin-p1y)/m;
            temp[j][1]=ymin;
            j++;
            count++;
            continue;
         }
         
         if(p1y<ymin && p2y>ymin){
            temp[j][0]=p1x+(ymin-p1y)/m;
            temp[j][1]=ymin;
            temp[j+1][0]=p2x;
            temp[j+1][1]=p2y;
            j+=2;
            count+=2;
            continue;
         }
         
     }
     for(int i=0;i<count;i++){
         arr[i][0]=temp[i][0];
         arr[i][1]=temp[i][1];
     }
     
    return 0;
}
int right(int a[][2],int size,int xmax){ 
     int p1x,p1y,p2x,p2y;
     int temp[20][2];
     float m;
     for(int i=0;i<size;i++){
         p1x=a[i][0];
         p1y=a[i][1];
         p2x=a[(i+1)%size][0];
         p2y=a[(i+1)%size][1];
         if(p2x-p1x!=0){
             m=(p2y-p1y)*1.0/(p2x-p1x);
         }
         if(p1x>xmax && p2x>xmax){
             //both point outside
             continue;
         }
         if(p1x<=xmax && p2x<=xmax){ //both inside
           temp[j][0]=p2x;
           temp[j][1]=p2y;
           count++;
           j++;
           continue;
         }
         if(p1x>xmax && p2x<xmax){  // first inside 
            temp[j][0]=xmax;
            temp[j][1]=p1y+m*(xmax-p1x);
            temp[j+1][0]=p2x;
            temp[j+1][1]=p2y;
            j+=2;
            count+=2;
            continue;
         }
    
         if(p1x<xmax && p2x>xmax){ //second inside
            temp[j][0]=xmax;
            temp[j][1]=p1y+m*(xmax-p1x);
            j++;
            count++;
            continue;
         }
         
     }
     for(int i=0;i<count;i++){
         arr[i][0]=temp[i][0];
         arr[i][1]=temp[i][1];
     }
     
     
    return 0;
}
int top(int a[][2],int size,int ymax){ 
     int p1x,p1y,p2x,p2y;
     int temp[20][2];
     float m;
     for(int i=0;i<size;i++){
         p1x=a[i][0];
         p1y=a[i][1];
         p2x=a[(i+1)%size][0];
         p2y=a[(i+1)%size][1];
         if(p2x-p1x!=0){
             m=(p2y-p1y)*1.0/(p2x-p1x);
         }
         if(p1y>ymax && p2y>ymax){
             //both point outside
             continue;
         }
         if(p1y<ymax && p2y<ymax){
           temp[j][0]=p2x;
           temp[j][1]=p2y;
           count++;
           j++;
           continue;
         }
         if(p1y<=ymax && p2y>ymax){
            temp[j][0]=p2x+(ymax-p1y)/m;
            temp[j][1]=ymax;
            j++;
            count++;
            continue;
         }
         
         if(p1y>ymax && p2y<ymax){
            temp[j][0]=p1x+m*(ymax-p1y);
            temp[j][1]=ymax;
            temp[j+1][0]=p2x;
            temp[j+1][1]=p2y;
            j+=2;
            count+=2;
            continue;
         }
         
     }
     for(int i=0;i<count;i++){
         arr[i][0]=temp[i][0];
         arr[i][1]=temp[i][1];
     }
     
    return 0;
}

void display()
{
    int size=3;
    int poly[20][2];
    int ws=2;  
    int wind[2][2];
    printf("enter the coordinates of polygon:\n");
    for(int i=0;i<3;i++){
        scanf("%d %d",&poly[i][0],&poly[i][1]);
    }
    printf("enter the window coordinates:\n");
    for(int i=0;i<2;i++){
        scanf("%d %d",&wind[i][0],&wind[i][1]);
    }
  glBegin(GL_LINE_LOOP);
         glColor3f(1,1,0);
         glVertex2f(wind[0][0],wind[0][1]);
         glVertex2f(wind[0][0],wind[1][1]);
         glVertex2f(wind[1][0],wind[1][1]);
         glVertex2f(wind[1][0],wind[0][1]);
         glEnd();
          
         glBegin(GL_POLYGON);
         glColor3f(0,1,1);
         for(int i=0;i<size;i++){
          glVertex2f(poly[i][0],poly[i][1]);
          }
         glEnd(); 
    printf("\n");
    printf("left clipping\n");
    left(poly,size,wind[0][0]);
    for(int i=0;i<count;i++){
        poly[i][0]=arr[i][0];
        poly[i][1]=arr[i][1];
        arr[i][0]=arr[i][1]=0;
    }
    for(int i=0;i<count;i++){
         printf("%d %d\n",poly[i][0],poly[i][1]);
     }
     printf("-----------------------\n");
    j=0;
    size=count;
    count=0;
    printf("bottom clipping\n");
    bottom(poly,size,wind[0][1]);
    for(int i=0;i<count;i++){
        poly[i][0]=arr[i][0];
        poly[i][1]=arr[i][1];
        arr[i][0]=arr[i][1]=0;
    }
    for(int i=0;i<count;i++){
         printf("%d %d\n",poly[i][0],poly[i][1]);
     }
     printf("-----------------------\n");
    j=0;
    size=count;
    count=0;
    printf("right clipping\n");   
    right(poly,size,wind[1][0]);
    for(int i=0;i<count;i++){
        poly[i][0]=arr[i][0];
        poly[i][1]=arr[i][1];
        arr[i][0]=arr[i][1]=0;
    }
    for(int i=0;i<count;i++){
         printf("%d %d\n",poly[i][0],poly[i][1]);
     }
     printf("-----------------------\n");
    j=0;
    size=count;
    count=0; 
    printf("top clipping\n");
     top(poly,size,wind[1][1]);
    for(int i=0;i<count;i++){
        poly[i][0]=arr[i][0];
        poly[i][1]=arr[i][1];
        arr[i][0]=arr[i][1]=0;
    }
    for(int i=0;i<count;i++){
         printf("%d %d\n",poly[i][0],poly[i][1]);
     }
     printf("-----------------------\n");
    j=0;
    size=count;
    
     glBegin(GL_LINE_LOOP);           //window
         glColor3f(1,1,0);
         glVertex2f(wind[0][0],wind[0][1]);
         glVertex2f(wind[0][0],wind[1][1]);
         glVertex2f(wind[1][0],wind[1][1]);
         glVertex2f(wind[1][0],wind[0][1]);
         glEnd();
          
         glBegin(GL_POLYGON);      //polygon clipped
         glColor3f(0,1,1);
          glVertex2f(poly[0][0],poly[0][1]);
          glVertex2f(poly[2][0],poly[2][1]);
          glVertex2f(poly[1][0],poly[1][1]);
          glVertex2f(poly[3][0],poly[3][1]);
         glEnd(); 
 glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(300,500);
glutCreateWindow("polygon clipping");
glClearColor(0,0,0,1);
gluOrtho2D(-50,310,-50,310);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
