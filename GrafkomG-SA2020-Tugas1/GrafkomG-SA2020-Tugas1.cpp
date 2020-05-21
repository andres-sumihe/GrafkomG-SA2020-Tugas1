#include<windows.h>
#include <GL/glut.h>
#include<iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
GLfloat red = 1.0f, green = 1.0f, blue = 1.0f;
GLfloat red_change = 0.0f, green_change = 0.0f;
void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 27:
        exit(0);
    }
}
void pressKey(int key, int x, int y) {

    switch (key) {
    case GLUT_KEY_LEFT: red_change = -1.0f; break;
    case GLUT_KEY_RIGHT: red_change = 1.0f; break;
    case GLUT_KEY_UP: green_change = 1.0f; break;
    case GLUT_KEY_DOWN: green_change = -1.0f; break;
    }
}

void releaseKey(int key, int x, int y) {

    switch (key) {
    case GLUT_KEY_LEFT:
    case GLUT_KEY_RIGHT: red_change = 0.0f; break;
    case GLUT_KEY_UP:
    case GLUT_KEY_DOWN: green_change = 0.0f; break;
    }
}
void change_red(GLfloat r)
{
    red = red - sin(r);
}
void change_green(GLfloat g)
{
    green = green - sin(g);
}
void initRendering()
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);
    glClearColor(0.1f, 0.3f, 0.6f, 1.0f);
}

void handleResize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 30.0;
float _cameraangle = 0.0;

void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(-_cameraangle, 0.0f, 1.0f, 0.0f);
    glTranslatef(0.0f, 0.0f, -10.0f);

    glPushMatrix();
    glColor3f(red, green, blue);
    glTranslatef(0.0f, -1.0f, 0.0f);
    glScalef(2.0f, 2.0f, 2.0f);
    glRotatef(_angle, 1.0f, 3.0f, 2.0f);
    glBegin(GL_QUADS);

    glVertex3f(-0.7f, 0.0f, 0.0);
    glVertex3f(0.7f, 0.0f, 0.0);
    glVertex3f(0.5f, 2.0f, 0.0);
    glVertex3f(-0.5f, 2.0f, 0.0);

    glEnd();

    glPopMatrix();
    glutSwapBuffers();


}
void update(int value)
{
    _angle += 2.0f;
    if (_angle > 360.f)
    {
        _angle -= 360;
    }
    if (red_change > 0.0f)
    {
        if (red != 1.0f)
            red = red + 0.01f;
        else
            red = red;
    }
    else if (red_change < 0.0f)
    {
        if (red != 0.0f)
            red = red - 0.01f;
        else
            red = red;
    }
    else
        red = red;

    if (green_change > 0.0f)
    {
        if (green != 1.0f)
            green = green + 0.01f;
        else
            green = green;
    }
    else if (green_change < 0.0f)
    {
        if (green != 0.0f)
            green = green - 0.01f;
        else
            green = green;
    }
    else
        green = green;

    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600, 600);


    glutCreateWindow("rotate");
    initRendering();


    glutIgnoreKeyRepeat(1);
    glutDisplayFunc(drawScene);
    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(pressKey);
    glutSpecialUpFunc(releaseKey);
    glutReshapeFunc(handleResize);

    glutTimerFunc(25, update, 0);
    glutMainLoop();


    return 0;
}
