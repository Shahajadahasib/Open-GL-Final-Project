#include <GLUT/glut.h>

#include <stdlib.h>

#include <math.h>




void timer(int);
void timerBirds(int);

void imer(int);
float move_position=0.0;



void init(void)
{ //glClearColor(R,G,B,A);


    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);


      gluOrtho2D(0,100,0,150);



//  gluOrtho2D(0.0,500,0.0,500);
}

void circle(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)//radius_x,radius_y,certre_position_x,centre_position_y
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=0;i<361;i++)
    {
        angle = i * (PI/180); //conversion from degree to radian
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}

float x=0;
void Birds(){
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    circle(3, 2.5, x+25, 140);
    circle(.75, 1.5, x+28.5, 140);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    circle(.15, .25,x+28.5, 140);
    glBegin(GL_TRIANGLES);
    glVertex2i(x+24, 140);
    glVertex2i(x+26, 140);
    glVertex2i(x+22, 135);
    
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_TRIANGLES);
    glVertex2i(x+23, 140);
    glVertex2i(x+21, 138);
    glVertex2i(x+21, 142);
    
    glEnd();
    
    
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    circle(3, 2.5, x+55, 140);
    circle(.75, 1.5, x+58.5, 140);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    circle(.15, .25, x+58.5, 140);
    glBegin(GL_TRIANGLES);
    glVertex2i(x+54, 140);
    glVertex2i(x+56, 140);
    glVertex2i(x+52, 135);
    
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_TRIANGLES);
    glVertex2i(x+53, 140);
    glVertex2i(x+51, 138);
    glVertex2i(x+51, 142);
    
    glEnd();
    
}

void Cloud(){
    glColor3f(255.0f, 255.0f, 255.0f);//Blue


    circle(3, 6, move_position+5, 135);
    circle(3, 6, move_position+8, 139);
    circle(3, 6, move_position+11, 135);
    circle(3, 6, move_position+8, 134);
    
    
    circle(3, 6, move_position+35, 135);
    circle(3, 6, move_position+38, 139);
    circle(3, 6, move_position+41, 135);
    circle(3, 6, move_position+38, 134);
    
    
    circle(3, 6, move_position+65, 135);
    circle(3, 6, move_position+68, 139);
    circle(3, 6, move_position+71, 135);
    circle(3, 6, move_position+68, 134);
}



