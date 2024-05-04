#include<windows.h>
#include<GL/glut.h>
#include<bits/stdc++.h>
using namespace std;
void planeBox(float x,float y,float z, float r ,float g,float b)
{
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x+.01/z, y);
    glVertex2f(x+.01/z, y+.01/z);
    glVertex2f(x,  y+.01/z);
    glEnd();
}
void box(float x, float y, float width,float height,float r,float g,float b)
{
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x+width, y);
    glVertex2f(x+width, y+height);
    glVertex2f(x,  y+height);
    glEnd();
}
void plane(float x, float y,float z)
{

    float r1=1.00,g1=0.68,b1= 0.36;
    box(x,y-.01,-.3,.04,r1,g1,b1);
    box(x-.3,y-.01,-.02,.01,r1,g1,b1);
    box(x-.3,y+.01,-.02,.1,r1,g1,b1);
    box(x-.29,y+.1,-.02,.02,r1,g1,b1);
    box(x,y-.02,-.32,.01,r1,g1,b1);
    box(x-.03,y-.03,-.28,.01,r1,g1,b1);
    box(x-.04,y-.04,-.22,.01,r1,g1,b1);
    box(x-.03,y-.05,-.20,.01,r1,g1,b1);
    box(x-.05,y-.06,-.15,.01,r1,g1,b1);
    box(x-.1,y-.07,-.1,.01,r1,g1,b1);
    box(x-.12,y-.08,-.09,.01,r1,g1,b1);
    box(x-.12,y-.09,-.1,.01,r1,g1,b1);
    box(x-.03,y+.03,-.3,.01,r1,g1,b1);
    box(x-.04,y+.04,-.28,.01,r1,g1,b1);
    box(x-.05,y+.05,-.15,.01,r1,g1,b1);
    box(x-.06,y+.06,-.13,.01,r1,g1,b1);
    box(x-.2,y+.03,-.08,.01,r1,g1,b1);
    box(x-.2,y+.04,-.08,.01,r1,g1,b1);
    box(x-.27,y+.05,-.05,.01,r1,g1,b1);
    box(x-.28,y+.06,-.04,.01,r1,g1,b1);
    box(x-.29,y+.06,-.01,.04,r1,g1,b1);

    //
    box(x-.04,y+.03,-.03,.02,0.24, 0.27, 0.27);
    box(x-.03,y+.03,-.01,.01,0.24, 0.27, 0.27);
    box(x-.08,y+.03,-.02,.02,0.24, 0.27, 0.27);
   // box(x-.112,y+.03,-.01,.02,0.24, 0.27, 0.27);

    float t=y;
    for(int i=0;i<3;i++)
    {
        planeBox(x,t,z,0,0,0);
        t+=.01;
    }
    planeBox(x-.01,y+.03,z,0,0,0);
    planeBox(x-.02,y+.03,z,0,0,0);
    planeBox(x-.03,y+.03,z,0,0,0);
    planeBox(x-.04,y+.04,z,0,0,0);
    planeBox(x-.05,y+.05,z,0,0,0);
    planeBox(x-.06,y+.06,z,0,0,0);
    planeBox(x-.07,y+.06,z,0,0,0);
    planeBox(x-.08,y+.06,z,0,0,0);
    planeBox(x-.09,y+.06,z,0,0,0);
    float t1=x-.1;
    for(int i=0;i<8;i++)
    {
        planeBox(t1,y+.07,z,0,0,0);
        t1-=.01;

    }
    planeBox(x-.18,y+.06,z,0,0,0);
    planeBox(x-.19,y+.06,z,0,0,0);
    planeBox(x-.2,y+.05,z,0,0,0);
    planeBox(x-.21,y+.05,z,0,0,0);
    planeBox(x-.22,y+.05,z,0,0,0);
    planeBox(x-.23,y+.05,z,0,0,0);
    planeBox(x-.24,y+.05,z,0,0,0);
    planeBox(x-.25,y+.05,z,0,0,0);
    planeBox(x-.26,y+.04,z,0,0,0);
    planeBox(x-.26,y+.03,z,0,0,0);
    planeBox(x-.27,y+.05,z,0,0,0);
    planeBox(x-.28,y+.06,z,0,0,0);
    planeBox(x-.29,y+.07,z,0,0,0);
    planeBox(x-.29,y+.08,z,0,0,0);
    planeBox(x-.29,y+.09,z,0,0,0);
    planeBox(x-.29,y+.1,z,0,0,0);
    planeBox(x-.3,y+.11,z,0,0,0);
    planeBox(x-.31,y+.12,z,0,0,0);
    planeBox(x-.32,y+.11,z,0,0,0);
    planeBox(x-.33,y+.1,z,0,0,0);
    planeBox(x-.33,y+.09,z,0,0,0);
    planeBox(x-.33,y+.08,z,0,0,0);
    planeBox(x-.33,y+.07,z,0,0,0);
    planeBox(x-.33,y+.06,z,0,0,0);
    planeBox(x-.33,y+.05,z,0,0,0);
    planeBox(x-.33,y+.04,z,0,0,0);
    planeBox(x-.33,y+.03,z,0,0,0);
    planeBox(x-.33,y+.02,z,0,0,0);
    planeBox(x-.32,y+.01,z,0,0,0);
    planeBox(x-.31,y+.0,z,0,0,0);
    planeBox(x-.32,y-.01,z,0,0,0);
    planeBox(x-.33,y-.02,z,0,0,0);
    planeBox(x-.33,y-.03,z,0,0,0);
    planeBox(x-.32,y-.03,z,0,0,0);
    planeBox(x-.31,y-.03,z,0,0,0);
    planeBox(x-.3,y-.03,z,0,0,0);
    planeBox(x-.29,y-.03,z,0,0,0);
    planeBox(x-.28,y-.03,z,0,0,0);
     planeBox(x-.27,y-.04,z,0,0,0);
     planeBox(x-.26,y-.04,z,0,0,0);
     planeBox(x-.25,y-.05,z,0,0,0);
     planeBox(x-.24,y-.05,z,0,0,0);
     planeBox(x-.23,y-.05,z,0,0,0);
     planeBox(x-.22,y-.05,z,0,0,0);
     planeBox(x-.21,y-.05,z,0,0,0);
     planeBox(x-.2,y-.05,z,0,0,0);
     planeBox(x-.2,y-.06,z,0,0,0);
     planeBox(x-.2,y-.07,z,0,0,0);
     planeBox(x-.21,y-.08,z,0,0,0);
     planeBox(x-.22,y-.09,z,0,0,0);
     planeBox(x-.21,y-.1,z,0,0,0);
     planeBox(x-.2,y-.1,z,0,0,0);
     planeBox(x-.19,y-.1,z,0,0,0);
     planeBox(x-.18,y-.1,z,0,0,0);
     planeBox(x-.17,y-.1,z,0,0,0);
     planeBox(x-.16,y-.1,z,0,0,0);
     planeBox(x-.15,y-.1,z,0,0,0);
     planeBox(x-.14,y-.1,z,0,0,0);
     planeBox(x-.13,y-.09,z,0,0,0);
     planeBox(x-.12,y-.08,z,0,0,0);
     planeBox(x-.11,y-.07,z,0,0,0);
     planeBox(x-.1,y-.07,z,0,0,0);
     planeBox(x-.09,y-.07,z,0,0,0);
     planeBox(x-.08,y-.07,z,0,0,0);
     planeBox(x-.07,y-.07,z,0,0,0);
     planeBox(x-.06,y-.06,z,0,0,0);
     planeBox(x-.05,y-.06,z,0,0,0);
     planeBox(x-.04,y-.05,z,0,0,0);
     planeBox(x-.05,y-.05,z,0,0,0);
     planeBox(x-.04,y-.04,z,0,0,0);
    planeBox(x-.04,y-.03,z,0,0,0);
    planeBox(x-.03,y-.03,z,0,0,0);
    planeBox(x-.02,y-.03,z,0,0,0);
    planeBox(x-.01,y-.02,z,0,0,0);
    planeBox(x-.0,y-.02,z,0,0,0);
    planeBox(x-.0,y-.01,z,0,0,0);




}
void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
     plane(0.0,0.5,1);
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(500, 50);
    glutInitWindowSize(600, 600);
    glutCreateWindow("OpenGL Example");

    glClearColor(0.30, 0.71, 0.81, 1.0f);  // White background



    glutDisplayFunc(drawScene);
    glutMainLoop();
    return 0;
}
