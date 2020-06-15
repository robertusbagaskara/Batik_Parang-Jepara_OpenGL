#include <iostream>
#include <GL/freeglut.h>


void one() {
	glBegin(GL_QUADS);
	for (int x = 50; x <= 750; x = x + 350) {
		for (int y = -50; y <= 650; y = y + 350) {
			glVertex2i(x - 150, y);
			glVertex2i(x, y - 150);
			glVertex2i(x + 150, y);
			glVertex2i(x, y + 150);
		}
	}
	glEnd();
}

void two() {
	glBegin(GL_QUADS);
	for (int x = -125; x <= 925; x = x + 350) {
		for (int y = 125; y <= 475; y = y + 350) {
			glVertex2i(x - 150, y);
			glVertex2i(x, y - 150);
			glVertex2i(x + 150, y);
			glVertex2i(x, y + 150);
		}
	}
	glEnd();
}

void centerOrnament() {
	double y = 300;
	for (double x = 50; x <= 750; x = x + 350) {
		glColor3ub(132, 129, 133);
		glBegin(GL_QUADS);
		glVertex2f(x - 50, y + 75);
		glVertex2f(x, y);
		glVertex2f(x + 50, y + 75);
		glVertex2f(x, y + 125);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2f(x - 50, y - 75);
		glVertex2f(x, y - 125);
		glVertex2f(x + 50, y - 75);
		glVertex2f(x, y);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2f(x - 37.5, y);
		glVertex2f(x, y - 25);
		glVertex2f(x + 37.5, y);
		glVertex2f(x, y + 25);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2f(x + 12.5, y);
		glVertex2f(x + 37.5, y);
		glVertex2f(x + 87.5, y + 37.5);
		glVertex2f(x + 75, y + 50);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2f(x + 75, y - 50);
		glVertex2f(x + 87.5, y - 37.5);
		glVertex2f(x + 37.5, y);
		glVertex2f(x + 12.5, y);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2f(x - 87.5, y - 37.5);
		glVertex2f(x - 75, y - 50);
		glVertex2f(x - 12.5, y);
		glVertex2f(x - 37.5, y);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2f(x - 37.5, y);
		glVertex2f(x - 12.5, y);
		glVertex2f(x - 75, y + 50);
		glVertex2f(x - 87.5, y + 37.5);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2f(x + 62.5, y);
		glVertex2f(x + 100, y - 25);
		glVertex2f(x + 125, y);
		glVertex2f(x + 100, y + 25);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2f(x - 125, y);
		glVertex2f(x - 100, y - 25);
		glVertex2f(x - 62.5, y);
		glVertex2f(x - 100, y + 25);
		glEnd();
		glColor3ub(80, 75, 81);
		glBegin(GL_POLYGON);
		glVertex2f(x - 25, y + 75);
		glVertex2f(x, y + 37.5);
		glVertex2f(x + 25, y + 75);
		glVertex2f(x, y + 100);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 25, y - 75);
		glVertex2f(x, y - 100);
		glVertex2f(x + 25, y - 75);
		glVertex2f(x, y - 37.5);
		glEnd();
	}
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(80, 75, 81);
	one();
	two();
	centerOrnament();
	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(801, 601);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Parang Jepara Motive");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}