void Football(){
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    
    glBegin(GL_QUADS);
   
    glVertex2i(4, 55);
    glVertex2i(40, 55);
    glVertex2i(40, 10);
    glVertex2i(4, 10);
    glEnd();
    glColor3f(1.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
   
    glVertex2i(22, 55);
    glVertex2f(22.2, 55);
    glVertex2f(22.2, 10);
    glVertex2i(22, 10);
    glEnd();
    
    
    glColor3f(1.0f, 1.5f, 0.5f);
    circle(2, 5, 22, 34);
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    circle(1.9, 4.3, 22, 34);
    
    
    //debox
    glColor3f(1.0f, .5f, 0.5f);
    circle(3, 5, 10, 33);
    
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    circle(3, 4, 10, 33);
    
    
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2i(4, 20);
    glVertex2f(4.0, 45.0);
    glVertex2f(10.0, 45.0);
    glVertex2f(10.0, 20.0);
    glEnd();
    
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glBegin(GL_QUADS);
    glVertex2f(4.0, 20.5);
    glVertex2f(4.0, 44.5);
    glVertex2f(9.8, 44.5);
    glVertex2f(9.8, 20.5);
    glEnd();
    
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2i(4, 25);
    glVertex2f(4.0, 40.0);
    glVertex2f(7.0, 40.0);
    glVertex2f(7.0, 25.0);
    glEnd();
    
    
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glBegin(GL_QUADS);
    glVertex2f(4.0, 25.5);
    glVertex2f(4.0, 39.5);
    glVertex2f(6.8, 39.5);
    glVertex2f(6.8, 25.5);
    glEnd();
    
    glColor3f(1.0f, 1.0f, 1.0f);//Blue-Green
    glBegin(GL_QUADS);
    glVertex2f(4.0, 25.5);
    glVertex2f(4.0, 39.5);
    glVertex2f(3.5, 39.5);
    glVertex2f(3.5, 25.5);
    glEnd();
    
    
    
    //bar2
    
    //debox
    glColor3f(1.0f, .5f, 0.5f);
    circle(3, 5, 34, 33);
    
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    circle(3, 4, 34, 33);
    
    
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2i(40, 20);
    glVertex2f(40.0, 45.0);
    glVertex2f(34.0, 45.0);
    glVertex2f(34.0, 20.0);
    glEnd();
    
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glBegin(GL_QUADS);
    glVertex2f(40.0, 20.5);
    glVertex2f(40.0, 44.5);
    glVertex2f(34.2, 44.5);
    glVertex2f(34.2, 20.5);
    glEnd();
    
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2i(40, 25);
    glVertex2f(40.0, 40.0);
    glVertex2f(36.0, 40.0);
    glVertex2f(36.0, 25.0);
    glEnd();
    
    
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glBegin(GL_QUADS);
    glVertex2f(40.0, 25.5);
    glVertex2f(40.0, 39.5);
    glVertex2f(36.2, 39.5);
    glVertex2f(36.2, 25.5);
    glEnd();
    
    glColor3f(1.0f, 1.0f, 1.0f);//Blue-Green
    glBegin(GL_QUADS);
    glVertex2f(40.0, 25.5);
    glVertex2f(40.0, 39.5);
    glVertex2f(40.5, 39.5);
    glVertex2f(40.5, 25.5);
    glEnd();
    
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
    circle(.50, 1, 4, 32);
    circle(.50, 1, 12, 50);
    circle(.50, 1, 12, 40);
    circle(.50, 1, 12, 25);
    circle(.50, 1, 12, 15);
    
    circle(.50, 1, 17, 50);
    circle(.50, 1, 17, 40);
    circle(.50, 1, 17, 25);
    circle(.50, 1, 17, 15);
    
 
    circle(.50, 1, 20, 38);
    circle(.50, 1, 20, 27);
   
    circle(.50, 1, 25, 38);
    circle(.50, 1, 25, 27);
    
    
    circle(.50, 1, 28, 50);
    circle(.50, 1, 28, 40);
    circle(.50, 1, 28, 25);
    circle(.50, 1, 28, 15);
    
    circle(.50, 1, 32, 50);
    circle(.50, 1, 32, 40);
    circle(.50, 1, 32, 25);
    circle(.50, 1, 32, 15);
    
    //ground
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_QUADS);
    glVertex2i(4, 55);
    glVertex2i(0, 65);
    glVertex2i(45, 65);
    glVertex2i(40, 55);
    glEnd();
    
    
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(0, 65);
    glVertex2i(4, 55);
    glVertex2i(4, 10);
    glEnd();
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(4, 10);
    glVertex2i(40, 10);
    glVertex2i(45, 0);
    glEnd();
    
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glBegin(GL_QUADS);
    glVertex2i(45, 0);
    glVertex2i(40, 0);
    glVertex2i(40, 55);
    glVertex2i(45, 65);
    glEnd();
    
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    circle(2, 32, 45, 33);
    
    //chair
    
//    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
//
//    glBegin(GL_QUADS);
//    glVertex2f(3, 60);
//    glVertex2f(3, 62.9);
//    glVertex2f(4, 62.9);
//    glVertex2f(4, 60);
//    glEnd();
//    glColor3f(0.0f, 0.0f, 1.0f);//Blue
//    glBegin(GL_QUADS);
//    glVertex2f(3, 60);
//    glVertex2f(4, 60);
//    glVertex2f(4.5, 58);
//    glVertex2f(3.5, 58);
//    glEnd();
    
    
    
    
    // gallery person
    
    //gallary man
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 4, 64);
    
    
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(3.8, 63);
    glVertex2f(4.2, 63);
    glVertex2f(4.5, 61);
    glVertex2f(3.5, 61);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f(3.9, 61);
    glVertex2f(3.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(4.2, 61);
    glVertex2f(4.2,59);
    glEnd();
    

    circle(.55, 1, 5, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(4.8, 63);
    glVertex2f(5.2, 63);
    glVertex2f(5.5, 61);
    glVertex2f(4.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(4.9, 61);
    glVertex2f(4.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(5.2, 61);
    glVertex2f(5.2,59);
    glEnd();
    
    
    
    //1
    
    
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 6, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(5.8, 63);
    glVertex2f(6.2, 63);
    glVertex2f(6.5, 61);
    glVertex2f(5.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(5.9, 61);
    glVertex2f(5.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(6.2, 61);
    glVertex2f(6.2,59);
    glEnd();
    

    circle(.55, 1, 7, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(6.8, 63);
    glVertex2f(7.2, 63);
    glVertex2f(7.5, 61);
    glVertex2f(6.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(6.9, 61);
    glVertex2f(6.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(7.2, 61);
    glVertex2f(7.2,59);
    glEnd();
    
    //2
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 8, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(7.8, 63);
    glVertex2f(8.2, 63);
    glVertex2f(8.5, 61);
    glVertex2f(7.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(7.9, 61);
    glVertex2f(7.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(8.2, 61);
    glVertex2f(8.2,59);
    glEnd();
    

    circle(.55, 1, 9, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(8.8, 63);
    glVertex2f(9.2, 63);
    glVertex2f(9.5, 61);
    glVertex2f(8.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(8.9, 61);
    glVertex2f(8.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(9.2, 61);
    glVertex2f(9.2,59);
    glEnd();
    
    //3
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 10, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(9.8, 63);
    glVertex2f(10.2, 63);
    glVertex2f(10.5, 61);
    glVertex2f(9.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(9.9, 61);
    glVertex2f(9.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(10.2, 61);
    glVertex2f(10.2,59);
    glEnd();
    

    circle(.55, 1, 11, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(10.8, 63);
    glVertex2f(11.2, 63);
    glVertex2f(11.5, 61);
    glVertex2f(10.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(10.9, 61);
    glVertex2f(10.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(11.2, 61);
    glVertex2f(11.2,59);
    glEnd();
    
    //4
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 12, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(11.8, 63);
    glVertex2f(12.2, 63);
    glVertex2f(12.5, 61);
    glVertex2f(11.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(11.9, 61);
    glVertex2f(11.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(12.2, 61);
    glVertex2f(12.2,59);
    glEnd();


    circle(.55, 1, 13, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(12.8, 63);
    glVertex2f(13.2, 63);
    glVertex2f(13.5, 61);
    glVertex2f(12.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(12.9, 61);
    glVertex2f(12.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(13.2, 61);
    glVertex2f(13.2,59);
    glEnd();
    
    //5
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 14, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(13.8, 63);
    glVertex2f(14.2, 63);
    glVertex2f(14.5, 61);
    glVertex2f(13.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(13.9, 61);
    glVertex2f(13.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(14.2, 61);
    glVertex2f(14.2,59);
    glEnd();
    

    circle(.55, 1, 15, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(14.8, 63);
    glVertex2f(15.2, 63);
    glVertex2f(15.5, 61);
    glVertex2f(14.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(14.9, 61);
    glVertex2f(14.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(15.2, 61);
    glVertex2f(15.2,59);
    glEnd();

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 16, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(15.8, 63);
    glVertex2f(16.2, 63);
    glVertex2f(16.5, 61);
    glVertex2f(15.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(15.9, 61);
    glVertex2f(15.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(16.2, 61);
    glVertex2f(16.2,59);
    glEnd();

    circle(.55, 1, 17, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(16.8, 63);
    glVertex2f(17.2, 63);
    glVertex2f(17.5, 61);
    glVertex2f(16.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(16.9, 61);
    glVertex2f(16.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(17.2, 61);
    glVertex2f(17.2,59);
    glEnd();
    
    
    
    //2nd line
    
    
    
    
    
    
    
    
}
float xposition=15.0;
float ybposition=-3.0;
void player(){
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+4, 64);
    
    
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+3.8, 63);
    glVertex2f(xposition+4.2, 63);
    glVertex2f(xposition+4.5, 61);
    glVertex2f(xposition+3.5, 61);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f(xposition+3.9, 61);
    glVertex2f(xposition+3.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+4.2, 61);
    glVertex2f(xposition+4.2,59);
    glEnd();
    

    circle(.55, 1, xposition+5, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+4.8, 63);
    glVertex2f(xposition+5.2, 63);
    glVertex2f(xposition+5.5, 61);
    glVertex2f(xposition+4.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+4.9, 61);
    glVertex2f(xposition+4.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+5.2, 61);
    glVertex2f(xposition+5.2,59);
    glEnd();
    
    
    
    //1
    
    
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+6, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+5.8, 63);
    glVertex2f(xposition+6.2, 63);
    glVertex2f(xposition+6.5, 61);
    glVertex2f(xposition+5.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+5.9, 61);
    glVertex2f(xposition+5.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+6.2, 61);
    glVertex2f(xposition+6.2,59);
    glEnd();
    

    circle(.55, 1, xposition+7, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+6.8, 63);
    glVertex2f(xposition+7.2, 63);
    glVertex2f(xposition+7.5, 61);
    glVertex2f(xposition+6.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+6.9, 61);
    glVertex2f(xposition+6.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+7.2, 61);
    glVertex2f(xposition+7.2,59);
    glEnd();
    //2
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+8, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+7.8, 63);
    glVertex2f(xposition+8.2, 63);
    glVertex2f(xposition+8.5, 61);
    glVertex2f(xposition+7.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+7.9, 61);
    glVertex2f(xposition+7.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+8.2, 61);
    glVertex2f(xposition+8.2,59);
    glEnd();
    

    circle(.55, 1, xposition+9, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+8.8, 63);
    glVertex2f(xposition+9.2, 63);
    glVertex2f(xposition+9.5, 61);
    glVertex2f(xposition+8.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+8.9, 61);
    glVertex2f(xposition+8.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+9.2, 61);
    glVertex2f(xposition+9.2,59);
    glEnd();
    
    //3
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+10, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+9.8, 63);
    glVertex2f(xposition+10.2, 63);
    glVertex2f(xposition+10.5, 61);
    glVertex2f(xposition+9.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+9.9, 61);
    glVertex2f(xposition+9.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+10.2, 61);
    glVertex2f(xposition+10.2,59);
    glEnd();
    

    circle(.55, 1, xposition+11, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+10.8, 63);
    glVertex2f(xposition+11.2, 63);
    glVertex2f(xposition+11.5, 61);
    glVertex2f(xposition+10.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+10.9, 61);
    glVertex2f(xposition+10.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+11.2, 61);
    glVertex2f(xposition+11.2,59);
    glEnd();
    
    //4
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+12, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+11.8, 63);
    glVertex2f(xposition+12.2, 63);
    glVertex2f(xposition+12.5, 61);
    glVertex2f(xposition+11.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+11.9, 61);
    glVertex2f(xposition+11.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+12.2, 61);
    glVertex2f(xposition+12.2,59);
    glEnd();


    circle(.55, 1, xposition+13, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+12.8, 63);
    glVertex2f(xposition+13.2, 63);
    glVertex2f(xposition+13.5, 61);
    glVertex2f(xposition+12.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+12.9, 61);
    glVertex2f(xposition+12.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+13.2, 61);
    glVertex2f(xposition+13.2,59);
    glEnd();
    
    //5
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+14, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+13.8, 63);
    glVertex2f(xposition+14.2, 63);
    glVertex2f(xposition+14.5, 61);
    glVertex2f(xposition+13.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+13.9, 61);
    glVertex2f(xposition+13.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+14.2, 61);
    glVertex2f(xposition+14.2,59);
    glEnd();
    

    circle(.55, 1, xposition+15, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+14.8, 63);
    glVertex2f(xposition+15.2, 63);
    glVertex2f(xposition+15.5, 61);
    glVertex2f(xposition+14.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+14.9, 61);
    glVertex2f(xposition+14.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+15.2, 61);
    glVertex2f(xposition+15.2,59);
    glEnd();

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+16, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+15.8, 63);
    glVertex2f(xposition+16.2, 63);
    glVertex2f(xposition+16.5, 61);
    glVertex2f(xposition+15.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+15.9, 61);
    glVertex2f(xposition+15.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+16.2, 61);
    glVertex2f(xposition+16.2,59);
    glEnd();

    circle(.55, 1, xposition+17, 64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+16.8, 63);
    glVertex2f(xposition+17.2, 63);
    glVertex2f(xposition+17.5, 61);
    glVertex2f(xposition+16.5, 61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+16.9, 61);
    glVertex2f(xposition+16.9,59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+17.2, 61);
    glVertex2f(xposition+17.2,59);
    glEnd();
    
    
    
    //2nd line
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 4, ybposition+64);
    
    
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(3.8, ybposition+63);
    glVertex2f(4.2, ybposition+63);
    glVertex2f(4.5, ybposition+61);
    glVertex2f(3.5, ybposition+61);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f(3.9, ybposition+61);
    glVertex2f(3.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(4.2, ybposition+61);
    glVertex2f(4.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, 5, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(4.8, ybposition+63);
    glVertex2f(5.2, ybposition+63);
    glVertex2f(5.5, ybposition+61);
    glVertex2f(4.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(4.9, ybposition+61);
    glVertex2f(4.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(5.2, ybposition+61);
    glVertex2f(5.2,ybposition+59);
    glEnd();
    
    
    
    //1
    
    
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 6, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(5.8, ybposition+63);
    glVertex2f(6.2, ybposition+63);
    glVertex2f(6.5, ybposition+61);
    glVertex2f(5.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(5.9, ybposition+61);
    glVertex2f(5.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(6.2, ybposition+61);
    glVertex2f(6.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, 7, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(6.8, ybposition+63);
    glVertex2f(7.2, ybposition+63);
    glVertex2f(7.5, ybposition+61);
    glVertex2f(6.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(6.9, ybposition+61);
    glVertex2f(6.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(7.2, ybposition+61);
    glVertex2f(7.2,ybposition+59);
    glEnd();
    
    //2
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 8, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(7.8, ybposition+63);
    glVertex2f(8.2, ybposition+63);
    glVertex2f(8.5, ybposition+61);
    glVertex2f(7.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(7.9, ybposition+61);
    glVertex2f(7.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(8.2, ybposition+61);
    glVertex2f(8.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, 9, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(8.8, ybposition+63);
    glVertex2f(9.2, ybposition+63);
    glVertex2f(9.5, ybposition+61);
    glVertex2f(8.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(8.9, ybposition+61);
    glVertex2f(8.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(9.2, ybposition+61);
    glVertex2f(9.2,ybposition+59);
    glEnd();
    
    //3
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 10, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(9.8, ybposition+63);
    glVertex2f(10.2, ybposition+63);
    glVertex2f(10.5, ybposition+61);
    glVertex2f(9.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(9.9, ybposition+61);
    glVertex2f(9.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(10.2, ybposition+61);
    glVertex2f(10.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, 11, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(10.8, ybposition+63);
    glVertex2f(11.2, ybposition+63);
    glVertex2f(11.5, ybposition+61);
    glVertex2f(10.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(10.9, ybposition+61);
    glVertex2f(10.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(11.2, ybposition+61);
    glVertex2f(11.2,ybposition+59);
    glEnd();
    
    //4
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 12, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(11.8, ybposition+63);
    glVertex2f(12.2, ybposition+63);
    glVertex2f(12.5, ybposition+61);
    glVertex2f(11.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(11.9, ybposition+61);
    glVertex2f(11.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(12.2, ybposition+61);
    glVertex2f(12.2,ybposition+59);
    glEnd();


    circle(.55, 1, 13, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(12.8, ybposition+63);
    glVertex2f(13.2, ybposition+63);
    glVertex2f(13.5, ybposition+61);
    glVertex2f(12.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(12.9, ybposition+61);
    glVertex2f(12.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(13.2, ybposition+61);
    glVertex2f(13.2,ybposition+59);
    glEnd();
    
    //5
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 14, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(13.8, ybposition+63);
    glVertex2f(14.2, ybposition+63);
    glVertex2f(14.5, ybposition+61);
    glVertex2f(13.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(13.9, ybposition+61);
    glVertex2f(13.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(14.2, ybposition+61);
    glVertex2f(14.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, 15, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(14.8, ybposition+63);
    glVertex2f(15.2, ybposition+63);
    glVertex2f(15.5, ybposition+61);
    glVertex2f(14.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(14.9, ybposition+61);
    glVertex2f(14.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(15.2, ybposition+61);
    glVertex2f(15.2,ybposition+59);
    glEnd();

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, 16, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(15.8, ybposition+63);
    glVertex2f(16.2, ybposition+63);
    glVertex2f(16.5, ybposition+61);
    glVertex2f(15.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(15.9, ybposition+61);
    glVertex2f(15.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(16.2, ybposition+61);
    glVertex2f(16.2,ybposition+59);
    glEnd();

    circle(.55, 1, 17, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(16.8, ybposition+63);
    glVertex2f(17.2, ybposition+63);
    glVertex2f(17.5, ybposition+61);
    glVertex2f(16.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(16.9, ybposition+61);
    glVertex2f(16.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(17.2, ybposition+61);
    glVertex2f(17.2,ybposition+59);
    glEnd();
    
    
    
    
    //2nd line 2nd part
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+4, ybposition+64);
    
    
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+3.8, ybposition+63);
    glVertex2f(xposition+4.2, ybposition+63);
    glVertex2f(xposition+4.5, ybposition+61);
    glVertex2f(xposition+3.5, ybposition+61);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f(xposition+3.9, ybposition+61);
    glVertex2f(xposition+3.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+4.2, ybposition+61);
    glVertex2f(xposition+4.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, xposition+5, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+4.8, ybposition+63);
    glVertex2f(xposition+5.2, ybposition+63);
    glVertex2f(xposition+5.5, ybposition+61);
    glVertex2f(xposition+4.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+4.9, ybposition+61);
    glVertex2f(xposition+4.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+5.2, ybposition+61);
    glVertex2f(xposition+5.2,ybposition+59);
    glEnd();
    
    
    
    //1
    
    
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+6, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+5.8, ybposition+63);
    glVertex2f(xposition+6.2, ybposition+63);
    glVertex2f(xposition+6.5, ybposition+61);
    glVertex2f(xposition+5.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+5.9, ybposition+61);
    glVertex2f(xposition+5.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+6.2, ybposition+61);
    glVertex2f(xposition+6.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, xposition+7, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+6.8, ybposition+63);
    glVertex2f(xposition+7.2, ybposition+63);
    glVertex2f(xposition+7.5, ybposition+61);
    glVertex2f(xposition+6.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+6.9, ybposition+61);
    glVertex2f(xposition+6.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+7.2, ybposition+61);
    glVertex2f(xposition+7.2,ybposition+59);
    glEnd();
    //2
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+8, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+7.8, ybposition+63);
    glVertex2f(xposition+8.2, ybposition+63);
    glVertex2f(xposition+8.5, ybposition+61);
    glVertex2f(xposition+7.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+7.9, ybposition+61);
    glVertex2f(xposition+7.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+8.2, ybposition+61);
    glVertex2f(xposition+8.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, xposition+9, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+8.8, ybposition+63);
    glVertex2f(xposition+9.2, ybposition+63);
    glVertex2f(xposition+9.5, ybposition+61);
    glVertex2f(xposition+8.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+8.9, ybposition+61);
    glVertex2f(xposition+8.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+9.2, ybposition+61);
    glVertex2f(xposition+9.2,ybposition+59);
    glEnd();
    
    //3
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+10, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+9.8, ybposition+63);
    glVertex2f(xposition+10.2, ybposition+63);
    glVertex2f(xposition+10.5, ybposition+61);
    glVertex2f(xposition+9.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+9.9, ybposition+61);
    glVertex2f(xposition+9.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+10.2, ybposition+61);
    glVertex2f(xposition+10.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, xposition+11, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+10.8, ybposition+63);
    glVertex2f(xposition+11.2, ybposition+63);
    glVertex2f(xposition+11.5, ybposition+61);
    glVertex2f(xposition+10.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+10.9, ybposition+61);
    glVertex2f(xposition+10.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+11.2, ybposition+61);
    glVertex2f(xposition+11.2,ybposition+59);
    glEnd();
    
    //4
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+12, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+11.8, ybposition+63);
    glVertex2f(xposition+12.2, ybposition+63);
    glVertex2f(xposition+12.5, ybposition+61);
    glVertex2f(xposition+11.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+11.9, ybposition+61);
    glVertex2f(xposition+11.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+12.2, ybposition+61);
    glVertex2f(xposition+12.2,ybposition+59);
    glEnd();


    circle(.55, 1, xposition+13, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+12.8, ybposition+63);
    glVertex2f(xposition+13.2, ybposition+63);
    glVertex2f(xposition+13.5, ybposition+61);
    glVertex2f(xposition+12.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+12.9, ybposition+61);
    glVertex2f(xposition+12.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+13.2, ybposition+61);
    glVertex2f(xposition+13.2,ybposition+59);
    glEnd();
    
    //5
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+14, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+13.8, ybposition+63);
    glVertex2f(xposition+14.2, ybposition+63);
    glVertex2f(xposition+14.5, ybposition+61);
    glVertex2f(xposition+13.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+13.9, ybposition+61);
    glVertex2f(xposition+13.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+14.2, ybposition+61);
    glVertex2f(xposition+14.2,ybposition+59);
    glEnd();
    

    circle(.55, 1, xposition+15, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+14.8, ybposition+63);
    glVertex2f(xposition+15.2, ybposition+63);
    glVertex2f(xposition+15.5, ybposition+61);
    glVertex2f(xposition+14.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+14.9, ybposition+61);
    glVertex2f(xposition+14.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+15.2, ybposition+61);
    glVertex2f(xposition+15.2,ybposition+59);
    glEnd();

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    circle(.55, 1, xposition+16, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+15.8, ybposition+63);
    glVertex2f(xposition+16.2, ybposition+63);
    glVertex2f(xposition+16.5, ybposition+61);
    glVertex2f(xposition+15.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+15.9, ybposition+61);
    glVertex2f(xposition+15.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+16.2, ybposition+61);
    glVertex2f(xposition+16.2,ybposition+59);
    glEnd();

    circle(.55, 1, xposition+17, ybposition+64);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(xposition+16.8, ybposition+63);
    glVertex2f(xposition+17.2, ybposition+63);
    glVertex2f(xposition+17.5, ybposition+61);
    glVertex2f(xposition+16.5, ybposition+61);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+16.9, ybposition+61);
    glVertex2f(xposition+16.9,ybposition+59);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(xposition+17.2, ybposition+61);
    glVertex2f(xposition+17.2,ybposition+59);
    glEnd();
    
}


    



void House(){
//    glColor3f(1.0f, 0.0f, 1.0f);//Purple
//    glBegin(GL_QUADS);
//    glVertex2i(13, 90);
//    glVertex2i(13, 120);
//    glVertex2i(23, 120);
//    glVertex2i(23, 90);
//    glEnd();
    
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
//    glBegin(GL_QUADS);
//    glVertex2i(15, 118);
//    glVertex2i(15, 112);
//    glVertex2i(17, 112);
//    glVertex2i(17, 118);
//    glEnd();
//    glBegin(GL_QUADS);
//    glVertex2i(19, 118);
//    glVertex2i(19, 112);
//    glVertex2i(21, 112);
//    glVertex2i(21, 118);
//    glEnd();
    
//    glBegin(GL_QUADS);
//    glVertex2i(15, 109);
//    glVertex2i(15, 103);
//    glVertex2i(17, 103);
//    glVertex2i(17, 109);
//    glEnd();
//    glBegin(GL_QUADS);
//    glVertex2i(19, 109);
//    glVertex2i(19, 103);
//    glVertex2i(21, 103);
//    glVertex2i(21, 109);
//    glEnd();
//
//    glBegin(GL_QUADS);
//    glVertex2i(16, 90);
//    glVertex2i(16, 100);
//    glVertex2f(19.5, 100);
//    glVertex2f(19.5, 90);
//    glEnd();
    
//    glColor3f(0.0f, 0.0f, 0.0f);//Black
//    glBegin(GL_QUADS);
//    glVertex2f(17.5, 90);
//    glVertex2f(17.5, 100);
//    glVertex2i(18, 100);
//    glVertex2i(18, 90);
//
//    glEnd();
    
    
    
    
    
    
    
    
    glColor3f(1.0f, 0.0f, 1.0f);//Purple
    glBegin(GL_QUADS);
    glVertex2i(33, 90);
    glVertex2i(33, 120);
    glVertex2i(43, 120);
    glVertex2i(43, 90);
    glEnd();
    
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2i(35, 118);
    glVertex2i(35, 112);
    glVertex2i(37, 112);
    glVertex2i(37, 118);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(39, 118);
    glVertex2i(39, 112);
    glVertex2i(41, 112);
    glVertex2i(41, 118);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(35, 109);
    glVertex2i(35, 103);
    glVertex2i(37, 103);
    glVertex2i(37, 109);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(39, 109);
    glVertex2i(39, 103);
    glVertex2i(41, 103);
    glVertex2i(41, 109);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(36, 90);
    glVertex2i(36, 100);
    glVertex2f(39.5, 100);
    glVertex2f(39.5, 90);
    glEnd();
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(37.5, 90);
    glVertex2f(37.5, 100);
    glVertex2i(38, 100);
    glVertex2i(38, 90);
   
    glEnd();glColor3f(1.0f, 0.0f, 1.0f);//Purple
    glBegin(GL_QUADS);
    glVertex2i(33, 90);
    glVertex2i(33, 120);
    glVertex2i(43, 120);
    glVertex2i(43, 90);
    glEnd();
    
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2i(35, 118);
    glVertex2i(35, 112);
    glVertex2i(37, 112);
    glVertex2i(37, 118);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(39, 118);
    glVertex2i(39, 112);
    glVertex2i(41, 112);
    glVertex2i(41, 118);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(35, 109);
    glVertex2i(35, 103);
    glVertex2i(37, 103);
    glVertex2i(37, 109);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(39, 109);
    glVertex2i(39, 103);
    glVertex2i(41, 103);
    glVertex2i(41, 109);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(36, 90);
    glVertex2i(36, 100);
    glVertex2f(39.5, 100);
    glVertex2f(39.5, 90);
    glEnd();
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(37.5, 90);
    glVertex2f(37.5, 100);
    glVertex2i(38, 100);
    glVertex2i(38, 90);
   
    glEnd();
    
    
    
    
    
    glColor3f(1.0f, 0.0f, 1.0f);//Purple
    glBegin(GL_QUADS);
    glVertex2i(53, 90);
    glVertex2i(53, 120);
    glVertex2i(63, 120);
    glVertex2i(63, 90);
    glEnd();
    
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2i(55, 118);
    glVertex2i(55, 112);
    glVertex2i(57, 112);
    glVertex2i(57, 118);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(59, 118);
    glVertex2i(59, 112);
    glVertex2i(61, 112);
    glVertex2i(61, 118);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(55, 109);
    glVertex2i(55, 103);
    glVertex2i(57, 103);
    glVertex2i(57, 109);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(59, 109);
    glVertex2i(59, 103);
    glVertex2i(61, 103);
    glVertex2i(61, 109);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(56, 90);
    glVertex2i(56, 100);
    glVertex2f(59.5, 100);
    glVertex2f(59.5, 90);
    glEnd();
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(57.5, 90);
    glVertex2f(57.5, 100);
    glVertex2i(58, 100);
    glVertex2i(58, 90);
   
    glEnd();
    
}
float x_position=0.0;
void air(){
//    glBegin(GL_QUADS);
//    glVertex2i(10, 130);
//    glVertex2i(35, 130);
//    glVertex2i(35, 125);
//    glVertex2i(10, 125);
//    glEnd();
    circle(9, 3, x_position+25, 130);
    
    glBegin(GL_TRIANGLES);
    glVertex2i(x_position+16, 138);
    glVertex2i(x_position+22, 128);
    glVertex2i(x_position+17, 129);
    glEnd();
   // glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(x_position+25, 130);
    glVertex2i(x_position+28, 130);
    glVertex2i(x_position+25, 123);
    glVertex2i(x_position+24, 123);
    
    glEnd();
}

void shadowhouse(){
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);//purple
    glBegin(GL_QUADS);
    glVertex2i(5, 123);
    glVertex2i(7, 123);
    glVertex2i(7, 115);
    glVertex2i(5, 115);
    glEnd();
    glColor3f(0.1f, 0.1f, 0.0f);//Bronze
    glBegin(GL_QUADS);
    glVertex2i(5, 115);
    glVertex2i(20, 115);
    glVertex2i(20, 90);
    glVertex2i(5, 90);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(12, 128);
    glVertex2i(22, 115);
    glVertex2i(3, 115);
   
    glEnd();
    
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2i(7, 114);
    glVertex2i(11, 114);
    glVertex2i(11, 106);
    glVertex2i(7, 106);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(18, 114);
    glVertex2i(14, 114);
    glVertex2i(14, 106);
    glVertex2i(18, 106);
    glEnd();
    
    
    
    glBegin(GL_QUADS);
    glVertex2i(11, 122);
    glVertex2i(13, 122);
    glVertex2i(13, 118);
    glVertex2i(11, 118);
    
    glEnd();
    
    
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glBegin(GL_QUADS);
    glVertex2f(7.5, 113);
    glVertex2f(8.5, 113);
    glVertex2f(8.5, 111);
    glVertex2f(7.5, 111);
    
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(9.5, 113);
    glVertex2f(10.5, 113);
    glVertex2f(10.5, 111);
    glVertex2f(9.5, 111);
    
    
    
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glBegin(GL_QUADS);
    glVertex2f(7.5, 110);
    glVertex2f(8.5, 110);
    glVertex2f(8.5, 108);
    glVertex2f(7.5, 108);
    
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(9.5, 110);
    glVertex2f(10.5, 110);
    glVertex2f(10.5, 108);
    glVertex2f(9.5, 108);
    
    glEnd();
    
    
    
    
    
    
    
    
    
    
    
    
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glBegin(GL_QUADS);
    glVertex2f(14.5, 113);
    glVertex2f(15.5, 113);
    glVertex2f(15.5, 111);
    glVertex2f(14.5, 111);
    
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(16.5, 113);
    glVertex2f(17.5, 113);
    glVertex2f(17.5, 111);
    glVertex2f(16.5, 111);
    
    
   
    
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(16.5, 110);
    glVertex2f(17.5, 110);
    glVertex2f(17.5, 108);
    glVertex2f(16.5, 108);
    

  
    glEnd();
    
    
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(14.5, 110);
    glVertex2f(15.5, 110);
    glVertex2f(15.5, 108);
    glVertex2f(14.5, 108);
    glEnd();
    
}


void Bus(){
    glColor4f(0.0f, 0.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_QUADS);
    glVertex2i(move_position+10, 73);
    glVertex2i(move_position+10, 89);
    glVertex2i(move_position+24, 89);
    glVertex2i(move_position+25, 73);
    glEnd();
    glColor3f(0.0f, .20f, 0.0f);//Green
    circle(1.5, 4, move_position+14, 73);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(1, 2.5, move_position+14, 73);
    
    glColor3f(0.0f, .20f, 0.0f);//Green
    circle(1.5, 4, move_position+20.2, 73);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(1, 2.5, move_position+20.2, 73);
    
    
    glColor3f(0.0f, .20f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2i(move_position+12, 80);
    glVertex2i(move_position+12, 85);
    glVertex2i(move_position+15, 85);
    glVertex2i(move_position+15, 80);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(move_position+17, 80);
    glVertex2i(move_position+17, 85);
    glVertex2i(move_position+20, 85);
    glVertex2i(move_position+20, 80);
    glEnd();
    //car
    glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glBegin(GL_QUADS);
    glVertex2i(move_position+50, 73);
    glVertex2i(move_position+50, 82);
    glVertex2i(move_position+65, 82);
    glVertex2i(move_position+65, 73);
    glEnd();
    glColor3f(0.0f, .20f, 0.0f);//Green
    circle(1.5, 4, move_position+54, 73);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(1, 2.5, move_position+54, 73);
    
    glColor3f(0.0f, .20f, 0.0f);//Green
    circle(1.5, 4, move_position+60.2, 73);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(1, 2.5, move_position+60.2, 73);
    
//    car
    glBegin(GL_QUADS);
    glVertex2i(move_position+51, 82);
    glVertex2i(move_position+53, 88);
    glVertex2i(move_position+60, 88);
    glVertex2i(move_position+63, 82);
    glEnd();
    
//    car door
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2i(move_position+53, 83);
    glVertex2f(move_position+53, 86.5);
    glVertex2f(move_position+56, 86.5);
    glVertex2i(move_position+56, 83);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(move_position+57, 83);
    glVertex2f(move_position+57, 86.5);
    glVertex2f(move_position+60, 86.5);
    glVertex2i(move_position+61, 83);
    glEnd();
    //person
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    circle(.30, .90, move_position+58, 85.5);
    circle(.40, .75, move_position+58, 84);
    circle(.30, .90, move_position+58, 85.5);
    circle(.40, .75, move_position+58, 84);
    
    circle(.30, .90, move_position+55, 85.5);
    circle(.40, .75, move_position+55, 84);
    circle(.30, .90, move_position+55, 85.5);
    circle(.40, .75, move_position+55, 84);
}




void Tree(){
    glColor3f(0.0f, .20f, 0.0f);//Green
//    glBegin(GL_QUADS);
//    glVertex2i(8, 110);
//    glVertex2f(8.8, 110.0);
//    glVertex2f(8.8, 90.0);
//    glVertex2i(8, 90);
//    glEnd();
//    circle(2, 4, 5, 113);
//    circle(2, 4, 6, 117);
//    circle(2, 4, 8, 119);
//    circle(2, 4, 10, 117);
//    circle(2, 4, 11, 113);
//    circle(2, 4, 8, 112);
    
    glBegin(GL_QUADS);
    glVertex2i(28, 110);
    glVertex2f(28.8, 110.0);
    glVertex2f(28.8, 90.0);
    glVertex2i(28, 90);
    glEnd();
    
    circle(2, 4, 25, 113);
    circle(2, 4, 26, 117);
    circle(2, 4, 28, 119);
    circle(2, 4, 30, 117);
    circle(2, 4, 31, 113);
    circle(2, 4, 28, 112);
    glBegin(GL_QUADS);
    glVertex2i(48, 110);
    glVertex2f(48.8, 110.0);
    glVertex2f(48.8, 90.0);
    glVertex2i(48, 90);
    glEnd();
    
    
    //grass
    
    
    
    
    circle(2, 4, 45, 113);
    circle(2, 4, 46, 117);
    circle(2, 4, 48, 119);
    circle(2, 4, 50, 117);
    circle(2, 4, 51, 113);
    circle(2, 4, 48, 112);
    
    glBegin(GL_QUADS);
    glVertex2i(68, 110);
    glVertex2f(68.8, 110.0);
    glVertex2f(68.8, 90.0);
    glVertex2i(68, 90);
    glEnd();
    circle(2, 4, 65, 113);
    circle(2, 4, 66, 117);
    circle(2, 4, 68, 119);
    circle(2, 4, 70, 117);
    circle(2, 4, 71, 113);
    circle(2, 4, 68, 112);
//    circle(2, 5, 8, 115);
//    circle(1.5, 5, 8, 110);
    
}


void River(){
    circle(6, 11, 0, 40);
    circle(6, 11, 6, 40);
    circle(6, 11, 10, 40);
    circle(6, 11, 14, 40);
//    circle(GLfloat rx, <#GLfloat ry#>, <#GLfloat x#>, <#GLfloat y#>)
    circle(6, 11, 18, 40);
    circle(6, 11, 24, 40);
    circle(6, 11, 28, 40);
    circle(6, 11, 34, 40);
    circle(6, 11, 40, 40);
    circle(6, 11, 46, 40);
    circle(6, 11, 52, 40);
    circle(6, 11, 58, 40);
    circle(6, 11, 64, 40);
    circle(6, 11, 70, 40);
    circle(6, 11, 76, 40);
    circle(6, 11, 82, 40);
    circle(6, 11, 88, 40);
    circle(6, 11, 92, 40);
    circle(6, 11, 98, 40);
    circle(6, 11, 104, 40);
    circle(6, 11, 108, 40);

}


void Boat(){
    
    glColor3f(1.0f, 1.0f, 1.0f);//Black
    circle(1.5, 5,  move_position+59, 25);
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+57,35);
    glVertex2f(move_position+59,35);
    glVertex2f(move_position+59,20);
   glVertex2f(move_position+57.5,20);
    glEnd();
    
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+80,20);
    glVertex2f(move_position+80,35);
    glVertex2f(move_position+84.5,37);
   glVertex2f(move_position+82,20);
    glEnd();
    
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+59,20);
    glVertex2f(move_position+59,25);
    glVertex2f(move_position+80,25);
    glVertex2f(move_position+80,20);
    glEnd();
    
    
    
    
    
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+58.5,25);
    glVertex2f(move_position+58.5,30);
    glVertex2f(move_position+80,30);
    glVertex2f(move_position+80,25);
    glEnd();
    
    
    
    
    glColor3f(0.5f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+59,30);
    glVertex2f(move_position+59,35);
    glVertex2f(move_position+80,35);
    glVertex2f(move_position+80,30);
    glEnd();
    
    
    
    glColor3f(1.0f, 1.0f, 1.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+61.5,42.0);
    glVertex2f(move_position+61.5,43.5);
    glVertex2f(move_position+78.5,43.5);
    glVertex2f(move_position+78.5,42.0);
    glEnd();

    
    
    
    
    glColor3f(1.0f, 1.0f, 1.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+66.0,35.0);
    glVertex2f(move_position+66.0,47.0);
    glVertex2f(move_position+75.0,47.0);
    glVertex2f(move_position+75.0,35.0);
    glEnd();
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    circle(0.5, 1.5, move_position+67.5, 44.5);
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    circle(0.5, 1.5, move_position+73.5, 44.5);
   
    
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+65.5,47.0);
    glVertex2f(move_position+65.5,47.5);
    glVertex2f(move_position+75.5,47.5);
    glVertex2f(move_position+75.5,47.0);
    glEnd();
    
    
    
    

    
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2f(move_position+69.0,35.0);
    glVertex2f(move_position+69.0,44.0);
    glVertex2f(move_position+71.0,44.0);
    glVertex2f(move_position+71.0,35.0);
    glEnd();
    
    
   


    
    
    
    glColor3f(1.0f, 1.0f, 1.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+62,35);
    glVertex2f(move_position+62,42);
    glVertex2f(move_position+68,42);
    glVertex2f(move_position+68,35);
    glEnd();
    
    
    
    
    
    
    glColor3f(0.0f, 1.0f, 1.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+63.0,36.5);
    glVertex2f(move_position+63.0,39.0);
    glVertex2f(move_position+64.0,39.0);
    glVertex2f(move_position+64.0,36.5);
    glEnd();
    
   
    
    
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+66.0,36.5);
    glVertex2f(move_position+66.0,39.0);
    glVertex2f(move_position+67.0,39.0);
    glVertex2f(move_position+67.0,36.5);
    glEnd();
    
    
    
    
    
    glColor3f(1.0f, 1.0f, 1.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+72,35);
    glVertex2f(move_position+72,42);
    glVertex2f(move_position+78,42);
    glVertex2f(move_position+78,35);
    glEnd();
  
    
    
    
    
    glColor3f(0.0f, 1.0f, 1.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+73.0,36.5);
    glVertex2f(move_position+73.0,39.0);
    glVertex2f(move_position+74.0,39.0);
    glVertex2f(move_position+74.0,36.5);
    glEnd();
  
    
    
    
    
    
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glBegin(GL_QUADS);
    glVertex2f(move_position+76.0,36.5);
    glVertex2f(move_position+76.0,39.0);
    glVertex2f(move_position+77.0,39.0);
    glVertex2f(move_position+77.0,36.5);
    glEnd();

}




void train(){
    

    
}

float y_position=150.0;
void Sun(){
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
    
    circle(4, 10, 80, y_position);
    
}
void Ground(){
    glColor3f(0.0f, 1.0f, 0.0f);//Green
    glBegin(GL_QUADS);
    glVertex2i(0, 90);
    glVertex2i(100, 90);
    glVertex2i(100, 0);
    glVertex2i(0, 0);

    glEnd();
}
void Sky(){
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glBegin(GL_QUADS);
    glVertex2i(0, 90);

    glVertex2i(0, 150);
    glVertex2i(100, 150);
    glVertex2i(100, 90);

    glEnd();

//    glBegin(GL_TRIANGLES);
//    glVertex2i(GLint x, <#GLint y#>)
    }



void Road(){
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    
    glBegin(GL_QUADS);
    glVertex2i(0, 85);
    glVertex2i(100, 85);
    glVertex2i(100, 65);
    glVertex2i(0, 65);
    glEnd();
    
    
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glBegin(GL_QUADS);
    glVertex2i(10, 76);
    glVertex2i(20, 76);
    glVertex2i(20, 73);
    glVertex2i(10, 73);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(30, 76);
    glVertex2i(40, 76);
    glVertex2i(40, 73);
    glVertex2i(30, 73);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(50, 76);
    glVertex2i(60, 76);
    glVertex2i(60, 73);
    glVertex2i(50, 73);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(70, 76);
    glVertex2i(80, 76);
    glVertex2i(80, 73);
    glVertex2i(70, 73);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2i(90, 76);
    glVertex2i(98, 76);
    glVertex2i(98, 73);
    glVertex2i(90, 73);
    glEnd();
}
void River1(){
    glColor3f(144.0f, 23.0f, 23.0f);
    circle(30, 50, 85, 30);
    
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    circle(28, 50, 85, 30);
}


void tree2(){
    glBegin(GL_QUADS);
    glVertex2f(57.8, 60);
    glVertex2f(58.3, 60);
    glVertex2f(58.3, 55);
    glVertex2f(57.8, 53);
    
    glEnd();
    circle(.50, 1, 57.5, 60);
    circle(.50, 1, 58, 61);
    circle(.50, 1, 58.5, 60);
    
    
    
    glBegin(GL_QUADS);
    glVertex2f(55.8, 50);
    glVertex2f(56.3, 50);
    glVertex2f(56.3, 46);
    glVertex2f(55.8, 43);
    
    glEnd();
    circle(.50, 1, 55.5, 50);
    circle(.50, 1, 56, 51);
    circle(.50, 1, 56.5, 50);
    
    
    glBegin(GL_QUADS);
    glVertex2f(54.8, 37);
    glVertex2f(55.3, 37);
    glVertex2f(55.3, 33);
    glVertex2f(54.8, 30);
    
    glEnd();
    circle(.50, 1, 54.5, 37);
    circle(.50, 1, 55, 38);
    circle(.50, 1, 55.5, 37);
    
    
    glBegin(GL_QUADS);
    glVertex2f(54.8, 24);
    glVertex2f(55.3, 24);
    glVertex2f(55.3, 19);
    glVertex2f(54.8, 17);
    
    glEnd();
    circle(.50, 1, 54.5, 24);
    circle(.50, 1, 55, 25);
    circle(.50, 1, 55.5, 24);
    
    
    
    
    glBegin(GL_QUADS);
    glVertex2f(56.8, 12);
    glVertex2f(57.3, 12);
    glVertex2f(57.3, 7);
    glVertex2f(56.8, 6);
    
    glEnd();
    circle(.50, 1, 56.5, 12);
    circle(.50, 1, 57, 13);
    circle(.50, 1, 57.5, 12);
    
    
    
}



void View(){
    glClear(GL_COLOR_BUFFER_BIT);

  
    Sky();
    Birds();
    Sun();

    Ground();
    
    air();
    train();
    
    Football();
    player();
    
    
    River1();
    shadowhouse();
    Tree();
    tree2();
    House();
    Boat();
    Cloud();
    
    Road();
    Bus();
    
    glFlush();
    glutSwapBuffers();


}






void timerBirds(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60, timerBirds, 0);
    if (x<200) {
        x+=0.50;
    }
}


void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60, timer, 0);
    if (x_position<100) {
        x_position +=1;

    }


}

void imer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/200, imer, 0);
    
    if (y_position>80) {
        y_position -=.05;

    }


}

void move(int)
{
    glutPostRedisplay();
    glutTimerFunc(500, move, 0);
    
    if (move_position<=150) {
        move_position+=1;

    }


}





int main(int argc,char **argv){





    glutInit(&argc,argv);

    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );

    glutInitWindowPosition(200,200);

    glutInitWindowSize(1300,1000);

    glutCreateWindow("Graphics");


    init();
    glutTimerFunc(0, imer,0);
    
    glutTimerFunc(0, timerBirds,0);
    glutTimerFunc(0, timer,0);
    glutTimerFunc(0, move,0);

    glutDisplayFunc(View);

    glutMainLoop();


    return 0;

}
