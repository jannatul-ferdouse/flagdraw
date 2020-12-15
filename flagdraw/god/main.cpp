#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init(void) {
    glClearColor(0.0, 0.0, 0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}
void lineSegment(void) {
glColor3f (0.4,1,1);
glBegin(GL_POLYGON);
glVertex3f (200,350,0.0);
glVertex3f (700,350, 0.0);
glVertex3f (700,600, 0.0);
glVertex3f (200,600 ,0.0);
glEnd();
glColor3f (0.8,0.8,0.3);
glBegin(GL_POLYGON);
glVertex3f (200,350,0.0);
glVertex3f (260,350, 0.0);
glVertex3f (260,600, 0.0);
glVertex3f (200,600 ,0.0);
glEnd();
glColor3f (0.9,0,1);
glBegin(GL_TRIANGLES);
glVertex3f (260,600,0.0);
glVertex3f (360,600, 0.0);
glVertex3f (300,450, 0.0);

glEnd();

glColor3f (0.9,0,1);
glBegin(GL_TRIANGLES);
glVertex3f (260,350,0.0);
glVertex3f (360,350, 0.0);
glVertex3f (300,450, 0.0);

glEnd();
glColor3f (0.7,0.2,1);
glBegin(GL_POLYGON);
glVertex3f (355,350,0.0);
glVertex3f (400,350, 0.0);
glVertex3f (400,600, 0.0);
glVertex3f (355,600 ,0.0);
glEnd();


   float theta;
    int posX = 570;
    int posY = 480;
    int radio = 50;

    glColor3f(0.5,0,1);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta = i*3.1416/180;
        glVertex2f(posX + radio*cos(theta), posY + radio*sin(theta));
    }
    glEnd();
glColor3f (0.8,0.8,0.3);
glBegin(GL_POLYGON);
glVertex3f (200,0,0.0);
glVertex3f (260,0, 0.0);
glVertex3f (260,350, 0.0);
glVertex3f (200,350 ,0.0);
glEnd();

glColor3f (0.7,0,0.2);//last one
glBegin(GL_POLYGON);
glVertex3f (170,0,0.0);
glVertex3f (290,0, 0.0);
glVertex3f (290,80, 0.0);
glVertex3f (170,80 ,0.0);
glEnd();


    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Circle Draw");
    init();
    glutDisplayFunc(lineSegment);
    glutMainLoop();
}
