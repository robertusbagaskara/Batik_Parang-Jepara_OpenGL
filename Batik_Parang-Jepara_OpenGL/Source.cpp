#include <iostream>
#include <GL/freeglut.h>

void background() {
	glColor3ub(182, 180, 183);
	glBegin(GL_QUADS);
	glVertex2f(-100, -50);
	glVertex2f(900, -50);
	glVertex2f(900, 650);
	glVertex2f(-100, 650);
}

void rectangleRow(int xMin, int xMax, int yMin, int yMax) {
	glColor3ub(55, 50, 50);
	glBegin(GL_QUADS);
	for (int x = xMin; x <= xMax; x = x + 350) {
		for (int y = yMin; y <= yMax; y = y + 350) {
			glVertex2i(x - 150, y);
			glVertex2i(x, y - 150);
			glVertex2i(x + 150, y);
			glVertex2i(x, y + 150);
		}
	}
	glEnd();
}

void centerOrnament(int a, int b, int c) {
	double y = c;
	for (double x = a; x <= b; x = x + 350) {
		glColor3ub(182, 180, 183);
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
		glBegin(GL_TRIANGLES);
		glVertex2f(x - 37.5, y);
		glVertex2f(x, y - 25);;
		glVertex2f(x, y + 25);
		glEnd();
		glBegin(GL_TRIANGLES);
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
		glColor3ub(55, 50, 50);
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

void upperOrnament(int a, int b, int c) {
	for (int x = a; x <= b; x = x + 350) {
		int y = c;
		glColor3ub(182, 180, 183);
		glBegin(GL_POLYGON);
		glVertex2f(x - 100, y - 25);
		glVertex2f(x - 75, y - 50);
		glVertex2f(x, y + 25);
		glVertex2f(x, y + 75);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x, y + 25);
		glVertex2f(x + 75, y - 50);
		glVertex2f(x + 100, y - 25);
		glVertex2f(x, y + 75);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 125, y);
		glVertex2f(x - 100, y - 25);
		glVertex2f(x - 75, y);
		glVertex2f(x - 100, y + 25);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 87.5, y + 37.5);
		glVertex2f(x - 62.5, y + 12.5);
		glVertex2f(x - 37.5, y + 37.5);
		glVertex2f(x - 62.5, y + 62.5);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 50, y + 75);
		glVertex2f(x - 25, y + 50);
		glVertex2f(x, y + 75);
		glVertex2f(x - 25, y + 100);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x + 75, y);
		glVertex2f(x + 100, y - 25);
		glVertex2f(x + 125, y);
		glVertex2f(x + 100, y + 25);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x + 37.5, y + 37.5);
		glVertex2f(x + 62.5, y + 12.5);
		glVertex2f(x + 87.5, y + 37.5);
		glVertex2f(x + 62.5, y + 62.5);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x, y + 75);
		glVertex2f(x + 25, y + 50);
		glVertex2f(x + 50, y + 75);
		glVertex2f(x + 25, y + 100);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 50, y - 75);
		glVertex2f(x, y - 125);
		glVertex2f(x + 50, y - 75);
		glVertex2f(x, y - 25);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 12.5, y + 112.5);
		glVertex2f(x, y + 100);
		glVertex2f(x + 12.5, y + 112.5);
		glVertex2f(x, y + 125);
		glEnd();
	}
}

void lowerOrnament(int a, int b, int c) {
	for (int x = a; x <= b; x = x + 350) {
		int y = c;
		glColor3ub(182, 180, 183);
		glBegin(GL_POLYGON);
		glVertex2f(x - 100, y + 25);
		glVertex2f(x, y - 75);
		glVertex2f(x, y - 25);
		glVertex2f(x - 75, y + 50);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x, y - 25);
		glVertex2f(x, y - 75);
		glVertex2f(x + 100, y + 25);
		glVertex2f(x + 75, y + 50);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 125, y);
		glVertex2f(x - 100, y - 25);
		glVertex2f(x - 75, y);
		glVertex2f(x - 100, y + 25);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 87.5, y - 37.5);
		glVertex2f(x - 62.5, y - 62.5);
		glVertex2f(x - 37.5, y - 37.5);
		glVertex2f(x - 62.5, y - 12.5);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 50, y - 75);
		glVertex2f(x - 25, y - 100);
		glVertex2f(x, y - 75);
		glVertex2f(x - 25, y - 50);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x, y - 75);
		glVertex2f(x + 25, y - 100);
		glVertex2f(x + 50, y - 75);
		glVertex2f(x + 25, y - 50);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x + 37.5, y - 37.5);
		glVertex2f(x + 62.5, y - 62.5);
		glVertex2f(x + 87.5, y - 37.5);
		glVertex2f(x + 62.5, y - 12.5);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x + 75, y);
		glVertex2f(x + 100, y - 25);
		glVertex2f(x + 125, y);
		glVertex2f(x + 75, y + 50);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 50, y + 75);
		glVertex2f(x, y + 25);
		glVertex2f(x + 50, y + 75);
		glVertex2f(x, y + 125);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(x - 12.5, y - 112.5);
		glVertex2f(x, y - 125);
		glVertex2f(x + 12.5, y - 112.5);
		glVertex2f(x, y - 100);
		glEnd();
	}
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	background();
	rectangleRow(50, 750, -50, 650);
	rectangleRow(-125, 925, 125, 475);
	centerOrnament(50, 750, 650);
	centerOrnament(50, 750, 300);
	centerOrnament(50, 750, -50);
	upperOrnament(-125, 925, 475);
	lowerOrnament(-125, 925, 125);
	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100.0, 900.0, -50.0, 650.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1001, 701);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Parang Jepara Motive");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}