// Problem Statement:
// Draw Parabola

#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include "iostream"
using namespace std;
float a = 0.5, t = -1;

void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.5, 0.0);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	double ang = 0.0;

	for (int i = 0; t<=1; i++)
	{
		glVertex2d(a * t * t, 2*a*t);
		t = t + 0.001;
		//cout << ang << " " << a * cos(ang) << endl;
	}

	glEnd();
	glPopMatrix();
	glFlush();
}


int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(840, 680);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Ellipse : Polynomial Method ");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}
