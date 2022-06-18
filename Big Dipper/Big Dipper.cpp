#include <iostream>
#include <GL/glut.h>
using namespace std;
void myInit(void) {
	glClearColor(0.0156, 0.0274, 0.1254, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 200, 0, 200);
}
void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);

	glVertex2i(50, 135);
	glVertex2i(80, 130);
	glVertex2i(100, 115);
	glVertex2i(120, 100);
	glVertex2i(145, 95);
	glVertex2i(140, 75);
	glVertex2i(122, 78);

	glEnd();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Big Dipper");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}